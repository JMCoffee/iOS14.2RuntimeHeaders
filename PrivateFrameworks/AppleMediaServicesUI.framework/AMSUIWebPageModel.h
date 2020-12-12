/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
 */

@interface AMSUIWebPageModel : NSObject <AMSUIWebPageProvider> {
    NSString * _backgroundColor;
    AMSUIWebClientContext * _context;
    AMSUIWebNavigationBarModel * _navigationBar;
    struct CGSize { 
        double width; 
        double height; 
    }  _windowSize;
}

@property (nonatomic, readonly) NSString *backgroundColor;
@property (nonatomic, retain) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool disableReappearPlaceholder;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AMSUIWebNavigationBarModel *navigationBar;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } windowSize;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)context;
- (id)createViewController;
- (bool)disableReappearPlaceholder;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)navigationBar;
- (void)setContext:(id)arg1;
- (struct CGSize { double x1; double x2; })windowSize;

@end