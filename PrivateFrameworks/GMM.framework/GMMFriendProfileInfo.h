/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface GMMFriendProfileInfo : NSObject <GMMReadWriteStream> {
     /* Encoded args for previous method: c12@0:4^{InputDataStream=*IIBB}8 */
    NSString *_email;
    NSInteger _emoticonIndex;
    BOOL _hasEmoticonIndex;
    BOOL _hasLocationAccuracy;
    BOOL _hasLocationTimestamp;
    BOOL _hasPhoneNumType;
    NSInteger _locationAccuracy;
    long long _locationTimestamp;
    NSInteger _phoneNumType;
    NSString *_status;
}

@property BOOL hasEmoticonIndex; /* unknown property attribute: V_hasEmoticonIndex */
@property NSInteger emoticonIndex; /* unknown property attribute: V_emoticonIndex */
@property BOOL hasPhoneNumType; /* unknown property attribute: V_hasPhoneNumType */
@property NSInteger phoneNumType; /* unknown property attribute: V_phoneNumType */
@property BOOL hasLocationAccuracy; /* unknown property attribute: V_hasLocationAccuracy */
@property NSInteger locationAccuracy; /* unknown property attribute: V_locationAccuracy */
@property BOOL hasLocationTimestamp; /* unknown property attribute: V_hasLocationTimestamp */
@property long long locationTimestamp; /* unknown property attribute: V_locationTimestamp */
@property(retain) NSString *status; /* unknown property attribute: V_status */
@property(retain) NSString *email; /* unknown property attribute: V_email */
@property(readonly) BOOL hasEmail;
@property(readonly) BOOL hasStatus;

- (void)dealloc;
- (id)email;
- (NSInteger)emoticonIndex;
- (BOOL)hasEmail;
- (BOOL)hasEmoticonIndex;
- (BOOL)hasLocationAccuracy;
- (BOOL)hasLocationTimestamp;
- (BOOL)hasPhoneNumType;
- (BOOL)hasStatus;
- (id)init;
- (NSInteger)locationAccuracy;
- (long long)locationTimestamp;
- (NSInteger)phoneNumType;
- (BOOL)readFromStream:(struct InputDataStream { char *x1; NSUInteger x2; NSUInteger x3; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x4; void*x5; }*)arg1;
- (void)setEmail:(id)arg1;
- (void)setEmoticonIndex:(NSInteger)arg1;
- (void)setHasEmoticonIndex:(BOOL)arg1;
- (void)setHasLocationAccuracy:(BOOL)arg1;
- (void)setHasLocationTimestamp:(BOOL)arg1;
- (void)setHasPhoneNumType:(BOOL)arg1;
- (void)setLocationAccuracy:(NSInteger)arg1;
- (void)setLocationTimestamp:(long long)arg1;
- (void)setPhoneNumType:(NSInteger)arg1;
- (void)setStatus:(id)arg1;
- (id)status;
- (void)writeToStream:(struct OutputDataStream { char *x1; NSUInteger x2; NSUInteger x3; }*)arg1;

@end