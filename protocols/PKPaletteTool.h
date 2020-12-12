/* Generated by RuntimeBrowser.
 */

@protocol PKPaletteTool <NSObject>

@required

- (<PKPaletteErasingTool> *)erasingTool;
- (<PKPaletteInkingTool> *)inkingTool;
- (bool)isErasingTool;
- (bool)isHandwritingTool;
- (bool)isInkingTool;
- (bool)isLassoTool;
- (bool)isRulerTool;
- (NSString *)toolIdentifier;

@end