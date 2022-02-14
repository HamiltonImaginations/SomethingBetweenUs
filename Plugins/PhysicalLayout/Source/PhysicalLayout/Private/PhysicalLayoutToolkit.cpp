// Copyright Saeid Gholizade. All Rights Reserved. 2020

#include "PhysicalLayoutToolkit.h"
#include "Engine/Selection.h"

#include "Widgets/Views/SListView.h"
#include "Widgets/Input/SSlider.h"
#include "Widgets/Input/SCheckBox.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Input/SComboButton.h"
#include "Widgets/Text/STextBlock.h"
#include "EditorModeManager.h"
#include "PropertyCustomizationHelpers.h"
#include "Modules/ModuleManager.h"
#include "Framework/MultiBox/MultiBox.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Misc/Attribute.h"
#include "Textures/SlateIcon.h"
#include "PhysicalLayoutCommands.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/Input/SVectorInputBox.h"
#include "Widgets/Input/SRotatorInputBox.h"
#include "Widgets/Input/SSpinBox.h"

#include "SlateUtil.h"
#include "PhysicalLayoutMode.h"
#include "Components/StaticMeshComponent.h"
#include "MeshMergeModule.h"
#include "Engine/MeshMerging.h"

#define LOCTEXT_NAMESPACE "FPhysicalLayoutToolkit"

FPhysicalLayoutToolkit::FPhysicalLayoutToolkit()
{
	ThumbnailPool = MakeShareable(new FAssetThumbnailPool(24));
	bIsPercentRelative = false;
	bUseSelected = false;
	bEnableGravity = false;
	CurrentLayoutMode = ELayoutMode::Select;
}

void FPhysicalLayoutToolkit::Init(const TSharedPtr<IToolkitHost>& InitToolkitHost)
{
	BindCommands();

	TSharedPtr<FReferenceMesh> mesh = MakeShareable<FReferenceMesh>(new FReferenceMesh());
	mesh.Get()->Percent = 100;
	ReferenceMeshes.Add(mesh);

	LayoutModes.Add(MakeShared<FString>(ELayoutMode::Select));
	LayoutModes.Add(MakeShared<FString>(ELayoutMode::PaintSelect));
	LayoutModes.Add(MakeShared<FString>(ELayoutMode::Transform));
	LayoutModes.Add(MakeShared<FString>(ELayoutMode::Paint));
	
	CurrentLayoutMode = ELayoutMode::Transform;

	const FPhysicalLayoutCommands& Commands = FPhysicalLayoutCommands::Get();
	
	TSharedPtr<FUICommandList> CommandList = GetToolkitCommands();

	FToolBarBuilder LayoutModeButtons(CommandList, FMultiBoxCustomization::None);

	LayoutModeButtons.AddToolBarButton(Commands.TransformationCommand);
	LayoutModeButtons.AddToolBarButton(Commands.PaintCommand);
	LayoutModeButtons.AddToolBarButton(Commands.SelectCommand);
	LayoutModeButtons.AddToolBarButton(Commands.PaintSelectCommand);

	
	SAssignNew(ToolkitWidget, SBorder)
	.HAlign(HAlign_Fill)
	.Padding(15)
	[
		// Toolbar
		SNew(SVerticalBox)
		+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(4, 0, 4, 5)
		[
			SNew(SOverlay)
			+ SOverlay::Slot()
			[
				SNew(SBorder)
				.BorderImage(FEditorStyle::GetBrush("ToolPanel.GroupBorder"))
				.HAlign(HAlign_Center)
				[
					LayoutModeButtons.MakeWidget()
				]
			]
		]
	
		// Transform Tool
		+ SVerticalBox::Slot()
		.AutoHeight()
		[
			CreateTransformModeWidget().ToSharedRef()
		]
	
		// Paint Tool
		+ SVerticalBox::Slot()
		[
			CreatePaintModeWidget().ToSharedRef()
		]

		// Select Tool
		+ SVerticalBox::Slot()
		.AutoHeight()
		[
			CreateSelectModeWidget().ToSharedRef()
		]
	
		// Paint Select Tool
		+ SVerticalBox::Slot()
		.AutoHeight()
		[
			CreatePaintSelectModeWidget().ToSharedRef()
		]
	];
	FModeToolkit::Init(InitToolkitHost);
}

void FPhysicalLayoutToolkit::RegisterTabSpawners(const TSharedRef<FTabManager>& TabManager)
{
	FModeToolkit::RegisterTabSpawners(TabManager);
}

void FPhysicalLayoutToolkit::UnregisterTabSpawners(const TSharedRef<FTabManager>& TabManager)
{
	SetEdMode(nullptr);
	
	TSharedPtr<FUICommandList> CommandList = GetToolkitCommands();

	auto Commands = FPhysicalLayoutCommands::Get();

	for (auto& Command : Commands.Commands)
	{
		CommandList->UnmapAction(Command);
	}

	CommandList.Reset();
	
	FModeToolkit::UnregisterTabSpawners(TabManager);
}

void FPhysicalLayoutToolkit::ModeChanged(TSharedPtr<FString> Item, ESelectInfo::Type SelectInfo)
{
	if (Item)
	{
		CurrentLayoutMode = *Item.Get();
	}
}

TArray<TSharedPtr<FReferenceMesh>> FPhysicalLayoutToolkit::GetReferenceMeshes() const
{
	return ReferenceMeshes;
}

