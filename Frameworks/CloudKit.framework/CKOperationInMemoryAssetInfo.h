/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKOperationInMemoryAssetInfo : NSObject {
    NSMutableData * _assetContent;
    NSMutableIndexSet * _byteRanges;
}

@property (nonatomic, retain) NSMutableData *assetContent;
@property (nonatomic, retain) NSMutableIndexSet *byteRanges;

- (void).cxx_destruct;
- (id)assetContent;
- (id)assetContentWithError:(id*)arg1 expectedSignature:(id)arg2;
- (id)byteRanges;
- (id)init;
- (bool)isContiguous;
- (void)setAssetContent:(id)arg1;
- (void)setByteRanges:(id)arg1;
- (void)writeData:(id)arg1 atOffset:(unsigned long long)arg2;

@end
