/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class ADXPCConnection;

@interface ADAdSheetProxy : NSObject <ADXPCConnectionDelegate> {
    ADXPCConnection *_adSheetConnection;
    int _bootstrapState;
    double _lastTermination;
}

@property(retain) ADXPCConnection * adSheetConnection;
@property int bootstrapState;
@property double lastTermination;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedInstance;

- (void)_bootstrap;
- (id)adSheetConnection;
- (id)autorelease;
- (int)bootstrapState;
- (void)commitFence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)doesServerExist;
- (BOOL)isBootstrapped;
- (double)lastTermination;
- (oneway void)release;
- (id)remoteObjectForMessageName:(id)arg1 senderId:(id)arg2;
- (void)resetAdSheetThrottle;
- (id)retain;
- (unsigned int)retainCount;
- (void)sendMessage:(id)arg1 userInfo:(id)arg2;
- (void)setAdSheetConnection:(id)arg1;
- (void)setBootstrapState:(int)arg1;
- (void)setLastTermination:(double)arg1;
- (void)xpcConnection:(id)arg1 receivedMessage:(id)arg2 userInfo:(id)arg3;
- (void)xpcConnectionFailed:(id)arg1;

@end