TSharedRef<ITableRow> FPhysicalLayoutToolkit::GetReferenceMeshWidget(TSharedPtr<FReferenceMesh> InItem, const TSharedRef<STableViewBase>& OwnerTable)
{
	TSharedPtr<SSlider> Slider;
	TSharedPtr<STableRow<TSharedPtr<FReferenceMesh>>> row;

	SAssignNew(row, STableRow<TSharedPtr<FReferenceMesh>>, OwnerTable)
	[
		SNew(SHorizontalBox)
		+ SHorizontalBox::Slot()
		.FillWidth(1)
		[
			// Reference mesh widget
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
			.AutoHeight()
			[
				SNew(SObjectPropertyEntryBox)
				.ObjectPath_Lambda([this, InItem]() -> FString
					{
						return InItem.Get()->StaticMeshPath;
					}
				)
				.OnObjectChanged_Lambda([this, InItem](const FAssetData& InAsset)
					{
						if (InAsset.IsValid())
						{
							InItem.Get()->StaticMeshPath = InAsset.ObjectPath.ToString();
							InItem.Get()->StaticMesh = Cast<UStaticMesh>(InAsset.GetAsset());
							SetRandomMesh();
							if (EdMode)
							{
								EdMode->RegisterBrush();
							}
						}
					}
				)
				.AllowedClass(UStaticMesh::StaticClass())
				.DisplayThumbnail(true)
				.DisplayUseSelected(false)
				.DisplayBrowse(true)
				.DisplayUseSelected(true)
				.ThumbnailPool(ThumbnailPool)
			]

		// Chance slider
		+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SAssignNew(Slider, SSlider)
			.MinValue(0)
			.MaxValue(100)
			.OnValueChanged_Lambda([this, InItem](float InValue)
				{

					float delta = (InItem.Get()->Percent - InValue);
					InItem.Get()->Percent = InValue;
					if (bIsPercentRelative)
					{
						if (InItem.Get()->bIsAdjusting)
						{
							return;
						}
						if (ReferenceMeshes.Num() > 1)
						{
							float sum = 0;
							int c = 0;
							for (auto& RefMesh : ReferenceMeshes)
							{
								if (RefMesh != InItem)
								{
									RefMesh.Get()->bIsAdjusting = true;
									RefMesh.Get()->Percent += delta;
									delta = RefMesh.Get()->Percent < 0 ? RefMesh.Get()->Percent : RefMesh.Get()->Percent >= 100 ? RefMesh.Get()->Percent - 100 : 0;
									RefMesh.Get()->Percent = FMath::Clamp(RefMesh.Get()->Percent, 0.0f, 100.0f);

									if (auto RefSlider = Sliders.Find(RefMesh))
									{
										RefSlider->Get()->SetValue(RefMesh.Get()->Percent);
									}

									RefMesh.Get()->bIsAdjusting = false;
								}
								sum += RefMesh.Get()->Percent;
								c++;
							}
						}
					}
					SetRandomMesh();
				}
			)
			.Value(InItem.Get()->Percent)
					.ForceVolatile(true)
			]
		]

		// Delete button
		+ SHorizontalBox::Slot()
		.AutoWidth()
		[
			SNew(SButton)
			.OnClicked_Lambda([=]()
				{
					if (ReferenceMeshes.Num() > 1)
					{
						int32 RefMeshIndex = ReferenceMeshes.Find(InItem);
						if (RefMeshIndex >= 0)
						{
							TSharedPtr<FReferenceMesh> RefMesh = ReferenceMeshes[RefMeshIndex];
							ReferenceMeshes.RemoveAt(RefMeshIndex);
							RefMesh.Reset();
						}
					}
					return FReply::Handled();
				})
			.ButtonStyle(FPhysicalLayoutStyle::Get(), "Delete")
			.HAlign(EHorizontalAlignment::HAlign_Right)
			.VAlign(EVerticalAlignment::VAlign_Center)
		]
		.HAlign(EHorizontalAlignment::HAlign_Right)
		.VAlign(EVerticalAlignment::VAlign_Center)

		// Select button
		+ SHorizontalBox::Slot()
		.AutoWidth()
		[
			SNew(SButton)
			.OnClicked_Lambda([=]()
			{
				if (EdMode)
				{
					EdMode->SelectPlacedActors(InItem->StaticMesh);
				}
				return FReply::Handled();
			})
			.ButtonStyle(FPhysicalLayoutStyle::Get(), "Select")
			.HAlign(EHorizontalAlignment::HAlign_Right)
			.VAlign(EVerticalAlignment::VAlign_Center)
		]
		.HAlign(EHorizontalAlignment::HAlign_Right)
		.VAlign(EVerticalAlignment::VAlign_Center)
	];

	if (!Sliders.Find(InItem))
	{
		Sliders.Add(InItem, Slider);
	}
	return row.ToSharedRef();
}

TSharedPtr<SWidget> FPhysicalLayoutToolkit::CreateSelectModeWidget()
{
	return SNew(SBox)
	.Visibility_Lambda([=]() { return GetCurrentLayoutMode() == ELayoutMode::Select ? EVisibility::Visible : EVisibility::Collapsed; })
	.WidthOverride(300)
	[
		SNew(SVerticalBox)
		+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(STextBlock)
			.ColorAndOpacity(FLinearColor::Yellow)
			.Text(LOCTEXT("SelectModeHelp", "Physic is not enable\nClick to select\nCtrl+Click to deselect"))
		]
		+ SVerticalBox::Slot()
		.Padding(0, 10)
		.AutoHeight()
		[
			CreateSharedWidget().ToSharedRef()
		]
	];
}

TSharedPtr<SWidget> FPhysicalLayoutToolkit::CreatePaintSelectModeWidget()
{
	return SNew(SBox)
	.Visibility_Lambda([=]() { return GetCurrentLayoutMode() == ELayoutMode::PaintSelect ? EVisibility::Visible : EVisibility::Collapsed; })
	.WidthOverride(300)
	[
		SNew(SVerticalBox)
		+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(STextBlock)
			.ColorAndOpacity(FLinearColor::Yellow)
			.Text(LOCTEXT("PaintSelectModeHelp"
				, "Physic is not enable\n"
				"Click or drag to select\n"
				"Ctrl+Click or drag to deselect"))
		]
		+ SVerticalBox::Slot()
		.Padding(0, 10)
		.AutoHeight()
		[
			CreateSharedWidget().ToSharedRef()
		]
	];
	
}

