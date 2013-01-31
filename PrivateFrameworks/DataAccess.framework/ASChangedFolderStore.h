/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class NSArray, NSString, NSNumber, NSMutableArray;

@interface ASChangedFolderStore : ASItem  {
    NSMutableArray *_updatedFolders;
    NSNumber *_status;
    NSString *_syncKey;
}

@property(retain) NSNumber * status;
@property(retain) NSString * syncKey;
@property(retain) NSArray * updatedFolders;

+ (id)asParseRules;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)frontingBasicTypes;
+ (BOOL)parsingWithSubItems;
+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;

- (id)description;
- (void)dealloc;
- (id)updatedFolders;
- (id)syncKey;
- (void)setSyncKey:(id)arg1;
- (void)setUpdatedFolders:(id)arg1;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (void)setStatus:(id)arg1;
- (id)status;

@end