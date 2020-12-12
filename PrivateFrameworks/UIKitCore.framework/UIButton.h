/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIButton : UIControl <ABText, CAMAccessibilityHUDItemProvider, NSCoding, TSDPlatformButtonProtocol, UIAccessibilityContentSizeCategoryImageAdjusting, UIAccessibilityContentSizeCategoryImageAdjustingInternal, UIButtonControl, UIGestureRecognizerDelegate, _UIFloatingContentViewDelegate> {
    long long  __imageContentMode;
    UIColor * __plainButtonBackgroundColor;
    UIView<UIButtonVisualElement> * __visualElement;
    UIImageView * _backgroundView;
    struct { 
        unsigned int reversesTitleShadowWhenHighlighted : 1; 
        unsigned int adjustsImageWhenHighlighted : 1; 
        unsigned int adjustsImageWhenDisabled : 1; 
        unsigned int autosizeToFit : 1; 
        unsigned int disabledDimsImage : 1; 
        unsigned int showsTouchWhenHighlighted : 1; 
        unsigned int buttonType : 8; 
        unsigned int role : 8; 
        unsigned int shouldHandleScrollerMouseEvent : 1; 
        unsigned int titleFrozen : 1; 
        unsigned int resendTraitToImageViews : 2; 
        unsigned int animateNextHighlightChange : 1; 
        unsigned int blurEnabled : 1; 
        unsigned int visualEffectViewEnabled : 1; 
        unsigned int suppressAccessibilityUnderline : 1; 
        unsigned int requiresLayoutForPropertyChange : 1; 
        unsigned int needsTitleViewDefaultColorUpdate : 1; 
        unsigned int adjustsImageSizeForAccessibilityContentSizeCategory : 1; 
        unsigned int disableAutomaticTitleAnimations : 1; 
        unsigned int overridesRectAccessors : 1; 
        unsigned int overridesLegacyCursorDelegateSelectors : 1; 
    }  _buttonFlags;
    UIVisualEffectView * _contentBackdropView;
    NSArray * _contentConstraints;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentEdgeInsets;
    struct __CFDictionary { } * _contentLookup;
    id /* block */  _cursorStyleProvider;
    UIView * _effectiveContentView;
    unsigned long long  _externalFlatEdge;
    _UIFloatingContentView * _floatingContentView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _imageEdgeInsets;
    UIImageView * _imageView;
    bool  _initialized;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _internalTitlePaddingInsets;
    unsigned long long  _lastDrawingControlState;
    UIFont * _lazyTitleViewFont;
    bool  _lazyTitleViewFontIsDefaultForIdiom;
    _UIButtonMaskAnimationView * _maskAnimationView;
    UIMenu * _menu;
    id /* block */  _menuProvider;
    id /* block */  _pointerStyleProvider;
    UITapGestureRecognizer * _selectGestureRecognizer;
    UIView * _selectionView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _titleEdgeInsets;
    UILabel * _titleView;
}

