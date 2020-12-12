/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUICombinedCardSectionsView : UIView <NUIArrangementContainer, NUIGridArrangementDataSource> {
    NUIGridArrangement * _arrangement;
    NSMutableDictionary * _cardSectionsMapping;
    <SearchUIFeedbackDelegate> * _feedbackDelegate;
    bool  _hasAttributionFooter;
    SearchUICombinedCardSectionRowModel * _rowModel;
    NSMutableArray * _uncacheableViews;
    NSMutableArray * _viewList;
}

@property (nonatomic, retain) NUIGridArrangement *arrangement;
@property (nonatomic, retain) NSMutableDictionary *cardSectionsMapping;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <SearchUIFeedbackDelegate> *feedbackDelegate;
@property bool hasAttributionFooter;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SearchUICombinedCardSectionRowModel *rowModel;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *uncacheableViews;
@property (nonatomic, retain) NSMutableArray *viewList;

- (void).cxx_destruct;
- (id)arrangement;
- (id)cardSectionsMapping;
- (struct CGSize { double x1; double x2; })contentLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 forArrangedSubview:(id)arg2;
- (id)feedbackDelegate;
- (id)gridArrangement:(id)arg1 itemAtIndex:(long long)arg2 columns:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 rows:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4 horizontalAlignment:(long long*)arg5 verticalAlignment:(long long*)arg6;
- (bool)hasAttributionFooter;
- (id)init;
- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)layoutSubviews;
- (long long)numberOfItemsInGridArrangement:(id)arg1;
- (void)resetStateOfViews;
- (id)rowModel;
- (void)setArrangement:(id)arg1;
- (void)setCardSectionsMapping:(id)arg1;
- (void)setFeedbackDelegate:(id)arg1;
- (void)setHasAttributionFooter:(bool)arg1;
- (void)setRowModel:(id)arg1;
- (void)setUncacheableViews:(id)arg1;
- (void)setViewList:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (id)uncacheableViews;
- (id)viewList;
- (id)visibleViewList;

@end