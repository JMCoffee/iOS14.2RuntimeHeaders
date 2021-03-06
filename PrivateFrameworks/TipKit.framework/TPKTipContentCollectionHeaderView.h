/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TipKit.framework/TipKit
 */

@interface TPKTipContentCollectionHeaderView : UICollectionReusableView {
    TPKContent * _content;
    NSString * _systemLayoutSizeCacheKey;
    struct CGSize { 
        double width; 
        double height; 
    }  _systemLayoutSizeCacheSize;
    TPKContentView * _tipContentView;
}

@property (nonatomic, retain) TPKContent *content;
@property (nonatomic, retain) NSString *systemLayoutSizeCacheKey;
@property (nonatomic) struct CGSize { double x1; double x2; } systemLayoutSizeCacheSize;
@property (nonatomic, retain) TPKContentView *tipContentView;

- (void).cxx_destruct;
- (id)content;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContent:(id)arg1;
- (void)setContent:(id)arg1 contentController:(id)arg2;
- (void)setSystemLayoutSizeCacheKey:(id)arg1;
- (void)setSystemLayoutSizeCacheSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTipContentView:(id)arg1;
- (id)systemLayoutSizeCacheKey;
- (struct CGSize { double x1; double x2; })systemLayoutSizeCacheSize;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)tipContentView;

@end
