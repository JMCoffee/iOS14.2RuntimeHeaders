/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNAsynchronousCacheEntry : NSObject {
    id  _currentValue;
    NSMutableArray * _delegates;
    <CNSchedulerProvider> * _schedulerProvider;
    double  _timestampOfCurrentValue;
}

@property (retain) id currentValue;
@property (readonly) NSMutableArray *delegates;
@property (readonly) <CNSchedulerProvider> *schedulerProvider;
@property (readonly) double timestampOfCurrentValue;

- (void).cxx_destruct;
- (void)addDelegate:(id)arg1;
- (id)currentValue;
- (id)delegates;
- (id)description;
- (id)initWithSchedulerProvider:(id)arg1;
- (void)removeDelegates:(id)arg1;
- (id)schedulerProvider;
- (void)setCurrentValue:(id)arg1;
- (double)timestampOfCurrentValue;
- (void)updateValue:(id)arg1;

@end