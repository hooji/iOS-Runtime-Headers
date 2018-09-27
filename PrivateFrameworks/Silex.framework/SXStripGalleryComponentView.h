/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXStripGalleryComponentView : SXGalleryComponentView <SXFullscreenCanvasShowable, SXImageViewDelegate, SXItemizedScrollViewDataSource, SXItemizedScrollViewDelegate, SXTextSourceDataSource> {
    <SXFullscreenCanvasControllerFactory> * _canvasControllerFactory;
    double  _contentOffset;
    double  _contentWidth;
    NSMutableSet * _exposedGalleryItems;
    SXFullscreenCanvasController * _fullScreenCanvasController;
    UIView * _fullscreenGestureView;
    NSArray * _imageResources;
    <SXImageViewFactory> * _imageViewFactory;
    NSMutableArray * _imageViews;
    SXItemizedScrollView * _itemizedScrollView;
    unsigned long long  _lastPreloadViewIndex;
    bool  _loadedAtleastOneImage;
    SXMediaViewEvent * _mediaViewEvent;
    double  _rightContentInset;
    SXImageView * _targetGalleryItem;
    long long  _visibleImageViewIndex;
    double  _xOffset;
}

@property (nonatomic, readonly) <SXFullscreenCanvasControllerFactory> *canvasControllerFactory;
@property (nonatomic, readonly) double contentOffset;
@property (nonatomic, readonly) double contentWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableSet *exposedGalleryItems;
@property (nonatomic, retain) SXFullscreenCanvasController *fullScreenCanvasController;
@property (nonatomic) UIView *fullscreenGestureView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *imageResources;
@property (nonatomic, readonly) <SXImageViewFactory> *imageViewFactory;
@property (nonatomic, retain) NSMutableArray *imageViews;
@property (nonatomic, retain) SXItemizedScrollView *itemizedScrollView;
@property (nonatomic) unsigned long long lastPreloadViewIndex;
@property (nonatomic) bool loadedAtleastOneImage;
@property (nonatomic, retain) SXMediaViewEvent *mediaViewEvent;
@property (nonatomic, readonly) double rightContentInset;
@property (readonly) Class superclass;
@property (nonatomic, retain) SXImageView *targetGalleryItem;
@property (nonatomic) long long visibleImageViewIndex;
@property (nonatomic, readonly) double xOffset;