@property (setter=_setContentConstraints:, nonatomic, copy) NSArray *_contentConstraints;
@property (nonatomic, readonly, retain) UIColor *_currentImageColor;
@property (getter=_disableAutomaticTitleAnimations, setter=_setDisableAutomaticTitleAnimations:, nonatomic) bool _disableAutomaticTitleAnimations;
@property (setter=_setExternalFlatEdge:) unsigned long long _externalFlatEdge;
@property (setter=_setImageContentMode:, nonatomic) long long _imageContentMode;
@property (setter=_setInternalTitlePaddingInsets:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _internalTitlePaddingInsets;
@property (setter=_setOn:, nonatomic) bool _isOn;
@property (setter=_setMenuProvider:, nonatomic, copy) id /* block */ _menuProvider;
@property (getter=_plainButtonBackgroundColor, setter=_setPlainButtonBackgroundColor:, nonatomic, retain) UIColor *_plainButtonBackgroundColor;
@property (setter=_setPreferredCursorEffect:, nonatomic, copy) _UICursorEffect *_preferredCursorEffect;
@property (setter=_sf_setMenuProvider:, nonatomic, copy) id /* block */ _sf_menuProvider;
@property (setter=_setVisualElement:, nonatomic, retain) UIView<UIButtonVisualElement> *_visualElement;
@property (setter=_setWantsAccessibilityUnderline:, nonatomic) bool _wantsAccessibilityUnderline;
@property (nonatomic, copy) NSString *ab_text;
@property (nonatomic, copy) NSDictionary *ab_textAttributes;
@property (nonatomic) bool adjustsImageSizeForAccessibilityContentSizeCategory;
@property (nonatomic) bool adjustsImageWhenDisabled;
@property (nonatomic) bool adjustsImageWhenHighlighted;
@property (nonatomic, readonly) long long buttonType;
@property (getter=_isContentBackgroundHidden, setter=_setContentBackgroundHidden:, nonatomic) bool contentBackgroundHidden;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentEdgeInsets;
@property (nonatomic, readonly) NSAttributedString *currentAttributedTitle;
@property (nonatomic, readonly) UIImage *currentBackgroundImage;
@property (nonatomic, readonly) UIImage *currentImage;
@property (nonatomic, readonly) UIImageSymbolConfiguration *currentPreferredSymbolConfiguration;
@property (nonatomic, readonly) NSString *currentTitle;
@property (nonatomic, readonly) UIColor *currentTitleColor;
@property (nonatomic, readonly) UIColor *currentTitleShadowColor;
@property (nonatomic, copy) id /* block */ cursorStyleProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIFont *font;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } imageEdgeInsets;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) double lastBaselineFromBottom;
@property (nonatomic, copy) UIMenu *menu;
@property (getter=isPointerInteractionEnabled, nonatomic) bool pointerInteractionEnabled;
@property (nonatomic, copy) id /* block */ pointerStyleProvider;
@property (nonatomic) bool reversesTitleShadowWhenHighlighted;
@property (nonatomic) long long role;
@property (nonatomic) bool roundedFont;
@property (nonatomic) bool showsTouchWhenHighlighted;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } titleEdgeInsets;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, copy) NSString *vs_normalTitle;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)_allowsUnsupportedMacIdiomBehavior;
+ (bool)_buttonTypeIsModernUI:(long long)arg1;
+ (bool)_buttonTypeIsSystemProvided:(long long)arg1;
+ (bool)_buttonTypeIsiOSSystemProvided:(long long)arg1;
+ (id)_defaultBackgroundImageColorForType:(long long)arg1 andState:(unsigned long long)arg2;
+ (id)_defaultBackgroundImageForType:(long long)arg1 andState:(unsigned long long)arg2;
+ (id)_defaultBackgroundImageNameForType:(long long)arg1 andState:(unsigned long long)arg2 compact:(bool)arg3;
+ (id)_defaultImageColorForState:(unsigned long long)arg1 button:(id)arg2;
+ (id)_defaultImageColorForType:(long long)arg1 andState:(unsigned long long)arg2;
+ (id)_defaultImageForType:(long long)arg1 andState:(unsigned long long)arg2 withConfiguration:(id)arg3;
+ (id)_defaultImageNameForType:(long long)arg1 andState:(unsigned long long)arg2;
+ (double)_defaultNeighborSpacingForAxis:(long long)arg1;
+ (id)_defaultNormalTitleColor;
+ (id)_defaultNormalTitleShadowColor;
+ (id)_defaultSymbolConfigurationForType:(long long)arg1 andState:(unsigned long long)arg2;
+ (id)_defaultSymbolConfigurationForType:(long long)arg1 andState:(unsigned long long)arg2 compact:(bool)arg3;
+ (id)_defaultTitleColorForState:(unsigned long long)arg1 button:(id)arg2 isTintColor:(bool*)arg3;
+ (id)_selectedIndicatorImage;
+ (void)_setAllowsUnsupportedMacIdiomBehavior:(bool)arg1;
+ (void)_setVisuallyHighlighted:(bool)arg1 forViews:(id)arg2 initialPress:(bool)arg3;
+ (void)_setVisuallyHighlighted:(bool)arg1 forViews:(id)arg2 initialPress:(bool)arg3 baseAlpha:(double)arg4;
+ (void)_setVisuallyHighlighted:(bool)arg1 forViews:(id)arg2 initialPress:(bool)arg3 highlightBlock:(id /* block */)arg4;
+ (id)_systemButtonWithImage:(id)arg1 target:(id)arg2 action:(SEL)arg3;
+ (id)buttonWithType:(long long)arg1;
+ (id)buttonWithType:(long long)arg1 primaryAction:(id)arg2;
+ (id)systemButtonWithImage:(id)arg1 target:(id)arg2 action:(SEL)arg3;
+ (id)systemButtonWithPrimaryAction:(id)arg1;