TSharedPtr<SWidget> FPhysicalLayoutToolkit::CreateTransformModeWidget()
{
	return SNew(SBox)
	.Visibility_Lambda([=]() { return GetCurrentLayoutMode() == ELayoutMode::Transform ? EVisibility::Visible : EVisibility::Collapsed; })
	.WidthOverride(300)
	[
		SNew(SVerticalBox)
		+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(STextBlock)
			.ColorAndOpacity(FLinearColor::Yellow)
			.Text(LOCTEXT("TransformModeHelp"
					, "WARNING PHYSIC IS ENABLE\n"
					"Move or rotate with transform gizmo\n"
					"Scale will move object toward each others"))
		]
		+ SVerticalBox::Slot()
		.Padding(0, 10)
		.AutoHeight()
		[
			CreateSharedWidget().ToSharedRef()
		]
		
	];
}

TSharedPtr<SWidget> FPhysicalLayoutToolkit::CreatePaintModeWidget()
{
	int RowHeight = 25;
	float LeftWidth = 0.5f;
	float RightWidth = 0.5f;
	auto VerticalScrollbar = SNew(SScrollBar)
		.Orientation(Orient_Vertical)
		.Thickness(FVector2D(14.0f, 14.0f));
	return SNew(SBox)
	.Visibility_Lambda([=]() { return GetCurrentLayoutMode() == ELayoutMode::Paint ? EVisibility::Visible : EVisibility::Collapsed; })
	.WidthOverride(300)
	[
		// Min Distance
		SNew(SVerticalBox)
		+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(STextBlock)
			.ColorAndOpacity(FLinearColor::Yellow)
			.Text(LOCTEXT("PaintModeHelp"
					, "WARNING PHYSIC IS ENABLE\n"
					"Click or drag to place objects\n"
					"Hold Q to switch to Paint select Mode\n"
					"Hold Shift to align to surface normal\n"
					"Hold Shift+Ctrl to align to mouse direction"))
		]
		+ SVerticalBox::Slot()
		.Padding(0, 10)
		.AutoHeight()
		[
			CreateSharedWidget().ToSharedRef()
		]
		+ SVerticalBox::Slot()
		.Padding(0, 2, 0, 2)
		.AutoHeight()
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.VAlign(EVerticalAlignment::VAlign_Center)
			.FillWidth(LeftWidth)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("MinDistanceText", "Min Distance(* MeshRadius)"))
			]
			+ SHorizontalBox::Slot()
			.FillWidth(RightWidth)
			[
				SNew(SSpinBox<float>)
				// .MinValue(0.5)
				// .MaxValue(10)
				.Value(fMinDistance)
				.OnValueChanged_Lambda([this](float InValue)
				{
					fMinDistance = InValue;
					SetRandomMesh();
				})
			]
		]

		// Normal distance
		+ SVerticalBox::Slot()
		.Padding(0, 2, 0, 0)
		.AutoHeight()
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.VAlign(EVerticalAlignment::VAlign_Center)
			.FillWidth(LeftWidth)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("NormalDistanceText", "Normal Distance"))
			]
			+ SHorizontalBox::Slot()
			.FillWidth(RightWidth)
			[
				SNew(SSpinBox<float>)
				// .MinValue(0)
				// .MaxValue(100)
				.Value(GetNormalDistance())
				.OnValueChanged_Lambda([this](float InValue)
				{
					fNormalDistance = InValue;
					SetRandomMesh();
				})
			]
		]

		// Min Position
		+ SVerticalBox::Slot()
		.Padding(0, 2, 0, 0)
		.AutoHeight()
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.VAlign(EVerticalAlignment::VAlign_Center)
			.FillWidth(LeftWidth)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("MinPositionRandomText", "Min Position Random"))
			]
			+ SHorizontalBox::Slot()
			.FillWidth(RightWidth)
			[
				SNew(SVectorInputBox)
				.bColorAxisLabels(true)
				.AllowSpin(true)
				.X_Lambda([=]()->TOptional<float> { return MinPositionRandom.X; })
				.Y_Lambda([=]()->TOptional<float> { return MinPositionRandom.Y; })
				.Z_Lambda([=]()->TOptional<float> { return MinPositionRandom.Z; })
				.OnXChanged_Lambda([=](float InValue) { MinPositionRandom.X = InValue; SetRandomMesh(); })
				.OnYChanged_Lambda([=](float InValue) { MinPositionRandom.Y = InValue; SetRandomMesh(); })
				.OnZChanged_Lambda([=](float InValue) { MinPositionRandom.Z = InValue; SetRandomMesh(); })
			]
			+SHorizontalBox::Slot()
			.VAlign(VAlign_Center)
			.AutoWidth()
			[
				SNew(SButton)
				.OnClicked_Lambda([this]() { MinPositionRandom = FVector::ZeroVector; return FReply::Handled();})
				.Visibility_Lambda([this]() { return MinPositionRandom.IsZero() ? EVisibility::Hidden : EVisibility::Visible; })
				.ButtonStyle( FEditorStyle::Get(), "NoBorder" )
				.Content()
				[
					SNew(SImage)
					.Image( FEditorStyle::GetBrush("PropertyWindow.DiffersFromDefault") )
				]
			]
		]

		// Max Position
		+ SVerticalBox::Slot()
		.Padding(0, 0, 0, 2)
		.AutoHeight()
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.VAlign(EVerticalAlignment::VAlign_Center)
			.FillWidth(LeftWidth)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("MaxPositionRandomText", "Max Position Random"))
			]
			+ SHorizontalBox::Slot()
			.FillWidth(RightWidth)
			[
				SNew(SVectorInputBox)
				.bColorAxisLabels(true)
				.AllowSpin(true)
				.X_Lambda([=]()->TOptional<float> { return MaxPositionRandom.X; })
				.Y_Lambda([=]()->TOptional<float> { return MaxPositionRandom.Y; })
				.Z_Lambda([=]()->TOptional<float> { return MaxPositionRandom.Z; })
				.OnXChanged_Lambda([=](float InValue) { MaxPositionRandom.X = InValue; SetRandomMesh(); })
				.OnYChanged_Lambda([=](float InValue) { MaxPositionRandom.Y = InValue; SetRandomMesh(); })
				.OnZChanged_Lambda([=](float InValue) { MaxPositionRandom.Z = InValue; SetRandomMesh(); })
			]
			+SHorizontalBox::Slot()
			.VAlign(VAlign_Center)
			.AutoWidth()
			[
				SNew(SButton)
				.OnClicked_Lambda([this]() { MaxPositionRandom = FVector::ZeroVector; return FReply::Handled(); })
				.Visibility_Lambda([this]() { return MaxPositionRandom.IsZero() ? EVisibility::Hidden : EVisibility::Visible; })
				.ButtonStyle( FEditorStyle::Get(), "NoBorder" )
				.Content()
				[
					SNew(SImage)
					.Image( FEditorStyle::GetBrush("PropertyWindow.DiffersFromDefault") )
				]
			]
		]

		// Min rotation
		+ SVerticalBox::Slot()
		.Padding(0, 2, 0, 0)
		.AutoHeight()
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.VAlign(EVerticalAlignment::VAlign_Center)
			.FillWidth(LeftWidth)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("MinRotateRandomText", "Min Rotation Random"))
			]
			+ SHorizontalBox::Slot()
			.FillWidth(RightWidth)
			[
				SNew(SRotatorInputBox)
				.bColorAxisLabels(true)
				.AllowSpin(true)
				.Yaw_Lambda([=]()->TOptional<float> { return	MinRotateRandom.Yaw; })
				.Pitch_Lambda([=]()->TOptional<float> { return MinRotateRandom.Pitch; })
				.Roll_Lambda([=]()->TOptional<float> { return MinRotateRandom.Roll; })
				.OnYawChanged_Lambda([=](float InValue) { MinRotateRandom.Yaw = InValue;	 SetRandomMesh(); })
				.OnPitchChanged_Lambda([=](float InValue) { MinRotateRandom.Pitch = InValue; SetRandomMesh(); })
				.OnRollChanged_Lambda([=](float InValue) { MinRotateRandom.Roll = InValue;	 SetRandomMesh(); })
			]
			+SHorizontalBox::Slot()
			.VAlign(VAlign_Center)
			.AutoWidth()
			[
				SNew(SButton)
				.OnClicked_Lambda([this]() { MinRotateRandom = FRotator::ZeroRotator; return FReply::Handled();})
				.Visibility_Lambda([this]() { return MinRotateRandom.IsZero() ? EVisibility::Hidden : EVisibility::Visible; })
				.ButtonStyle( FEditorStyle::Get(), "NoBorder" )
				.Content()
				[
					SNew(SImage)
					.Image( FEditorStyle::GetBrush("PropertyWindow.DiffersFromDefault") )
				]
			]
		]

		// Max rotation
		+ SVerticalBox::Slot()
		.Padding(0, 0, 0, 2)
		.AutoHeight()
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.VAlign(EVerticalAlignment::VAlign_Center)
			.FillWidth(LeftWidth)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("MaxRotateRandomText", "Max Rotation Random"))
			]
			+ SHorizontalBox::Slot()
			.FillWidth(RightWidth)
			[
				SNew(SRotatorInputBox)
				.bColorAxisLabels(true)
				.AllowSpin(true)
				.Yaw_Lambda([=]()->TOptional<float> { return	MaxRotateRandom.Yaw; })
				.Pitch_Lambda([=]()->TOptional<float> { return MaxRotateRandom.Pitch; })
				.Roll_Lambda([=]()->TOptional<float> { return MaxRotateRandom.Roll; })
				.OnYawChanged_Lambda([=](float InValue)		{ MaxRotateRandom.Yaw = InValue;	SetRandomMesh();})
				.OnPitchChanged_Lambda([=](float InValue)	{ MaxRotateRandom.Pitch = InValue;	SetRandomMesh();})
				.OnRollChanged_Lambda([=](float InValue)	{ MaxRotateRandom.Roll = InValue;	SetRandomMesh();})
			]
			+SHorizontalBox::Slot()
			.VAlign(VAlign_Center)
			.AutoWidth()
			[
				SNew(SButton)
				.OnClicked_Lambda([this]() { MaxRotateRandom = FRotator::ZeroRotator; return FReply::Handled();})
				.Visibility_Lambda([this]() { return MaxRotateRandom.IsZero() ? EVisibility::Hidden : EVisibility::Visible; })
				.ButtonStyle( FEditorStyle::Get(), "NoBorder" )
				.Content()
				[
					SNew(SImage)
					.Image( FEditorStyle::GetBrush("PropertyWindow.DiffersFromDefault") )
				]
			]
		]

		// Min scale
		+ SVerticalBox::Slot()
		.Padding(0, 2, 0, 0)
		.AutoHeight()
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.VAlign(EVerticalAlignment::VAlign_Center)
			.FillWidth(LeftWidth)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("MinScaleRandomText", "Min Scale Random"))
			]
			+SHorizontalBox::Slot()
			.AutoWidth()
			.MaxWidth( 18.0f )
			[
				SNew( SCheckBox )
				.IsChecked_Lambda([this]()
					{
						return IsMinScaleLock()?ECheckBoxState::Checked:ECheckBoxState::Unchecked;
					})
				.OnCheckStateChanged_Lambda([this](ECheckBoxState InState)
					{
						bMinScaleLock = InState == ECheckBoxState::Checked ? true : false;
					})
				.Style( FEditorStyle::Get(), "TransparentCheckBox" )
				[
					SNew( SImage )
					.Image_Lambda([this]()
					{
						return IsMinScaleLock() ? FEditorStyle::GetBrush( TEXT("GenericLock") ) : FEditorStyle::GetBrush( TEXT("GenericUnlock") ) ;
					})
					.ColorAndOpacity( FSlateColor::UseForeground() )
				]
			]
			+ SHorizontalBox::Slot()
			.FillWidth(RightWidth)
			[
				SNew(SVectorInputBox)
				.bColorAxisLabels(true)
				.AllowSpin(true)
				.X_Lambda([=]()->TOptional<float> { return MinScaleRandom.X; })
				.Y_Lambda([=]()->TOptional<float> { return MinScaleRandom.Y; })
				.Z_Lambda([=]()->TOptional<float> { return MinScaleRandom.Z; })
				.OnXChanged_Lambda([=](float InValue)
				{MinScaleRandom.X = InValue; if (IsMinScaleLock()) { MinScaleRandom.Y = InValue; MinScaleRandom.Z = InValue; SetRandomMesh(); }})
				.OnYChanged_Lambda([=](float InValue)
				{MinScaleRandom.Y = InValue; if (IsMinScaleLock()) { MinScaleRandom.X = InValue; MinScaleRandom.Z = InValue; SetRandomMesh(); }})
				.OnZChanged_Lambda([=](float InValue)
				{MinScaleRandom.Z = InValue; if (IsMinScaleLock()) { MinScaleRandom.X = InValue; MinScaleRandom.Y = InValue; SetRandomMesh(); }})
			]
			+SHorizontalBox::Slot()
			.VAlign(VAlign_Center)
			.AutoWidth()
			[
				SNew(SButton)
				.OnClicked_Lambda([this]() { MinScaleRandom = FVector::OneVector; return FReply::Handled();})
				.Visibility_Lambda([this]() { return MinScaleRandom.X==1 && MinScaleRandom.Y==1 && MinScaleRandom.Z==1 ? EVisibility::Hidden : EVisibility::Visible; })
				.ButtonStyle( FEditorStyle::Get(), "NoBorder" )
				.Content()
				[
					SNew(SImage)
					.Image( FEditorStyle::GetBrush("PropertyWindow.DiffersFromDefault") )
				]
			]
		]

		// Max rotation
		+ SVerticalBox::Slot()
		.Padding(0, 0, 0, 2)
		.AutoHeight()
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.VAlign(EVerticalAlignment::VAlign_Center)
			.FillWidth(LeftWidth)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("MaxScaleRandomText", "Max Scale Random"))
			]
			+SHorizontalBox::Slot()
			.AutoWidth()
			.MaxWidth( 18.0f )
			[
				SNew( SCheckBox )
				.IsChecked_Lambda([this]()
					{
						return IsMaxScaleLock() ? ECheckBoxState::Checked:ECheckBoxState::Unchecked;
					})
				.OnCheckStateChanged_Lambda([this](ECheckBoxState InState)
					{
						bMaxScaleLock = InState == ECheckBoxState::Checked ? true : false;
					})
				.Style( FEditorStyle::Get(), "TransparentCheckBox" )
				[
					SNew( SImage )
					.Image_Lambda([this]()
					{
						return IsMaxScaleLock() ? FEditorStyle::GetBrush( TEXT("GenericLock") ) : FEditorStyle::GetBrush( TEXT("GenericUnlock") ) ;
					})
					.ColorAndOpacity( FSlateColor::UseForeground() )
				]
			]
			+ SHorizontalBox::Slot()
			.FillWidth(RightWidth)
			[
				SNew(SVectorInputBox)
				.bColorAxisLabels(true)
				.AllowSpin(true)
				.X_Lambda([=]()->TOptional<float> { return MaxScaleRandom.X; })
				.Y_Lambda([=]()->TOptional<float> { return MaxScaleRandom.Y; })
				.Z_Lambda([=]()->TOptional<float> { return MaxScaleRandom.Z; })
				.OnXChanged_Lambda([=](float InValue)
				{MaxScaleRandom.X = InValue; if (IsMaxScaleLock()) { MaxScaleRandom.Y = InValue; MaxScaleRandom.Z = InValue; SetRandomMesh(); }})
				.OnYChanged_Lambda([=](float InValue)
				{MaxScaleRandom.Y = InValue; if (IsMaxScaleLock()) { MaxScaleRandom.X = InValue; MaxScaleRandom.Z = InValue; SetRandomMesh(); }})
				.OnZChanged_Lambda([=](float InValue)
				{MaxScaleRandom.Z = InValue; if (IsMaxScaleLock()) { MaxScaleRandom.X = InValue; MaxScaleRandom.Y = InValue; SetRandomMesh(); }})
			]
			+SHorizontalBox::Slot()
			.VAlign(VAlign_Center)
			.AutoWidth()
			[
				SNew(SButton)
				.OnClicked_Lambda([this]() { MaxScaleRandom = FVector::OneVector;return FReply::Handled(); })
				.Visibility_Lambda([this]() { return MaxScaleRandom.X==1 && MaxScaleRandom.Y==1 && MaxScaleRandom.Z==1 ? EVisibility::Hidden : EVisibility::Visible; })
				.ButtonStyle( FEditorStyle::Get(), "NoBorder" )
				.Content()
				[
					SNew(SImage)
					.Image( FEditorStyle::GetBrush("PropertyWindow.DiffersFromDefault") )
				]
			]
		]

		// Normal rotation
		+ SVerticalBox::Slot()
		.Padding(0, 2, 0, 2)
		.AutoHeight()
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.VAlign(EVerticalAlignment::VAlign_Center)
			.FillWidth(LeftWidth)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("ExtraNormalRotation", "Extra Normal Rotation"))
			]
			+ SHorizontalBox::Slot()
			.FillWidth(RightWidth)
			[
				SNew(SRotatorInputBox)
				.bColorAxisLabels(true)
				.AllowSpin(true)
				.Yaw_Lambda([=]()->TOptional<float>		{ return NormalRotation.Yaw;	})
				.Pitch_Lambda([=]()->TOptional<float>	{ return NormalRotation.Pitch;	})
				.Roll_Lambda([=]()->TOptional<float>	{ return NormalRotation.Roll;	})
				.OnYawChanged_Lambda([=](float InValue)		{ NormalRotation.Yaw = InValue;		SetRandomMesh();})
				.OnPitchChanged_Lambda([=](float InValue)	{ NormalRotation.Pitch = InValue;	SetRandomMesh();})
				.OnRollChanged_Lambda([=](float InValue)	{ NormalRotation.Roll = InValue;	SetRandomMesh();})
			]
			+SHorizontalBox::Slot()
			.VAlign(VAlign_Center)
			.AutoWidth()
			[
				SNew(SButton)
				.OnClicked_Lambda([this]() { NormalRotation = FRotator::ZeroRotator; return FReply::Handled();})
				.Visibility_Lambda([this]() { return NormalRotation.IsZero() ? EVisibility::Hidden : EVisibility::Visible; })
				.ButtonStyle( FEditorStyle::Get(), "NoBorder" )
				.Content()
				[
					SNew(SImage)
					.Image( FEditorStyle::GetBrush("PropertyWindow.DiffersFromDefault") )
				]
			]
		]

		// Reset selected actor
		+ SVerticalBox::Slot()
		.Padding(0, 10, 0, 0)
		.AutoHeight()
		[
			SNew(SButton)
			.HAlign(EHorizontalAlignment::HAlign_Center)
			.Text(LOCTEXT("PhysicLayoutModeResetMesh", "Reset Selected Actor"))
			.OnClicked_Lambda([=]()
			{
				if (EdMode)
				{
					EdMode->ResetTransform();
				}
				return FReply::Handled();
			}
			)		
		]

		// Bake all placed actor into instance mesh
		+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SButton)
			.HAlign(EHorizontalAlignment::HAlign_Center)
			.Text(LOCTEXT("PhysicLayoutModeBakeAllMesh", "Bake All Paint Placed Actors To InstanceMesh"))
			.OnClicked_Lambda([this]()
				{
					BakeToInstanceMesh(false);
					return FReply::Handled();
				}
			)		
		]

		// Bake selected placed actor into instance mesh
		+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SButton)
			.HAlign(EHorizontalAlignment::HAlign_Center)
			.Text(LOCTEXT("PhysicLayoutModeBakeSelectedMesh", "Bake Selected Actors Into InstanceMesh"))
			.OnClicked_Lambda([this]()
				{
					BakeToInstanceMesh(true);
					return FReply::Handled();
				}
			)		
		]


		+ SVerticalBox::Slot()
		.Padding(0, 5, 0, 0)
		.AutoHeight()
		[
			// Relative chance checkbox
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.FillWidth(0.333f)
			[
				SNew(SCheckBox)
				.IsChecked(bIsPercentRelative)
				.OnCheckStateChanged_Lambda([this](ECheckBoxState InCheck)
				{
					bIsPercentRelative = InCheck == ECheckBoxState::Checked ? true : false;
					if (bIsPercentRelative)
					{
						if (ReferenceMeshes.Num() > 1)
						{
							float Percent = 100.0f / ReferenceMeshes.Num();
							for (auto& RefMesh : ReferenceMeshes)
							{
								RefMesh.Get()->bIsAdjusting = true;
								RefMesh.Get()->Percent = Percent;
								if (auto RefSlider = Sliders.Find(RefMesh))
								{
									RefSlider->Get()->SetValue(RefMesh.Get()->Percent);
								}
								RefMesh.Get()->bIsAdjusting = false;
							}
						}
					}
				})
				.Content()
				[
					SNew(STextBlock)
					.Text(LOCTEXT("RelativePercents", "Relative Chances"))
				]
			]

			// Gravity checkbox
			+ SHorizontalBox::Slot()
			.FillWidth(0.333f)
			[
				SNew(SCheckBox)
				.IsChecked(IsEnableGravity())
				.OnCheckStateChanged_Lambda([this](ECheckBoxState InCheck)
				{
					bEnableGravity = InCheck == ECheckBoxState::Checked ? true : false;
				})
				.Content()
				[
					SNew(STextBlock)
					.Text(LOCTEXT("EnableGravity", "Place with Gravity"))
				]
			]

			// Use selected checkbox
			+ SHorizontalBox::Slot()
			.FillWidth(0.333f)
			[
				SNew(SCheckBox)
				.IsChecked(IsUseSelected())
				.OnCheckStateChanged_Lambda([this](ECheckBoxState InCheck)
				{
					bUseSelected = InCheck == ECheckBoxState::Checked ? true : false;
				})
				.Content()
				[
					SNew(STextBlock)
					.Text(LOCTEXT("UseSelected", "Use Selected"))
				]
			]
			
		]
		// Add referene mesh to list
		+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SButton)
			.HAlign(EHorizontalAlignment::HAlign_Center)
			.Text(LOCTEXT("PhysicLayoutModeAddMesh", "Add Reference mesh to place"))
			.OnClicked_Lambda([this]()
				{
					TSharedPtr<FReferenceMesh> RefMesh = MakeShareable<FReferenceMesh>(new FReferenceMesh());
					ReferenceMeshes.Add(RefMesh);
					return FReply::Handled();
				}
			)		
		]
		// Reference mesh widgets
		+ SVerticalBox::Slot()
		[
			SNew(SScrollBox)
			+ SScrollBox::Slot()
			[
				SNew(SListView<TSharedPtr<FReferenceMesh>>)
				.ItemHeight(300)
				.ListItemsSource(&ReferenceMeshes)
				.OnGenerateRow(this, &FPhysicalLayoutToolkit::GetReferenceMeshWidget)
				.OnSelectionChanged_Lambda([this](TSharedPtr<FReferenceMesh> InMesh, ESelectInfo::Type SelectionType)
					{
						SelectedMeshIndex = ReferenceMeshes.IndexOfByKey(InMesh);
						SetRandomMesh();
					}
				)
				.ForceVolatile(true)
				.ExternalScrollbar(VerticalScrollbar)
			]
		]
	];
}

