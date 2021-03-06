/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreAudio.framework/CoreAudio
 */

@interface Core_Audio_IO_Gateway : Core_Audio_Gateway <Core_Audio_IO> {
    struct shared_ptr<Client_Side_IO_Gateway> { 
        struct Client_Side_IO_Gateway {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _client_gateway;
}

@property (nonatomic) struct shared_ptr<Client_Side_IO_Gateway> { struct Client_Side_IO_Gateway {} *x1; struct __shared_weak_count {} *x2; } client_gateway;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<Client_Side_IO_Gateway> { struct Client_Side_IO_Gateway {} *x1; struct __shared_weak_count {} *x2; })client_gateway;
- (void)handle_io_message:(struct Device_Token { unsigned int x1; })arg1 with:(id)arg2 reply:(id /* block */)arg3;
- (void)handle_server_disconnected;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setClient_gateway:(struct shared_ptr<Client_Side_IO_Gateway> { struct Client_Side_IO_Gateway {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)start_after_io_device_change:(unsigned int)arg1 reply:(id /* block */)arg2;
- (void)stop_before_io_device_change:(unsigned int)arg1 reply:(id /* block */)arg2;

@end
