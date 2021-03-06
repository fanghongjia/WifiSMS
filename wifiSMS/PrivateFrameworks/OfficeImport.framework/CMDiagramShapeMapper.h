/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADOrientedBounds, NSString;



@interface CMDiagramShapeMapper : CMDiagramMapper 
{
    NSInteger mChildCount;
    OADOrientedBounds *mDiagramShapeBounds;
    NSString *mIdentifier;
    float mDefaultFontSize;
    NSInteger mMaxMappableTreeDepth;
    float mDefaultScale;
}


- (id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 identifier:(id)arg4 parent:(id)arg5;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })circumscribedBounds;
- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;
- (float)defaultFontSize;
- (void)setDefaultFonSize;
- (void)setFonSizeForChildNode:(id)arg1 atIndex:(NSUInteger)arg2;
- (struct CGSize { float x1; float x2; })textSizeForShapeSize:(struct CGSize { float x1; float x2; })arg1;
- (float)setFonSizeForChildNode:(id)arg1 atIndex:(NSUInteger)arg2 level:(NSInteger)arg3;
- (struct CGSize { float x1; float x2; })sizeForNode:(id)arg1 atIndex:(NSUInteger)arg2;

@end
