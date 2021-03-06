/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBRootFolderWithDock : SBRootFolder <SBIconIndexNodeObserver> {
    SBIconListModel * _dock;
    SBIconListModel * _favoriteTodayList;
    SBIconListModel * _ignoredList;
    SBIconListModel * _todayList;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_notifyIndexChange:(int)arg1 identifiers:(id)arg2 withValidationBlock:(id /* block */)arg3;
- (void)_setDock:(id)arg1;
- (void)_setFavoriteTodayList:(id)arg1;
- (void)_setIgnoredList:(id)arg1;
- (void)_setTodayList:(id)arg1;
- (id)dock;
- (id)favoriteTodayList;
- (id)ignoredList;
- (id)initWithUniqueIdentifier:(id)arg1 displayName:(id)arg2 maxListCount:(unsigned long long)arg3 listGridSize:(struct SBHIconGridSize { unsigned short x1; unsigned short x2; })arg4 iconGridSizeClassSizes:(struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; struct SBHIconGridSize { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; struct SBHIconGridSize { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3; struct SBHIconGridSize { unsigned short x_4_1_1; unsigned short x_4_1_2; } x4; })arg5;
- (void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)nodeDidMoveContainedNodes:(id)arg1;
- (bool)supportsDock;
- (bool)supportsIgnoredList;
- (bool)supportsTodayList;
- (id)todayList;

@end
