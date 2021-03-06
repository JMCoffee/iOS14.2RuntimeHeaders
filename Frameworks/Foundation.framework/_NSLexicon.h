/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSLexicon : NSObject {
    NSData * _data;
    NSString * _languageCode;
}

@property (nonatomic, readonly, copy) NSString *languageCode;

+ (id)systemLexiconForLanguageCode:(id)arg1;

- (id)_lemmasInLikelihoodOrderForWord:(id)arg1 matchingWordAttributes:(struct { long long x1; long long x2; long long x3; long long x4; unsigned long long x5; long long x6; long long x7; long long x8; long long x9; long long x10; long long x11; long long x12; long long x13; long long x14; long long x15; long long x16; long long x17; long long x18; long long x19; bool x20; bool x21; bool x22; })arg2;
- (void)dealloc;
- (id)initWithContentsOfURL:(id)arg1 languageCode:(id)arg2 error:(id*)arg3;
- (id)languageCode;
- (id)lemmasForWord:(id)arg1;

@end
