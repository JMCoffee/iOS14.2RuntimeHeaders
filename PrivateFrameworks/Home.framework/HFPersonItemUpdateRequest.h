/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFPersonItemUpdateRequest : NSObject {
    HMHome * _home;
    HMPerson * _person;
    HMPersonManager * _personManager;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly, copy) HMPerson *person;
@property (nonatomic, readonly) HMPersonManager *personManager;

- (void).cxx_destruct;
- (id)home;
- (id)initWithPerson:(id)arg1 personManager:(id)arg2 home:(id)arg3;
- (id)person;
- (id)personManager;
- (id)updateWithOptions:(id)arg1;

@end
