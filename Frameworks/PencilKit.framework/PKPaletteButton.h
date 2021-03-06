/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKPaletteButton : UIControl <PKPaletteViewSizeScaling> {
    UIButton * _button;
    NSHashTable * _observers;
    double  _scalingFactor;
    bool  _useCompactLayout;
}

@property (nonatomic, retain) UIButton *button;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic) double scalingFactor;
@property (readonly) Class superclass;
@property (nonatomic) bool useCompactLayout;

+ (id)UCBButton;
+ (bool)_preventsAppearanceProxyCustomization;
+ (id)ellipsisButton;
+ (id)emojiKeyboardButton;
+ (id)keyboardButton;
+ (id)plusButton;
+ (id)redoButton;
+ (id)returnKeyButton;
+ (id)undoButton;

- (void).cxx_destruct;
- (id)_backgroundColor;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_buttonTransform;
- (void)_notifyIntrinsicContentSizeDidChange;
- (id)_tintColorForCurrentState;
- (void)_updateUI;
- (void)addIntrinsicContentSizeObserver:(id)arg1;
- (id)button;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithImage:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)observers;
- (void)removeIntrinsicContentSizeObserver:(id)arg1;
- (double)scalingFactor;
- (void)setButton:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setObservers:(id)arg1;
- (void)setScalingFactor:(double)arg1;
- (void)setSelected:(bool)arg1;
- (void)setUseCompactLayout:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)useCompactLayout;

@end