- (void).cxx_destruct;
- (id)__scalarStatisticsForUserTouchUpInsideEvent;
- (bool)_accessibilityShouldActivateOnHUDLift;
- (id)_allButtonContent;
- (bool)_alwaysHandleScrollerMouseEvent;
- (void)_applyAppropriateTouchInsetsForButton;
- (void)_applyCarPlaySystemButtonCustomizations;
- (id)_archivableContent:(id*)arg1;
- (id)_attributedTitleForState:(unsigned long long)arg1;
- (id)_attributedTitleForState:(unsigned long long)arg1 adjustedToTraitCollection:(id)arg2;
- (double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 inContainer:(id)arg3 isGuide:(bool)arg4;
- (double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(id)arg2 nextToNeighbor:(id)arg3 edge:(int)arg4 attribute:(long long)arg5 multiplier:(double)arg6;
- (id)_backgroundForState:(unsigned long long)arg1 usesBackgroundForNormalState:(bool*)arg2;
- (id)_backgroundView;
- (struct { double x1; double x2; })_baselineOffsetsAtSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_beginTitleAnimation;
- (bool)_blurEnabled;
- (id)_borderColorForState:(unsigned long long)arg1;
- (double)_borderWidthForState:(unsigned long long)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (long long)_buttonType;
- (bool)_canHaveTitle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_clippedHighlightBounds;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_combinedContentPaddingInsets;
- (void)_commonInitForPrimaryAction:(id)arg1;
- (id)_contentBackdropView;
- (id)_contentConstraints;
- (id)_contentForState:(unsigned long long)arg1;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)_createPointerInteraction;
- (id)_createPreparedImageViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_currentImageColor;
- (id)_currentImageWithResolvedConfiguration;
- (id)_defaultFontForIdiom:(long long)arg1;
- (id)_defaultImageForState:(unsigned long long)arg1 withConfiguration:(id)arg2;
- (void)_deriveTitleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 imageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 fromContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 calculatePositionForEmptyTitle:(bool)arg4;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(bool)arg3;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (bool)_disableAutomaticTitleAnimations;
- (double)_drawingStrokeForState:(unsigned long long)arg1;
- (double)_drawingStrokeForStyle:(long long)arg1;
- (long long)_drawingStyleForState:(unsigned long long)arg1;
- (long long)_drawingStyleForStroke:(double)arg1;
- (id)_effectiveContentView;
- (struct CGSize { double x1; double x2; })_effectiveSizeForImage:(id)arg1;
- (id)_encodableSubviews;
- (void)_enumerateContentWithBlock:(id /* block */)arg1;
- (id)_externalBorderColorForState:(unsigned long long)arg1;
- (long long)_externalDrawingStyleForState:(unsigned long long)arg1;
- (unsigned long long)_externalFlatEdge;
- (id)_externalFocusedTitleColor;
- (id)_externalImageColorForState:(unsigned long long)arg1;
- (id)_externalTitleColorForState:(unsigned long long)arg1 isTintColor:(bool*)arg2;
- (id)_externalUnfocusedBorderColor;
- (id)_fadeOutAnimationWithKeyPath:(id)arg1;
- (id)_floatingContentView;
- (id)_font;
- (bool)_fontIsDefaultForIdiom;
- (void)_gestureRecognizerFailed:(id)arg1;
- (bool)_hasCustomAutolayoutNeighborSpacingForAttribute:(long long*)arg1;
- (bool)_hasDrawingStyle;
- (bool)_hasHighlightColor;
- (bool)_hasImageForProperty:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_highlightBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_highlightBoundsForDrawingStyle;
- (double)_highlightCornerRadius;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_highlightRectForImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_highlightRectForTextRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_highlightsBackgroundImage;
- (id)_imageColorForState:(unsigned long long)arg1;
- (long long)_imageContentMode;
- (id)_imageForState:(unsigned long long)arg1 applyingConfiguration:(bool)arg2 usesImageForNormalState:(bool*)arg3;
- (bool)_imageNeedsCompositingModeWhenSelected;
- (id)_imageView;
- (void)_installSelectGestureRecognizer;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_internalTitlePaddingInsets;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (struct CGSize { double x1; double x2; })_intrinsicSizeForTitle:(id)arg1 attributedTitle:(id)arg2 image:(id)arg3 backgroundImage:(id)arg4 titlePaddingInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg5;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_invalidateContentConstraints;
- (void)_invalidateForPropertyChange;
- (bool)_isCarPlaySystemTypeButton;
- (bool)_isContentBackgroundHidden;
- (bool)_isEffectivelyDisabledExternalButton;
- (bool)_isExternalRoundedRectButtonWithPressednessState;
- (bool)_isInCarPlay;
- (bool)_isModernButton;
- (bool)_isOn;
- (bool)_isSystemProvidedButton;
- (bool)_isTitleFrozen;
- (bool)_isiOSSystemProvidedButton;
- (void)_layoutBackgroundImageView;
- (void)_layoutContentBackdropView;
- (id)_layoutDebuggingTitle;
- (void)_layoutImageAndTitleViews;
- (id)_letterpressStyleForState:(unsigned long long)arg1;
- (bool)_likelyToHaveTitle;
- (long long)_lineBreakMode;
- (id /* block */)_menuProvider;
- (id)_newImageViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_newLabelWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_pathImageEdgeInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_pathTitleEdgeInsets;
- (id)_plainButtonBackgroundColor;
- (id)_pointerEffect;
- (id)_pointerEffectPreviewParameters;
- (id)_pointerEffectWithPreview:(id)arg1;
- (bool)_pointerInteractionCanBeAssisted;
- (void)_pointerWillEnter:(id)arg1;
- (void)_pointerWillExit:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (id)_preferredConfigurationForState:(unsigned long long)arg1;
- (id)_preferredCursorEffect;
- (void)_prepareMaskAnimationViewIfNecessary;
- (void)_reducedTransparencyDidChange:(id)arg1;
- (void)_refreshVisualElement;
- (void)_refreshVisualElementForTraitCollection:(id)arg1;
- (void)_refreshVisualElementForTraitCollection:(id)arg1 populatingAPIProperties:(bool)arg2;
- (bool)_requiresLayoutForPropertyChange;
- (struct CGSize { double x1; double x2; })_roundSize:(struct CGSize { double x1; double x2; })arg1;
- (double)_scaleFactorForImage;
- (void)_selectGestureChanged:(id)arg1;
- (double)_selectedIndicatorAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectedIndicatorBounds;
- (id)_selectedIndicatorViewWithImage:(id)arg1;
- (id)_selectionIndicatorView;
- (bool)_selectorOverridden:(SEL)arg1;
- (void)_sendSetNeedsLayoutToSuperviewOnTitleAnimationCompletionIfNecessary;
- (void)_setAttributedTitle:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setBackground:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setBlurEnabled:(bool)arg1;
- (void)_setButtonType:(long long)arg1;
- (void)_setContent:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setContentBackgroundHidden:(bool)arg1;
- (void)_setContentConstraints:(id)arg1;
- (void)_setContentHuggingPriorities:(struct CGSize { double x1; double x2; })arg1;
- (void)_setDefaultFontForIdiom;
- (void)_setDisableAutomaticTitleAnimations:(bool)arg1;
- (void)_setDrawingStroke:(double)arg1 forState:(unsigned long long)arg2;
- (void)_setDrawingStyle:(long long)arg1 forState:(unsigned long long)arg2;
- (void)_setExternalFlatEdge:(unsigned long long)arg1;
- (void)_setFont:(id)arg1;
- (void)_setFont:(id)arg1 isDefaultForIdiom:(bool)arg2;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 deferLayout:(bool)arg2;
- (void)_setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)_setImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setImageColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setImageColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setImageContentMode:(long long)arg1;
- (void)_setInternalTitlePaddingInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setLetterpressStyle:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setLineBreakMode:(long long)arg1;
- (void)_setMenuProvider:(id /* block */)arg1;
- (void)_setOn:(bool)arg1;
- (void)_setPlainButtonBackgroundColor:(id)arg1;
- (void)_setPreferredCursorEffect:(id)arg1;
- (void)_setShadowColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setShouldHandleScrollerMouseEvent:(bool)arg1;
- (void)_setTitle:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setTitleColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setTitleFrozen:(bool)arg1;
- (void)_setTitleShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)_setVisualEffectViewEnabled:(bool)arg1 backgroundColor:(id)arg2;
- (void)_setVisualElement:(id)arg1;
- (void)_setWantsAccessibilityUnderline:(bool)arg1;
- (id)_setupBackgroundView;
- (void)_setupDrawingStyleForState:(unsigned long long)arg1;
- (void)_setupImageView;
- (void)_setupPressednessForState:(unsigned long long)arg1;
- (void)_setupTitleView;
- (void)_setupTitleViewRequestingLayout:(bool)arg1;
- (id)_shadowColorForState:(unsigned long long)arg1;
- (id)_shapeInContainer:(id)arg1;
- (id)_shapeInContainer:(id)arg1 proposal:(id /* block */)arg2;
- (bool)_shouldAdjustToTraitCollection;
- (bool)_shouldDefaultToTemplatesForImageViewBackground:(bool)arg1;
- (bool)_shouldHaveFloatingAppearance;
- (bool)_shouldSkipNormalLayoutForSakeOfTemplateLayout;
- (bool)_shouldUpdatePressedness;
- (bool)_supportsMacIdiom;
- (void)_takeContentFromArchivableContent:(id)arg1;
- (bool)_textNeedsCompositingModeWhenSelected;
- (id)_titleColorForState:(unsigned long long)arg1 suppressTintColorFollowing:(bool*)arg2;
- (id)_titleForState:(unsigned long long)arg1;
- (id)_titleOrImageViewForBaselineLayout;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_titleRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 calculatePositionForEmptyTitle:(bool)arg2;
- (struct CGSize { double x1; double x2; })_titleShadowOffset;
- (id)_titleView;
- (void)_titleViewLabelMetricsChanged;
- (id)_transitionAnimationWithKeyPath:(id)arg1;
- (void)_uikit_applyValueFromTraitStorage:(id)arg1 forKeyPath:(id)arg2;
- (void)_uninstallSelectGestureRecognizer;
- (void)_updateBackgroundImageView;
- (void)_updateContentBackdropView;
- (void)_updateContextMenuEnabled;
- (void)_updateEffectsForImageView:(id)arg1 background:(bool)arg2;
- (void)_updateImageView;
- (void)_updateMaskState;
- (void)_updateSelectionViewForState:(unsigned long long)arg1;
- (void)_updateTitleView;
- (void)_updateTitleViewStyleEffectConfiguration;
- (bool)_usesVisualElement;
- (id)_viewForBaselineLayout;
- (id)_viewForLoweringBaselineLayoutAttribute:(int)arg1;
- (bool)_visualEffectViewEnabled;
- (id)_visualElement;
- (bool)_wantsAccessibilityUnderline;
- (bool)_wantsContentBackdropView;
- (void)_willMoveToWindow:(id)arg1;
- (bool)adjustsImageSizeForAccessibilityContentSizeCategory;
- (bool)adjustsImageWhenDisabled;
- (bool)adjustsImageWhenHighlighted;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)attributedTitleForState:(unsigned long long)arg1;
- (bool)autosizesToFit;
- (id)backgroundImageForState:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })backgroundRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (long long)buttonType;
- (bool)canBecomeFocused;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentEdgeInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (void)crossfadeToImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)currentAttributedTitle;
- (id)currentBackgroundImage;
- (id)currentImage;
- (id)currentPreferredSymbolConfiguration;
- (id)currentTitle;
- (id)currentTitleColor;
- (id)currentTitleShadowColor;
- (id)cursorInteraction:(id)arg1 regionForLocation:(struct CGPoint { double x1; double x2; })arg2 defaultRegion:(id)arg3;
- (id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3;
- (void)cursorInteraction:(id)arg1 willEnterRegion:(id)arg2 withAnimator:(id)arg3;
- (void)cursorInteraction:(id)arg1 willExitRegion:(id)arg2 withAnimator:(id)arg3;
- (id /* block */)cursorStyleProvider;
- (void)dealloc;
- (unsigned long long)defaultAccessibilityTraits;
- (void)encodeWithCoder:(id)arg1;
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (id)font;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)image;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })imageEdgeInsets;
- (id)imageForState:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)imageView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 primaryAction:(id)arg2;
- (bool)isAccessibilityElementByDefault;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (bool)isSpringLoaded;
- (id)largeContentImage;
- (id)largeContentTitle;
- (void)layoutSubviews;
- (long long)lineBreakMode;
- (id)menu;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3;
- (void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3;
- (id /* block */)pointerStyleProvider;
- (id)preferredSymbolConfigurationForImageInState:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })pressFeedbackPosition;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (bool)reversesTitleShadowWhenHighlighted;
- (long long)role;
- (bool)scalesLargeContentImage;
- (void)setAdjustsImageSizeForAccessibilityContentSizeCategory:(bool)arg1;
- (void)setAdjustsImageWhenDisabled:(bool)arg1;
- (void)setAdjustsImageWhenHighlighted:(bool)arg1;
- (void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setAutosizesToFit:(bool)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBackgroundImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentHorizontalAlignment:(long long)arg1;
- (void)setContentVerticalAlignment:(long long)arg1;
- (void)setCursorStyleProvider:(id /* block */)arg1;
- (void)setDisabledDimsImage:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setImageEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setMenu:(id)arg1;
- (void)setNeedsLayout;
- (void)setPointerStyleProvider:(id /* block */)arg1;
- (void)setPreferredSymbolConfiguration:(id)arg1 forImageInState:(unsigned long long)arg2;
- (void)setReversesTitleShadowWhenHighlighted:(bool)arg1;
- (void)setRole:(long long)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setShowPressFeedback:(bool)arg1;
- (void)setShowsMenuAsPrimaryAction:(bool)arg1;
- (void)setShowsTouchWhenHighlighted:(bool)arg1;
- (void)setSpringLoaded:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitleColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setTitleEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTitleShadowColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitleShadowColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setTitleShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (bool)showsTouchWhenHighlighted;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;
- (id)title;
- (id)titleColorForState:(unsigned long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })titleEdgeInsets;
- (id)titleForState:(unsigned long long)arg1;
- (id)titleLabel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)titleShadowColorForState:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })titleShadowOffset;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (id)visualElementForTraitCollection:(id)arg1;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (id)ab_text;
- (id)ab_textAttributes;
- (void)setAb_text:(id)arg1;
- (void)setAb_textAttributes:(id)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (id)_mapkit_accessoryControlToExtendWithCallout;
- (void)_mapkit_setAttributedTitle:(id)arg1;
- (void)_mapkit_setImage:(id)arg1;
- (id)_mapkit_title;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (void)pu_sendActionForControlEventsWithHighlightTimeout:(unsigned long long)arg1;
- (void)pu_setRTLAwareContentEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)pu_setTitle:(id)arg1 andAccessibilityTitle:(id)arg2 withFallback:(id /* block */)arg3 forState:(unsigned long long)arg4;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (id /* block */)_sf_menuProvider;
- (void)_sf_setMenuProvider:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI

