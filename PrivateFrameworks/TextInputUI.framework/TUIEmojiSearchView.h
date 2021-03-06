/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
 */

@interface TUIEmojiSearchView : UIView {
    UIView * _bottomHalfContainerView;
    bool  _collapsed;
    UILabel * _noResultsLabelView;
    bool  _noResultsLabelVisible;
    UIView * _predictionView;
    bool  _predictionViewVisible;
    UIView * _predictionViewWrapperView;
    UIView * _resultsCollectionContainerView;
    UICollectionView * _resultsCollectionView;
    TUIEmojiSearchTextField * _searchTextField;
    UIView * _searchTextFieldPortal;
}

@property (getter=isCollapsed, nonatomic) bool collapsed;
@property (nonatomic) bool noResultsLabelVisible;
@property (nonatomic, retain) UIView *predictionView;
@property (nonatomic) bool predictionViewVisible;
@property (nonatomic, retain) UICollectionView *resultsCollectionView;
@property (nonatomic, readonly) TUIEmojiSearchTextField *searchTextField;

- (void).cxx_destruct;
- (void)_didChangeHandBiasNotification:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_handBiasedEdgeInsets;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isCollapsed;
- (void)layoutSubviews;
- (bool)noResultsLabelVisible;
- (id)predictionView;
- (bool)predictionViewVisible;
- (id)resultsCollectionView;
- (id)searchTextField;
- (void)setCollapsed:(bool)arg1;
- (void)setNoResultsLabelVisible:(bool)arg1;
- (void)setNoResultsLabelVisible:(bool)arg1 animated:(bool)arg2;
- (void)setPredictionView:(id)arg1;
- (void)setPredictionViewVisible:(bool)arg1;
- (void)setPredictionViewVisible:(bool)arg1 animated:(bool)arg2;
- (void)setResultsCollectionView:(id)arg1;

@end
