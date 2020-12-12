/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
 */

@interface RBDisplayList : NSObject {
    unsigned long long  _active_contexts;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentRect;
    struct vector<std::__1::pair<RB::cf_ptr<CGContext *>, RB::ContextDelegate *>, 1, unsigned long> { 
        unsigned char _p[16]; 
        struct pair<RB::cf_ptr<CGContext *>, RB::ContextDelegate *> {} *_p; 
        unsigned long long _size; 
        unsigned long long _capacity; 
    }  _contexts;
    struct DisplayList { 
        struct Heap { 
            unsigned long long _page_size; 
            struct Page {} *_pages; 
            char *_sbrk; 
            char *_sbrk_end; 
        } _heap; 
        struct Layer {} *_layer; 
        struct State {} *_state; 
        struct Pool<RB::DisplayList::State> { 
            struct Item {} *_freelist; 
        } _state_pool; 
        struct Pool<RB::DisplayList::Layer> { 
            struct Item {} *_freelist; 
        } _layer_pool; 
        struct Clip {} *_all_clips; 
        struct Style {} *_all_styles; 
        bool _empty; 
        unsigned char _required_depth; 
    }  _list;
}

@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } CTM;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingRect;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } clipBoundingBox;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentRect;
@property (nonatomic) int defaultColorSpace;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (nonatomic) bool linearColors;
@property (nonatomic, readonly) const struct DisplayList { struct Heap { unsigned long long x_1_1_1; struct Page {} *x_1_1_2; char *x_1_1_3; char *x_1_1_4; } x1; struct Layer {} *x2; struct State {} *x3; struct Pool<RB::DisplayList::State> { struct Item {} *x_4_1_1; } x4; struct Pool<RB::DisplayList::Layer> { struct Item {} *x_5_1_1; } x5; struct Clip {} *x6; struct Style {} *x7; bool x8; unsigned char x9; }*rb_displayList;
@property (nonatomic, readonly, copy) NSString *xmlDescription;

+ (id)displayListForCGContext:(struct CGContext { }*)arg1 alpha:(float*)arg2 blendMode:(int*)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })CTM;
- (void)addBlurFilterWithRadius:(double)arg1;
- (void)addBlurFilterWithRadius:(double)arg1 colorSpace:(int)arg2 flags:(unsigned int)arg3;
- (void)addBlurFilterWithRadius:(double)arg1 opaque:(bool)arg2;
- (void)addBrightnessFilterWithAmount:(float)arg1;
- (void)addBrightnessFilterWithAmount:(float)arg1 colorSpace:(int)arg2;
- (void)addColorInvertFilter;
- (void)addColorInvertFilterWithColorSpace:(int)arg1;
- (void)addColorMatrixFilterWithArray:(float)arg1;
- (void)addColorMatrixFilterWithArray:(float)arg1 colorSpace:(int)arg2;
- (void)addColorMonochromeFilterWithAmount:(float)arg1 color:(struct { float x1; float x2; float x3; float x4; })arg2 bias:(float)arg3;
- (void)addColorMonochromeFilterWithAmount:(float)arg1 color:(struct { float x1; float x2; float x3; float x4; })arg2 bias:(float)arg3 colorSpace:(int)arg4;
- (void)addColorMultiplyFilterWithColor:(struct { float x1; float x2; float x3; float x4; })arg1;
- (void)addColorMultiplyFilterWithColor:(struct { float x1; float x2; float x3; float x4; })arg1 colorSpace:(int)arg2;
- (void)addContrastFilterWithAmount:(float)arg1;
- (void)addContrastFilterWithAmount:(float)arg1 colorSpace:(int)arg2;
- (void)addGrayscaleFilterWithAmount:(float)arg1;
- (void)addGrayscaleFilterWithAmount:(float)arg1 colorSpace:(int)arg2;
- (void)addHueRotationFilterWithAngle:(double)arg1;
- (void)addHueRotationFilterWithAngle:(double)arg1 colorSpace:(int)arg2;
- (void)addLuminanceToAlphaFilter;
- (void)addLuminanceToAlphaFilterWithColorSpace:(int)arg1;
- (void)addProjectionStyleWithArray:(float)arg1;
- (void)addSaturationFilterWithAmount:(float)arg1;
- (void)addSaturationFilterWithAmount:(float)arg1 colorSpace:(int)arg2;
- (void)addShadowStyleWithRadius:(double)arg1 offset:(struct CGSize { double x1; double x2; })arg2 color:(struct { float x1; float x2; float x3; float x4; })arg3 mode:(int)arg4;
- (struct CGContext { }*)beginCGContextWithAlpha:(float)arg1;
- (struct CGContext { }*)beginCGContextWithAlpha:(float)arg1 flags:(unsigned int)arg2;
- (void)beginLayer;
- (void)beginLayerWithColorSpace:(int)arg1 flags:(unsigned int)arg2;
- (void)beginLayerWithFlags:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (void)clear;
- (void)clearCaches;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clipBoundingBox;
- (void)clipLayerWithAlpha:(float)arg1 mode:(int)arg2;
- (void)clipShape:(id)arg1 mode:(int)arg2;
- (void)concat:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRect;
- (int)defaultColorSpace;
- (void)drawDisplayList:(id)arg1;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 alpha:(float)arg2 blendMode:(int)arg3 flags:(unsigned int)arg4 operation:(id /* block */)arg5;
- (void)drawLayerWithAlpha:(float)arg1 blendMode:(int)arg2;
- (void)drawShape:(id)arg1 fill:(id)arg2 alpha:(float)arg3 blendMode:(int)arg4;
- (void)endCGContext;
- (id)init;
- (bool)isEmpty;
- (bool)linearColors;
- (const struct DisplayList { struct Heap { unsigned long long x_1_1_1; struct Page {} *x_1_1_2; char *x_1_1_3; char *x_1_1_4; } x1; struct Layer {} *x2; struct State {} *x3; struct Pool<RB::DisplayList::State> { struct Item {} *x_4_1_1; } x4; struct Pool<RB::DisplayList::Layer> { struct Item {} *x_5_1_1; } x5; struct Clip {} *x6; struct Style {} *x7; bool x8; unsigned char x9; }*)rb_displayList;
- (void)restore;
- (void)rotateBy:(double)arg1;
- (void)save;
- (void)scaleByX:(double)arg1 Y:(double)arg2;
- (void)setCTM:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDefaultColorSpace:(int)arg1;
- (void)setLinearColors:(bool)arg1;
- (void)translateByX:(double)arg1 Y:(double)arg2;
- (id)xmlDescription;

@end