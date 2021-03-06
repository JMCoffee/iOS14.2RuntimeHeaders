/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKConceptSynthesizer : NSObject

+ (id)_synthesizeConceptWithIdentifier:(id)arg1 forCodingCollection:(id)arg2 prioritizedCodingSystems:(id)arg3;
+ (id)adHocCodingForCodingCollection:(id)arg1;
+ (id)bestCodingSystemForDisplayForCodingCollection:(id)arg1 prioritizedCodingSystems:(id)arg2;
+ (id)bestDisplayNameForCodingCollection:(id)arg1;
+ (id)bestDisplayNameForCodingCollection:(id)arg1 prioritizedCodingSystems:(id)arg2;
+ (id)enumerateCodingsBySystem:(id)arg1 prioritizingCodingSystems:(id)arg2 handler:(id /* block */)arg3;
+ (id)privateCodeCreationCodingSortDescriptors;
+ (id)proritizedCodingSystemsForDisplay;
+ (id)synthesizeConceptWithIdentifier:(id)arg1 forCodingCollection:(id)arg2;
+ (id)synthesizeInMemoryConceptForCodingCollection:(id)arg1;

@end
