/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFThumbnailView : UIView <NSCoding> {
    PDFThumbnailViewPrivate * _private;
}

@property (nonatomic) PDFView *PDFView;
@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (nonatomic) long long layoutMode;
@property (nonatomic, readonly) NSArray *selectedPages;
@property (nonatomic) struct CGSize { double x1; double x2; } thumbnailSize;

- (void).cxx_destruct;
- (id)PDFView;
- (void)_commonInit;
- (void)_updateLayout;
- (id)backgroundColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (void)currentPageChanged:(id)arg1;
- (void)dealloc;
- (void)documentChanged:(id)arg1;
- (void)documentMutated:(id)arg1;
- (void)documentUnlocked:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)layoutMode;
- (void)pageChanged:(id)arg1;
- (id)selectedPages;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLayoutMode:(long long)arg1;
- (void)setPDFView:(id)arg1;
- (void)setThumbnailSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })thumbnailSize;

@end
