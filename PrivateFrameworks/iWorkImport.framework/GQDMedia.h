/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class GQDAffineGeometry, GQDFilteredImage, GQDPath, GQDImageBinary;

@interface GQDMedia : GQDGraphic <GQDNameMappable> {
    GQDFilteredImage *mFilteredImage;
    GQDAffineGeometry *mCropGeometry;
    GQDImageBinary *mOriginalImageBinary;
    GQDPath *mPath;
}

+ (const struct StateSpec { int (**x1)(); char *x2; int x3; int x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (id)cropGeometry;
- (id)maskPath;
- (id)imageBinary;
- (void)dealloc;

@end