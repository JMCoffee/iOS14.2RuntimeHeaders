/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
 */

@interface QLURLExtensionPreview : QLExtensionPreview {
    NSArray * _additionalURLsAccessed;
    QLURLHandler * _urlHandler;
}

@property (retain) NSArray *additionalURLsAccessed;
@property (retain) QLURLHandler *urlHandler;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalURLsAccessed;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 previewDescription:(id)arg2;
- (id)initWithURLHandler:(id)arg1 previewDescription:(id)arg2;
- (void)setAdditionalURLsAccessed:(id)arg1;
- (void)setUrlHandler:(id)arg1;
- (id)urlHandler;

@end