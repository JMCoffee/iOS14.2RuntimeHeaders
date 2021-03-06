/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

@interface ISBorderEffect : NSObject <ISEffect> {
    ISColor * _color;
    double  _lineWidth;
}

@property (retain) ISColor *color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property double lineWidth;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)color;
- (id)filterWithBackgroundImage:(id)arg1 inputImage:(id)arg2;
- (id)initWithLineWidth:(double)arg1 color:(id)arg2;
- (double)lineWidth;
- (void)setColor:(id)arg1;
- (void)setLineWidth:(double)arg1;

@end
