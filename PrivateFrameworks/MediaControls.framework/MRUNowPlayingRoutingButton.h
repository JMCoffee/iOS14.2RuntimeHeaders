/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MRUNowPlayingRoutingButton : MPButton {
    bool  _active;
    long long  _context;
    long long  _deviceType;
    CCUICAPackageView * _packageView;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) long long context;
@property (nonatomic) long long deviceType;
@property (nonatomic, retain) CCUICAPackageView *packageView;

+ (bool)_cursorInteractionEnabled;

- (void).cxx_destruct;
- (long long)context;
- (id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3;
- (long long)deviceType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isActive;
- (void)layoutSubviews;
- (id)packageView;
- (void)setActive:(bool)arg1;
- (void)setContext:(long long)arg1;
- (void)setDeviceType:(long long)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setPackageView:(id)arg1;
- (void)setSelected:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updatePackage;
- (void)updatePackageState;

@end
