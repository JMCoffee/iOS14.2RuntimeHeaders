/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUDashboardNavigationView : UIView {
    NSArray * _allConstraints;
    UIImageView * _chevronImageView;
    <HUDashboardNavigationViewDelegate> * _delegate;
    UILabel * _headerTitleLabel;
    UIVisualEffectView * _headerTitleLabelEffectView;
    UIButton * _homeAppButton;
    NSDictionary * _largeTitleTextAttributes;
    UIVisualEffectView * _separatorEffectView;
    UIView * _separatorView;
    UIButton * _titleButton;
    UIVisualEffectView * _titleButtonEffectView;
}

@property (nonatomic, retain) NSArray *allConstraints;
@property (nonatomic, readonly) UIImageView *chevronImageView;
@property (nonatomic) <HUDashboardNavigationViewDelegate> *delegate;
@property (nonatomic, retain) NSString *headerTitle;
@property (nonatomic, retain) UILabel *headerTitleLabel;
@property (nonatomic, retain) UIVisualEffectView *headerTitleLabelEffectView;
@property (nonatomic, retain) UIButton *homeAppButton;
@property (nonatomic, retain) NSDictionary *largeTitleTextAttributes;
@property (nonatomic, retain) UIVisualEffectView *separatorEffectView;
@property (nonatomic, retain) UIView *separatorView;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) UIButton *titleButton;
@property (nonatomic, retain) UIVisualEffectView *titleButtonEffectView;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_didTapHomeAppButton:(id)arg1;
- (void)_didTapLargeTitleButton:(id)arg1;
- (void)_rotateChevronButtonToAngle:(double)arg1;
- (id)allConstraints;
- (id)chevronImageView;
- (id)delegate;
- (id)headerTitle;
- (id)headerTitleLabel;
- (id)headerTitleLabelEffectView;
- (id)homeAppButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)largeTitleTextAttributes;
- (void)layoutSubviews;
- (void)rotateChevronDown;
- (void)rotateChevronUp;
- (id)separatorEffectView;
- (id)separatorView;
- (void)setAllConstraints:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setHeaderTitleLabel:(id)arg1;
- (void)setHeaderTitleLabelEffectView:(id)arg1;
- (void)setHomeAppButton:(id)arg1;
- (void)setLargeTitleTextAttributes:(id)arg1;
- (void)setSeparatorEffectView:(id)arg1;
- (void)setSeparatorView:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleButton:(id)arg1;
- (void)setTitleButtonEffectView:(id)arg1;
- (id)title;
- (id)titleButton;
- (id)titleButtonEffectView;
- (void)updateConstraints;

@end
