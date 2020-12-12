/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
 */

@interface shallow_modelOutput : NSObject <MLFeatureProvider> {
    NSDictionary * _classProbability;
    long long  _next_discharge_is_shallow;
}

@property (nonatomic, retain) NSDictionary *classProbability;
@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic) long long next_discharge_is_shallow;

- (void).cxx_destruct;
- (id)classProbability;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithNext_discharge_is_shallow:(long long)arg1 classProbability:(id)arg2;
- (long long)next_discharge_is_shallow;
- (void)setClassProbability:(id)arg1;
- (void)setNext_discharge_is_shallow:(long long)arg1;

@end