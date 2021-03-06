/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMDataProperties, GMMProjectionProperties, GMMAnnotationProperties;



@interface GMMStreetViewMetadata : PBCodable 
{
    GMMDataProperties *_dataProperties;
    GMMProjectionProperties *_projectionProperties;
    GMMAnnotationProperties *_annotationProperties;
}

@property(retain) GMMAnnotationProperties *annotationProperties; /* unknown property attribute: V_annotationProperties */
@property(retain) GMMProjectionProperties *projectionProperties; /* unknown property attribute: V_projectionProperties */
@property(retain) GMMDataProperties *dataProperties; /* unknown property attribute: V_dataProperties */


- (id)init;
- (void)dealloc;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (id)annotationProperties;
- (void)setAnnotationProperties:(id)arg1;
- (id)projectionProperties;
- (void)setProjectionProperties:(id)arg1;
- (id)dataProperties;
- (void)setDataProperties:(id)arg1;

@end