- (void).cxx_destruct;
- (id)additionsForTextSource:(id)arg1;
- (bool)allowHierarchyRemoval;
- (unsigned long long)analyticsGalleryType;
- (unsigned long long)analyticsMediaType;
- (id)canvasControllerFactory;
- (double)contentOffset;
- (id)contentSizeCategoryForTextSource:(id)arg1;
- (double)contentWidth;
- (void)createMediaViewEventForGalleryItem:(id)arg1;
- (id)createViewForViewIndex:(unsigned long long)arg1;
- (id)documentControllerForTextSource:(id)arg1;
- (id)exposedGalleryItems;
- (void)finishMediaViewEvent;
- (void)forceImageViewFullscreen:(id)arg1;
- (id)fullScreenCanvasController;
- (id)fullScreenCanvasController:(id)arg1 canvasViewControllerForShowable:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)fullScreenCanvasController:(id)arg1 captionForShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (id)fullScreenCanvasController:(id)arg1 copyViewForShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 didHideShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 didShowShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fullScreenCanvasController:(id)arg1 fullScreenFrameForShowable:(id)arg2 viewIndex:(unsigned long long)arg3 withinRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (unsigned long long)fullScreenCanvasController:(id)arg1 numberOfViewsForShowable:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fullScreenCanvasController:(id)arg1 originalFrameForShowable:(id)arg2 onCanvasView:(id)arg3 viewIndex:(unsigned long long)arg4;
- (id)fullScreenCanvasController:(id)arg1 originalViewForShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 shouldAddGestureView:(id)arg2 forShowable:(id)arg3;
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 didHideViewWithIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 didShowViewWithIndex:(unsigned long long)arg3;
- (bool)fullScreenCanvasController:(id)arg1 showable:(id)arg2 gestureRecognizerShouldBegin:(id)arg3;
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 shouldTransferToOriginalViewWithIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 willShowViewWithIndex:(unsigned long long)arg3;
- (unsigned long long)fullScreenCanvasController:(id)arg1 viewIndexForPoint:(struct CGPoint { double x1; double x2; })arg2 inShowable:(id)arg3;
- (void)fullScreenCanvasController:(id)arg1 willHideShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (bool)fullScreenCanvasController:(id)arg1 willShowShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (id)fullscreenGestureView;
- (bool)gestureShouldBegin:(id)arg1;
- (double)gutterBetweenItemsInNotPagingItemizedScrollView:(id)arg1;
- (id)hostingView;
- (id)imageResources;
- (void)imageView:(id)arg1 didLoadAnimatedImage:(id)arg2;
- (void)imageView:(id)arg1 didLoadImage:(id)arg2 ofQuality:(int)arg3;
- (id)imageViewFactory;
- (id)imageViewForLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)imageViews;
- (id)initWithDocumentController:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 analyticsReporting:(id)arg4 componentStyleRendererFactory:(id)arg5 appStateMonitor:(id)arg6 imageViewFactory:(id)arg7 canvasControllerFactory:(id)arg8;
- (id)inlineTextStylesForTextSource:(id)arg1;
- (id)itemizedScrollView;
- (void)itemizedScrollView:(id)arg1 didChangeToActiveViewIndex:(unsigned long long)arg2;
- (void)itemizedScrollView:(id)arg1 didShowViewWithIndex:(unsigned long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })itemizedScrollView:(id)arg1 frameForViewAtIndex:(unsigned long long)arg2;
- (bool)itemizedScrollView:(id)arg1 isAllowedToAddViewInHierarchy:(unsigned long long)arg2;
- (id)itemizedScrollView:(id)arg1 viewAtIndex:(unsigned long long)arg2;
- (bool)itemizedScrollViewWillReindex:(id)arg1;
- (unsigned long long)lastPreloadViewIndex;
- (void)loadComponent:(id)arg1;
- (bool)loadedAtleastOneImage;
- (id)mediaViewEvent;
- (unsigned long long)numberOfViewsInItemizedScrollView:(id)arg1;
- (void)preloadAdjacentViewsForIndex:(unsigned long long)arg1;
- (void)presentComponentWithChanges:(struct { bool x1; bool x2; })arg1;
- (void)receivedInfo:(id)arg1 fromLayoutingPhaseWithIdentifier:(id)arg2;
- (bool)requestInteractivityFocusForFullScreenCanvasController:(id)arg1;
- (double)rightContentInset;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setExposedGalleryItems:(id)arg1;
- (void)setFullScreenCanvasController:(id)arg1;
- (void)setFullscreenGestureView:(id)arg1;
- (void)setImageResources:(id)arg1;
- (void)setImageViews:(id)arg1;
- (void)setItemizedScrollView:(id)arg1;
- (void)setLastPreloadViewIndex:(unsigned long long)arg1;
- (void)setLoadedAtleastOneImage:(bool)arg1;
- (void)setMediaViewEvent:(id)arg1;
- (void)setTargetGalleryItem:(id)arg1;
- (void)setVisibleImageViewIndex:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })snapRegion;
- (void)submitEvents;
- (id)targetGalleryItem;
- (id)textResizerForTextSource:(id)arg1;
- (id)textRulesForTextSource:(id)arg1;
- (id)textStyleForTextSource:(id)arg1;
- (void)trackExposedGalleryItems;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitionContentFrame;
- (id)transitionContentView;
- (bool)transitionViewUsesThumbnail;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitionVisibleFrame;
- (void)visibilityStateDidChangeFromState:(long long)arg1;
- (id)visibleGalleryItemViewForImageIdentifier:(id)arg1;
- (long long)visibleImageViewIndex;
- (void)willSubmitMediaExposureEvent:(id)arg1;
- (double)xOffset;

@end