- (id)apui_fontForStyle:(id)arg1 currentSizeCategory:(id)arg2 maxSizeCategory:(id)arg3;
- (id)apui_fontForStyle:(id)arg1 maxSizeCategory:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI

- (struct { double x1; double x2; })_nui_additionalInsetsForBaselines;
- (long long)_nui_baselineViewType;
- (double)_nui_lineHeight;
- (bool)canUseFastLayoutSizeCalulation;

// Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI

+ (id)ak_passwordRecoveryButton;

- (void)_ak_passwordRecoveryButtonTapped:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (id)hudItemForAccessibilityHUDManager:(id)arg1;
- (void)selectedByAccessibilityHUDManager:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport

- (void)cps_setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

+ (id)_gkXmarkedCloseButtonWithTarget:(id)arg1 action:(SEL)arg2;

- (double)lastBaselineFromBottom;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)_hkecg_detailButton;
+ (double)hk_buddyButtonHorizontalMargin;
+ (id)hk_buddyButtonTintedWithColor:(id)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4;
+ (id)hk_buttonTintedWithColor:(id)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4;
+ (id)hk_multiLineLowContrastRoundRectButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
+ (id)hk_multiLineRoundRectButtonTintedWithColor:(id)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4;
+ (id)hk_roundRectButtonTintedWithColor:(id)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4;
+ (id)hk_roundedRectBuddyButtonTintedWithColor:(id)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4;
+ (id)imageWithFillColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

