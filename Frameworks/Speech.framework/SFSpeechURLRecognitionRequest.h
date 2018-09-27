/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Speech.framework/Speech
 */

@interface SFSpeechURLRecognitionRequest : SFSpeechRecognitionRequest {
    NSURL * _URL;
}

@property (nonatomic, readonly, copy) NSURL *URL;

- (void).cxx_destruct;
- (id)URL;
- (id)_startedConnectionWithLanguageCode:(id)arg1 delegate:(id)arg2 taskHint:(long long)arg3 requestIdentifier:(id)arg4;
- (id)init;
- (id)initWithURL:(id)arg1;

@end