TSharedPtr<SWidget> FPhysicalLayoutToolkit::CreateSharedWidget()
{
	return SNew(SVerticalBox)
	+ SVerticalBox::Slot()
	.AutoHeight()
	[
		SNew(SCheckBox)
		.IsChecked_Lambda([=]() { return IsSelectingPlacedActors() ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; })
		.OnCheckStateChanged_Lambda([this](ECheckBoxState InCheck)
		{
			bSelectPlacedActors = InCheck == ECheckBoxState::Checked ? true : false;
		})
		.Content()
		[
			SNew(STextBlock)
			.Text(LOCTEXT("SelectPlaceActors", "Just select Placed Actors"))
		]
	]
	+ SVerticalBox::Slot()
        	.AutoHeight()
        	[
        		SNew(SCheckBox)
        		.IsChecked_Lambda([=]() { return IsDamplingVelocity() ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; })
        		.OnCheckStateChanged_Lambda([this](ECheckBoxState InCheck)
        		{
        			SetDampVelocity(InCheck == ECheckBoxState::Checked ? true : false);
        		})
        		.Content()
        		[
        			SNew(STextBlock)
        			.Text(LOCTEXT("DampVelocity", "Damp Velocity"))
        		]
        	]
	+ SVerticalBox::Slot()
	.AutoHeight()
	[
		SNew(SHorizontalBox)
		+ SHorizontalBox::Slot()
		.FillWidth(0.5f)
		[
			SNew(SButton)
			.HAlign(EHorizontalAlignment::HAlign_Center)
			.VAlign(EVerticalAlignment::VAlign_Center)
			.Text(LOCTEXT("PhysicLayoutModeToggleGravityEnable", "Enable Gravity for selected actors"))
			.OnClicked_Lambda([this]()
			{
				if (EdMode)
				{
					auto Actors = EdMode->GetSelectedActors();
					for (auto& actor : Actors)
					{
						EdMode->UpdatePhysics(actor, true);
					}
				}
				return FReply::Handled();
			}
			)
		]
		+ SHorizontalBox::Slot()
		.FillWidth(0.5f)
		[
			SNew(SButton)
			.HAlign(EHorizontalAlignment::HAlign_Center)
			.VAlign(EVerticalAlignment::VAlign_Center)
			.Text(LOCTEXT("PhysicLayoutModeToggleGravityDisable", "Disable Gravity for selected actors"))
			.OnClicked_Lambda([this]()
			{
				if (EdMode)
				{
					auto Actors = EdMode->GetSelectedActors();
					for (auto& actor : Actors)
					{
						EdMode->UpdatePhysics(actor, false);
					}
				}
				return FReply::Handled();
			}
			)
		]
	]
	+ SVerticalBox::Slot()
	.AutoHeight()
	[
		SNew(SHorizontalBox)
		+ SHorizontalBox::Slot()
		.FillWidth(0.5f)
		[
			SNew(SButton)
			.HAlign(EHorizontalAlignment::HAlign_Center)
			.VAlign(EVerticalAlignment::VAlign_Center)
			.Text(LOCTEXT("PhysicLayoutModeSelectAll", "Select all placed actors"))
			.OnClicked_Lambda([this]()
			{
				if (EdMode)
				{
					EdMode->SelectPlacedActors(nullptr);
				}
				return FReply::Handled();
			}
			)
		]
		+ SHorizontalBox::Slot()
		.FillWidth(0.5f)
		[
			SNew(SButton)
			.HAlign(EHorizontalAlignment::HAlign_Center)
			.VAlign(EVerticalAlignment::VAlign_Center)
			.Text(LOCTEXT("PhysicLayoutModeMakeStatic", "Make selected actor static"))
			.OnClicked_Lambda([this]()
			{
				if (EdMode)
				{
					EdMode->MakeSelectedStatic();
				}
				return FReply::Handled();
			}
			)
		]
	];
}

