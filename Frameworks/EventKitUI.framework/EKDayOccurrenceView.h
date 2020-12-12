/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKDayOccurrenceView : UIView <EKDayOccurrenceTravelTimeViewMetricsDelegate, NSCopying, _UICursorInteractionDelegate> {
    bool  _allDay;
    bool  _allDayDrawingStyle;
    bool  _birthday;
    long long  _birthdayCount;
    double  _bottomPinningProximity;
    unsigned long long  _bottomPinningState;
    bool  _cancelled;
    double  _cappedColorBarHeight;
    struct CGPoint { 
        double x; 
        double y; 
    }  _contentLocationDuringReducedProcessing;
    UIImageView * _contentView;
    EKDayOccurrenceState * _currentImageState;
    long long  _currentRequestId;
    _UICursorInteraction * _cursorInteraction;
    bool  _declined;
    NSObject<EKDayOccurrenceViewDelegate> * _delegate;
    bool  _dimmed;
    bool  _drawsResizeHandles;
    UIView * _endResizeHandle;
    UIImageView * _eventBackgroundView;
    bool  _hasPrecedingDuration;
    bool  _hasTrailingDuration;
    bool  _hideBackgroundImage;
    bool  _hideText;
    unsigned long long  _invalidatedRequestOptions;
    bool  _isProposedTime;
    bool  _isSelectedCopyView;
    bool  _isVibrant;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _margin;
    bool  _needsBackgroundImageUpdate;
    bool  _needsContentCalc;
    bool  _needsReply;
    EKEvent * _occurrence;
    long long  _occurrenceBackgroundStyle;
    unsigned int  _offsetContentForLandscape;
    double  _originalXBeforeOffset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    UIView * _pinFadeView;
    bool  _pointerInteractionDisabled;
    bool  _reduceLayoutProcessingForAnimation;
    bool  _selected;
    EKDayOccurrenceView * _selectedCopy;
    bool  _showsTravelTime;
    UIColor * _stagedBackgroundColor;
    UIView * _startResizeHandle;
    bool  _tentative;
    double  _topPinningProximity;
    double  _topYBoundaryForText;
    unsigned int  _touchKeptInsideOccurrence;
    bool  _touchesAreBeingTracked;
    UIImageView * _travelBackgroundView;
    double  _travelTime;
    EKDayOccurrenceTravelTimeView * _travelTimeContentView;
    double  _travelTimeSubviewHeightInPoints;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _unpinnedEventBackgroundFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _unpinnedTravelBackgroundFrame;
    bool  _usesSmallText;
    double  _visibleHeight;
    bool  _visibleHeightLocked;
}

@property (getter=isAllDay, nonatomic) bool allDay;
@property (nonatomic) bool allDayDrawingStyle;
@property (getter=isBirthday, nonatomic) bool birthday;
@property (nonatomic) long long birthdayCount;
@property (nonatomic) double bottomPinningProximity;
@property (getter=isCancelled, nonatomic) bool cancelled;
@property (nonatomic) double cappedColorBarHeight;
@property (nonatomic, readonly) EKDayOccurrenceState *currentImageState;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDeclined, nonatomic) bool declined;
@property (nonatomic) NSObject<EKDayOccurrenceViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dimmed;
@property (nonatomic) bool drawsResizeHandles;
@property (nonatomic) bool hasPrecedingDuration;
@property (nonatomic) bool hasTrailingDuration;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideBackgroundImage;
@property (nonatomic) bool hideText;
@property (nonatomic, readonly) bool isPinned;
@property (nonatomic) bool isProposedTime;
@property (nonatomic) bool isSelectedCopyView;
@property (nonatomic) bool isVibrant;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } margin;
@property (nonatomic) bool needsReply;
@property (nonatomic, retain) EKEvent *occurrence;
@property (nonatomic) long long occurrenceBackgroundStyle;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic) bool pointerInteractionDisabled;
@property (nonatomic) bool reduceLayoutProcessingForAnimation;
@property (nonatomic) long long routingMode;
@property (nonatomic) bool selected;
@property (nonatomic) EKDayOccurrenceView *selectedCopy;
@property (nonatomic) bool showsTravelTime;
@property (readonly) Class superclass;
@property (getter=isTentative, nonatomic) bool tentative;
@property (nonatomic) double topPinningProximity;
@property (nonatomic) double topYBoundaryForText;
@property (nonatomic) bool touchesAreBeingTracked;
@property (nonatomic) double travelTime;
@property (nonatomic) double travelTimeSubviewHeightInPoints;
@property (nonatomic) bool usesSmallText;
@property (nonatomic) double visibleHeight;
@property (nonatomic, readonly) bool visibleHeightLocked;

