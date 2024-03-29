// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: rc.proto
#ifndef GRPC_rc_2eproto__INCLUDED
#define GRPC_rc_2eproto__INCLUDED

#include "rc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace rc {

// Services to send gRPC
class MsgComm final {
 public:
  static constexpr char const* service_full_name() {
    return "rc.MsgComm";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // gRPC call to Send RICControlReqServiceGrpc
    virtual ::grpc::Status SendRICControlReqServiceGrpc(::grpc::ClientContext* context, const ::rc::RicControlGrpcReq& request, ::rc::RicControlGrpcRsp* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::rc::RicControlGrpcRsp>> AsyncSendRICControlReqServiceGrpc(::grpc::ClientContext* context, const ::rc::RicControlGrpcReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::rc::RicControlGrpcRsp>>(AsyncSendRICControlReqServiceGrpcRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::rc::RicControlGrpcRsp>> PrepareAsyncSendRICControlReqServiceGrpc(::grpc::ClientContext* context, const ::rc::RicControlGrpcReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::rc::RicControlGrpcRsp>>(PrepareAsyncSendRICControlReqServiceGrpcRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      // gRPC call to Send RICControlReqServiceGrpc
      virtual void SendRICControlReqServiceGrpc(::grpc::ClientContext* context, const ::rc::RicControlGrpcReq* request, ::rc::RicControlGrpcRsp* response, std::function<void(::grpc::Status)>) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::rc::RicControlGrpcRsp>* AsyncSendRICControlReqServiceGrpcRaw(::grpc::ClientContext* context, const ::rc::RicControlGrpcReq& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::rc::RicControlGrpcRsp>* PrepareAsyncSendRICControlReqServiceGrpcRaw(::grpc::ClientContext* context, const ::rc::RicControlGrpcReq& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status SendRICControlReqServiceGrpc(::grpc::ClientContext* context, const ::rc::RicControlGrpcReq& request, ::rc::RicControlGrpcRsp* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::rc::RicControlGrpcRsp>> AsyncSendRICControlReqServiceGrpc(::grpc::ClientContext* context, const ::rc::RicControlGrpcReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::rc::RicControlGrpcRsp>>(AsyncSendRICControlReqServiceGrpcRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::rc::RicControlGrpcRsp>> PrepareAsyncSendRICControlReqServiceGrpc(::grpc::ClientContext* context, const ::rc::RicControlGrpcReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::rc::RicControlGrpcRsp>>(PrepareAsyncSendRICControlReqServiceGrpcRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void SendRICControlReqServiceGrpc(::grpc::ClientContext* context, const ::rc::RicControlGrpcReq* request, ::rc::RicControlGrpcRsp* response, std::function<void(::grpc::Status)>) override;
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::rc::RicControlGrpcRsp>* AsyncSendRICControlReqServiceGrpcRaw(::grpc::ClientContext* context, const ::rc::RicControlGrpcReq& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::rc::RicControlGrpcRsp>* PrepareAsyncSendRICControlReqServiceGrpcRaw(::grpc::ClientContext* context, const ::rc::RicControlGrpcReq& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_SendRICControlReqServiceGrpc_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // gRPC call to Send RICControlReqServiceGrpc
    virtual ::grpc::Status SendRICControlReqServiceGrpc(::grpc::ServerContext* context, const ::rc::RicControlGrpcReq* request, ::rc::RicControlGrpcRsp* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_SendRICControlReqServiceGrpc : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_SendRICControlReqServiceGrpc() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_SendRICControlReqServiceGrpc() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendRICControlReqServiceGrpc(::grpc::ServerContext* context, const ::rc::RicControlGrpcReq* request, ::rc::RicControlGrpcRsp* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSendRICControlReqServiceGrpc(::grpc::ServerContext* context, ::rc::RicControlGrpcReq* request, ::grpc::ServerAsyncResponseWriter< ::rc::RicControlGrpcRsp>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_SendRICControlReqServiceGrpc<Service > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_SendRICControlReqServiceGrpc : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_SendRICControlReqServiceGrpc() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_SendRICControlReqServiceGrpc() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendRICControlReqServiceGrpc(::grpc::ServerContext* context, const ::rc::RicControlGrpcReq* request, ::rc::RicControlGrpcRsp* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_SendRICControlReqServiceGrpc : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_SendRICControlReqServiceGrpc() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_SendRICControlReqServiceGrpc() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendRICControlReqServiceGrpc(::grpc::ServerContext* context, const ::rc::RicControlGrpcReq* request, ::rc::RicControlGrpcRsp* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSendRICControlReqServiceGrpc(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_SendRICControlReqServiceGrpc : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_SendRICControlReqServiceGrpc() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::rc::RicControlGrpcReq, ::rc::RicControlGrpcRsp>(std::bind(&WithStreamedUnaryMethod_SendRICControlReqServiceGrpc<BaseClass>::StreamedSendRICControlReqServiceGrpc, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_SendRICControlReqServiceGrpc() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status SendRICControlReqServiceGrpc(::grpc::ServerContext* context, const ::rc::RicControlGrpcReq* request, ::rc::RicControlGrpcRsp* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedSendRICControlReqServiceGrpc(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::rc::RicControlGrpcReq,::rc::RicControlGrpcRsp>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_SendRICControlReqServiceGrpc<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_SendRICControlReqServiceGrpc<Service > StreamedService;
};

}  // namespace rc


#endif  // GRPC_rc_2eproto__INCLUDED
