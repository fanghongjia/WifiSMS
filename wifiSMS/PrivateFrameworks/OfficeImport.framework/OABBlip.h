/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface OABBlip : NSObject 
{
}

+ (id)readBlipFromBse:(id)arg1;
+ (id)readBlipFromEshBlip:(struct EshBlip { int (**x1)(); unsigned short x2; struct EshHeader { NSInteger x_3_1_1; NSUInteger x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; struct UID { unsigned char x_4_1_1[16]; } x4; }*)arg1;
+ (id)dibFileContentsWithDibBlipData:(const struct OcBinaryData { int (**x1)(); NSUInteger x2; NSUInteger x3; NSUInteger x4; char *x5; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x6; }*)arg1;
     /* Encoded args for previous method: @12@0:4r^{OcBinaryData=^^?III*B}8 */

+ (id)subBlipWithMetafileInfo:(const struct EshMetafileBlipInfo { unsigned short *x1; struct UID { unsigned char x_2_1_1[16]; } x2; struct OcBinaryData { int (**x_3_1_1)(); NSUInteger x_3_1_2; NSUInteger x_3_1_3; NSUInteger x_3_1_4; char *x_3_1_5; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x_3_1_6; } x3; NSInteger x4; struct CsRect<long int> { long x_5_1_1[4]; } x5; struct CsPoint<long int> { long x_6_1_1[2]; } x6; NSInteger x7; unsigned char x8; unsigned char x9; }*)arg1;
     /* Encoded args for previous method: @12@0:4r^{EshMetafileBlipInfo=^S{UID=[16C]}{OcBinaryData=^^?III*B}i{CsRect<long int>=[4l]}{CsPoint<long int>=[2l]}iCC}8 */

+ (NSInteger)blipTypeForBlipSignature:(NSInteger)arg1;


@end