void FPhysicalLayoutToolkit::BindCommands()
{
	const TSharedRef<FUICommandList>& CommandList = GetToolkitCommands();
	const FPhysicalLayoutCommands& Commands = FPhysicalLayoutCommands::Get();

	// Select command action
	CommandList->MapAction(
		Commands.SelectCommand, 
		FExecuteAction::CreateLambda([=]()
		{
			ChangeMode(ELayoutMode::Select);
			LayoutModeIndex = 0;
			if (EdMode)
			{
				EdMode->UnregisterBrush();
			}
		}),
		FCanExecuteAction(),
		FIsActionChecked::CreateLambda([this]()
		{
			return GetCurrentLayoutMode() == ELayoutMode::Select;
		})
	);

	// Paint select command action
	CommandList->MapAction(
		Commands.PaintSelectCommand, 
		FExecuteAction::CreateLambda([=]()
		{
			ChangeMode(ELayoutMode::PaintSelect);
			LayoutModeIndex = 1;
			if (EdMode)
			{
				EdMode->UnregisterBrush();
			}
		}),
		FCanExecuteAction(),
		FIsActionChecked::CreateLambda([this]()
		{
			return GetCurrentLayoutMode() == ELayoutMode::PaintSelect;
		})
	);

	// Transform command action
	CommandList->MapAction(
		Commands.TransformationCommand, 
		FExecuteAction::CreateLambda([=]()
		{
			ChangeMode(ELayoutMode::Transform);
			LayoutModeIndex = 2;
			if (EdMode)
			{
				EdMode->UnregisterBrush();
			}
		}),
		FCanExecuteAction(),
		FIsActionChecked::CreateLambda([this]()
		{
			return GetCurrentLayoutMode() == ELayoutMode::Transform;
		})
	);

	// Paint command action
	CommandList->MapAction(
		Commands.PaintCommand, 
		FExecuteAction::CreateLambda([=]()
		{
			ChangeMode(ELayoutMode::Paint);
			LayoutModeIndex = 3;
			if (EdMode)
			{
				EdMode->RegisterBrush();
			}
		}),
		FCanExecuteAction(),
		FIsActionChecked::CreateLambda([this]()
		{
			return GetCurrentLayoutMode() == ELayoutMode::Paint;
		})
	);
}

