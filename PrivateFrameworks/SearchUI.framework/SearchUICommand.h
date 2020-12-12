/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUICommand : NSObject {
    SearchUICommandEnvironment * _commandEnvironment;
    SearchUIRowModel * _rowModel;
}

@property (nonatomic, retain) SearchUICommandEnvironment *commandEnvironment;
@property (nonatomic, retain) SearchUIRowModel *rowModel;

+ (id)mainRowModelForRowModel:(id)arg1;
+ (id)peekCommandForRowModel:(id)arg1 environment:(id)arg2;
+ (Class)supportedCommandClassForClasses:(id)arg1 rowModel:(id)arg2 environment:(id)arg3;
+ (bool)supportsRowModel:(id)arg1 environment:(id)arg2;
+ (id)tapCommandForRowModel:(id)arg1 environment:(id)arg2;

- (void).cxx_destruct;
- (id)cardSectionEngagementFeedback;
- (id)commandEnvironment;
- (bool)defaultApplicationExistsAndSupportsOpenInPlaceForFileURL:(id)arg1 performOpenIfSo:(bool)arg2;
- (unsigned long long)destination;
- (id)generateCardViewControllerForPeek:(bool)arg1;
- (id)initWithRowModel:(id)arg1 environment:(id)arg2;
- (id)resultEngagementFeedback;
- (id)rowModel;
- (void)sendCardFeedback;
- (void)sendResultFeedback;
- (void)sendViewControllerFeedback;
- (void)setCommandEnvironment:(id)arg1;
- (void)setRowModel:(id)arg1;
- (id)storeViewController;

@end