#import <MetalKit/MetalKit.h>

@interface MetalView:NSView
-(void)update:(void (^)(id<MTLCommandBuffer>))onComplete;
//-(bool)reloadShader:(dispatch_data_t)data;
-(void)mode:(unsigned int)n;
-(id<MTLTexture>)texture;
-(id<MTLTexture>)drawableTexture;
-(void)cleanup;
@end