+ (void)_clearViewCache;
+ (id)_color:(id)arg1 darkenedToPercentage:(double)arg2 withFinalAlpha:(double)arg3;
+ (id)_color:(id)arg1 lightenedToPercentage:(double)arg2 withFinalAlpha:(double)arg3;
+ (id)_viewCache;
+ (double)barToBarGapWidth;
+ (double)barToBarHorizontalDistanceIncludingBarWidth;
+ (double)bottomShadowMargin;
+ (void)clearCaches;
+ (double)colorBarThickness;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentStretchRectForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })defaultMargin;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })defaultPadding;
+ (double)enoughHeightForOneLineForEvent:(id)arg1 usingSmallText:(bool)arg2 sizeClass:(long long)arg3;
+ (id)framePathForExternalDragOperationWithSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)imageForExternalDragOperationFromEvent:(id)arg1 style:(long long)arg2;
+ (double)minNaturalTextHeightForEvent:(id)arg1 usingSmallText:(bool)arg2 sizeClass:(long long)arg3;
+ (double)minimumHeightForSizeClass:(long long)arg1 orientation:(long long)arg2;
+ (double)minimumHeightForSizeClass:(long long)arg1 orientation:(long long)arg2 isAllDay:(bool)arg3;
+ (double)minimumHeightForSizeClass:(long long)arg1 orientation:(long long)arg2 isAllDay:(bool)arg3 usesSmallText:(bool)arg4;
+ (id)occurrenceViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (void).cxx_destruct;
- (void)_addTravelTimeSubviews;
- (void)_clearContent;
- (long long)_compareOccurrenceViewForSelectedCopyOrdering:(id)arg1;
- (long long)_compareOccurrenceViewLeftToRight:(id)arg1;
- (long long)_compareOccurrenceViewTopToBottom:(id)arg1;
- (long long)_compareOccurrenceViewTopToBottomLeftToRight:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_computeTravelTimeContentRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForText;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameMutatedForProximityToHourLine:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_invalidateAllImages;
- (void)_invalidateBackgroundImage;
- (void)_invalidateContentBounds;
- (void)_invalidateCurrentRequest;
- (void)_invalidateTextImage;
- (void)_invalidateTravelTimeImage;
- (bool)_isAboveAllDayOccurrenceView:(id)arg1;
- (bool)_isAboveOccurrenceView:(id)arg1 overlapToIgnore:(double)arg2;
- (bool)_isBelowAllDayOccurrenceView:(id)arg1;
- (bool)_isBelowOccurrenceView:(id)arg1 overlapToIgnore:(double)arg2;
- (bool)_isTimedOccurrenceDrawingStyle;
- (id)_newResizeHandleView;
- (void)_removeTravelTimeSubviews;
- (void)_resetContentViewPosition;
- (void)_setUpInteraction;
- (void)_updateColors;
- (void)_updateContentImageViewIfNeeded;
- (void)_updateContentWithPayload:(id)arg1;
- (void)_updateCornerRadius;
- (void)_updateResizeHandleLocations;
- (double)_verticalContentInset;
- (bool)allDayDrawingStyle;
- (void)animateToFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isAllDay:(bool)arg2 beginFromCurrentState:(bool)arg3 whenFinished:(id /* block */)arg4;
- (id)arrayOfResizeHandles;
- (long long)birthdayCount;
- (double)bottomPinningProximity;
- (void)bringResizeHandlesToFront;
- (double)cappedColorBarHeight;
- (long long)compareOccurrenceViewForTabOrdering:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentImageState;
- (id)cursorInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)didMoveToSuperview;
- (bool)dimmed;
- (int)dragTypeFromPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)drawsResizeHandles;
- (double)enoughHeightForOneLine;
- (void)fadeInContentViewAt:(double)arg1 minWidth:(double)arg2 animated:(bool)arg3;
- (void)forceUpdateColors;
- (void)forceUpdateContentWithPayload:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfOpaqueContent;
- (bool)hasIcon;
- (bool)hasPrecedingDuration;
- (bool)hasTrailingDuration;
- (bool)hideBackgroundImage;
- (bool)hideText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAllDay;
- (bool)isBirthday;
- (bool)isCancelled;
- (bool)isDeclined;
- (bool)isPinned;
- (bool)isProposedTime;
- (bool)isSelectedCopyView;
- (bool)isTentative;
- (bool)isVibrant;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })margin;
- (bool)needsReply;
- (id)occurrence;
- (long long)occurrenceBackgroundStyle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)pointerInteractionDisabled;
- (void)prepareForReuse;
- (bool)reduceLayoutProcessingForAnimation;
- (void)removeFromSuperview;
- (void)requestContentIfNeeded:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (bool)resetContentViewToOriginalState:(bool)arg1;
- (long long)routingMode;
- (bool)selected;
- (id)selectedCopy;
- (void)setAllDay:(bool)arg1;
- (void)setAllDayDrawingStyle:(bool)arg1;
- (void)setAllDayDrawingStyle:(bool)arg1 animated:(bool)arg2;
- (void)setBirthday:(bool)arg1;
- (void)setBirthdayCount:(long long)arg1;
- (void)setBottomPinningProximity:(double)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setCappedColorBarHeight:(double)arg1;
- (void)setDeclined:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmed:(bool)arg1;
- (void)setDrawsResizeHandles:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHasPrecedingDuration:(bool)arg1;
- (void)setHasTrailingDuration:(bool)arg1;
- (void)setHideBackgroundImage:(bool)arg1;
- (void)setHideText:(bool)arg1;
- (void)setHideText:(bool)arg1 animate:(bool)arg2;
- (void)setIsProposedTime:(bool)arg1;
- (void)setIsSelectedCopyView:(bool)arg1;
- (void)setIsVibrant:(bool)arg1;
- (void)setMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setNeedsReply:(bool)arg1;
- (void)setOccurrence:(id)arg1;
- (void)setOccurrenceBackgroundStyle:(long long)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPointerInteractionDisabled:(bool)arg1;
- (void)setReduceLayoutProcessingForAnimation:(bool)arg1;
- (void)setRoutingMode:(long long)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectedCopy:(id)arg1;
- (void)setShowsTravelTime:(bool)arg1;
- (void)setTentative:(bool)arg1;
- (void)setTopPinningProximity:(double)arg1;
- (void)setTopYBoundaryForText:(double)arg1;
- (void)setTouchesAreBeingTracked:(bool)arg1;
- (void)setTravelTime:(double)arg1;
- (void)setTravelTimeSubviewHeightInPoints:(double)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (void)setUsesSmallText:(bool)arg1;
- (void)setVisibleHeight:(double)arg1;
- (bool)showsTravelTime;
- (double)topPinningProximity;
- (double)topYBoundaryForText;
- (bool)touchesAreBeingTracked;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (double)travelTime;
- (double)travelTimeSubviewHeightInPoints;
- (void)updateAlpha;
- (bool)usesSmallText;
- (double)viewMaxNaturalTextHeight;
- (double)visibleHeight;
- (bool)visibleHeightLocked;

@end