float FPhysicalLayoutToolkit::GetMinDistance()
{
	if (GetRandomMesh())
	{
		return fMinDistance * ScaleRandom.Size() * GetRandomMesh()->GetBounds().GetSphere().W;
	}
	return fMinDistance * ScaleRandom.Size();
}

void FPhysicalLayoutToolkit::SetRandomMesh()
{
	if (IsUseSelected())
	{
		if (SelectedMeshIndex >= 0)
		{
			PickedMesh = ReferenceMeshes[SelectedMeshIndex].Get()->StaticMesh;
		}
	}
	else
	{
		auto Meshes = ReferenceMeshes;
		int Rand = FMath::FRandRange(0.0f, 100.0f);

		auto PickedMeshes = Meshes.FilterByPredicate([Rand](const TSharedPtr<FReferenceMesh>& InMesh)
			{
				return (IsValid(InMesh.Get()->StaticMesh) && InMesh.Get()->Percent >= Rand);
			}
		);
		if (PickedMeshes.Num() == 0)
		{
			return;
		}
		PickedMesh = PickedMeshes[FMath::RandRange(0, PickedMeshes.Num() - 1)].Get()->StaticMesh;
	}

	PositionRandom = FMath::RandPointInBox(FBox(MinPositionRandom, MaxPositionRandom));
	FVector RandRot = FMath::RandPointInBox(FBox(MinRotateRandom.Euler(), MaxRotateRandom.Euler()));
	RotateRandom = FRotator(RandRot.X, RandRot.Y, RandRot.Z);
	
	if (IsMinScaleLock() && IsMaxScaleLock())
	{
		ScaleRandom = FVector::OneVector * FMath::RandRange(MinScaleRandom.X, MaxScaleRandom.X);
	}
	else
	{
		ScaleRandom = FMath::RandPointInBox(FBox(MinScaleRandom, MaxScaleRandom));
	}
}

