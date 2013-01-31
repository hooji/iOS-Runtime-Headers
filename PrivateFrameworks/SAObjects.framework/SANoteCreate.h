/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSString;

@interface SANoteCreate : SABaseClientBoundCommand  {
}

@property(copy) NSURL * targetAppId;
@property(copy) NSString * contents;

+ (id)createWithDictionary:(id)arg1 context:(id)arg2;
+ (id)create;

- (BOOL)requiresResponse;
- (void)setTargetAppId:(id)arg1;
- (id)targetAppId;
- (id)encodedClassName;
- (void)setContents:(id)arg1;
- (id)contents;
- (id)groupIdentifier;

@end