+ (id)hu_clipScrubberLiveButton;
+ (id)hu_clipScrubberNearbyAccessoryButton;
+ (void)hu_doneStateForButton:(id)arg1 usingStandardSymbolConfiguration:(bool)arg2;
+ (void)hu_microphoneButton:(id)arg1 forTalkingState:(bool)arg2 usingStandardSymbolConfiguration:(bool)arg3;
+ (void)hu_talkStateForButton:(id)arg1 usingStandardSymbolConfiguration:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/JetUI.framework/JetUI

- (struct JUMeasurements { double x1; double x2; double x3; double x4; })measurementsWithFitting:(struct CGSize { double x1; double x2; })arg1 in:(id)arg2;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (void)mpu_configureButtonWithTextDrawingContext:(id)arg1;

// Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit

- (id)fontForStyle:(id)arg1 currentSizeCategory:(id)arg2 maxSizeCategory:(id)arg3;
- (id)fontForStyle:(id)arg1 maxSizeCategory:(id)arg2;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;

// Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus

- (void)PG_removeVibrancyEffect;
- (void)PG_updateVibrancyEffectForTintColor;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_actionButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 color:(id)arg4;
+ (id)px_buttonBackgroundImageForType:(unsigned long long)arg1 color:(id)arg2 cornerRadius:(double)arg3 controlState:(unsigned long long)arg4;
+ (id)px_buttonWithPXType:(unsigned long long)arg1 color:(id)arg2;

- (void)px_setTitle:(id)arg1 orAttributedTitle:(id)arg2 forState:(unsigned long long)arg3;
- (void)px_updateTitleUsingBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/RemindersUICore.framework/RemindersUICore

- (bool)roundedFont;
- (void)setRoundedFont:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI

- (void)st_setBackgroundColor:(id)arg1;
- (void)st_setTitleColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices

- (void)sbui_removePointerInteraction;

// Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI

+ (id)SKUITrending_defaultButtonFont;
+ (id)SKUITrending_searchButtonWithElement:(id)arg1;
+ (id)SKUITrending_searchButtonWithTitle:(id)arg1;

- (void)SKUITrending_applyConfigurationFromElement:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

+ (id)tsdPlatformButtonWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (void)setAlternateImageNamed:(id)arg1 inBundle:(id)arg2;
- (void)setImageNamed:(id)arg1 inBundle:(id)arg2;
- (void)setTarget:(id)arg1 action:(SEL)arg2;

// Image: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI

+ (id)largeButton;

// Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI

- (void)setVs_normalTitle:(id)arg1;
- (id)vs_normalTitle;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

- (void)configureFromScriptButton:(id)arg1;

@end