UStaticMesh* FPhysicalLayoutToolkit::GetRandomMesh()
{
	return PickedMesh;
}

void FPhysicalLayoutToolkit::ChangeMode(FString InLayoutMode)
{
	LastLayoutMode = GetCurrentLayoutMode();
	CurrentLayoutMode = InLayoutMode;
	
	if (EdMode)
	{
		EdMode->OnLayoutModeChange(InLayoutMode);
	}
}

void FPhysicalLayoutToolkit::ChangeMode(int InDirection)
{
	LayoutModeIndex += InDirection;
	LayoutModeIndex = (LayoutModes.Num() + (LayoutModeIndex % LayoutModes.Num())) % LayoutModes.Num() ;
	
	if (LayoutModeIndex >= 0 && LayoutModeIndex < LayoutModes.Num())
	{
		LastLayoutMode = GetCurrentLayoutMode();
		ChangeMode(*LayoutModes[LayoutModeIndex].Get());
	}
}

void FPhysicalLayoutToolkit::BakeToInstanceMesh(bool BakeSelected)
{
	if (EdMode)
	{
		TArray<UPrimitiveComponent*> SpawnedComponents;
		if (BakeSelected)
		{
			SpawnedComponents = EdMode->GetSelectedPrimitives();
		}
		else
		{
			SpawnedComponents = EdMode->GetSpawnedComponents();
		}
		
		if (SpawnedComponents.Num() > 0)
		{
			GEditor->BeginTransaction(LOCTEXT("PhysicalLayoutMode_Bake", "Bake to InstaceMesh"));
			FMeshInstancingSettings Settings;
			const IMeshMergeUtilities& MeshUtilities = FModuleManager::Get().LoadModuleChecked<IMeshMergeModule>("MeshMergeUtilities").GetUtilities();
			MeshUtilities.MergeComponentsToInstances(SpawnedComponents, EdMode->GetWorld(), EdMode->GetWorld()->GetCurrentLevel(), Settings);
			GEditor->EndTransaction();
		}
		
		EdMode->DestroyActors(BakeSelected);
	}
}

TSharedRef<SWidget> FPhysicalLayoutToolkit::GenerateWidget(TSharedPtr<FString> InItem)
{
	FText ItemAsText = FText::FromString(*InItem.Get());
	
	return
		SNew(SBox)
		.WidthOverride(300)
		[
			SNew(STextBlock)
			.Text(ItemAsText)
		.ToolTipText(ItemAsText)
		];
}
FName FPhysicalLayoutToolkit::GetToolkitFName() const
{
	return FName("PhysicalLayoutEdMode");
}

FText FPhysicalLayoutToolkit::GetBaseToolkitName() const
{
	return NSLOCTEXT("PhysicalLayoutToolkit", "DisplayName", "PhysicalLayoutEdMode Tool");
}

class FEdMode* FPhysicalLayoutToolkit::GetEditorMode() const
{
	return GLevelEditorModeTools().GetActiveMode(FPhysicalLayoutMode::EM_PhysicalLayoutModeId);
}



#undef LOCTEXT_NAMESPACE
