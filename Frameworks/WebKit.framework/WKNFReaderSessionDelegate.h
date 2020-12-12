/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKNFReaderSessionDelegate : NSObject <NFReaderSessionDelegate> {
    struct WeakPtr<WebKit::NfcConnection, WTF::EmptyCounter> { 
        struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { 
            struct WeakPtrImpl<WTF::EmptyCounter> {} *m_ptr; 
        } m_impl; 
    }  _connection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithConnection:(struct NfcConnection { unsigned int x1; struct WeakPtrFactory<WebKit::NfcConnection, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> {} *x_1_2_1; } x_2_1_1; } x2; struct RetainPtr<NFReaderSession> { void *x_3_1_1; } x3; struct RetainPtr<WKNFReaderSessionDelegate> { void *x_4_1_1; } x4; struct WeakPtr<WebKit::NfcService, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> {} *x_1_2_1; } x_5_1_1; } x5; struct Timer<WebKit::NfcConnection> { int (**x_6_1_1)(); struct Ref<WTF::RunLoop, WTF::DumbPtrTraits<WTF::RunLoop> > { struct RunLoop {} *x_2_2_1; } x_6_1_2; struct RetainPtr<__CFRunLoopTimer *> { void *x_3_2_1; } x_6_1_3; struct NfcConnection {} *x_6_1_4; } x6; }*)arg1;
- (void)readerSession:(id)arg1 didDetectTags:(id)arg2;

@end