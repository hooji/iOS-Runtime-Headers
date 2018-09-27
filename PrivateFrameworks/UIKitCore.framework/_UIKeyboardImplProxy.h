/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIKeyboardImplProxy : NSObject <TIKeyboardInputManagerToImplProtocol> {
    <TIKeyboardInputManagerToImplProtocol> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TIKeyboardInputManagerToImplProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)delegate;
- (void)processPayloadInfo:(id)arg1;
- (void)pushAutocorrections:(id)arg1 requestToken:(id)arg2;
- (void)setDelegate:(id)arg1;

@end