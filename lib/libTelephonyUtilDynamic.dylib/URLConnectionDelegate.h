/* Generated by RuntimeBrowser
   Image: /usr/lib/libTelephonyUtilDynamic.dylib
 */

@class NSMutableData;

@interface URLConnectionDelegate : NSObject <NSURLConnectionDelegate> {
    struct weak_ptr<ctu::Http::URLConnectionCallbackHandler> { 
        struct URLConnectionCallbackHandler {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    struct shared_ptr<ctu::Http::HttpResponse> { 
        struct HttpResponse {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    NSMutableData *fData;
    } fHandler;
    } fResponse;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (struct shared_ptr<ctu::Http::URLConnectionCallbackHandler> { struct URLConnectionCallbackHandler {} *x1; struct __shared_weak_count {} *x2; })getHandler;
- (id)initWithCallbackHandler:(struct shared_ptr<ctu::Http::URLConnectionCallbackHandler> { struct URLConnectionCallbackHandler {} *x1; struct __shared_weak_count {} *x2; })arg1;

@end