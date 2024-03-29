// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: transport/internet/grpc/encoding/stream.proto
#ifndef GRPC_transport_2finternet_2fgrpc_2fencoding_2fstream_2eproto__INCLUDED
#define GRPC_transport_2finternet_2fgrpc_2fencoding_2fstream_2eproto__INCLUDED

#include "transport/internet/grpc/encoding/stream.pb.h"

#include <functional>
#include <grpcpp/generic/async_generic_service.h>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/client_context.h>
#include <grpcpp/completion_queue.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/proto_utils.h>
#include <grpcpp/impl/rpc_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/status.h>
#include <grpcpp/support/stub_options.h>
#include <grpcpp/support/sync_stream.h>

namespace xray {
namespace transport {
namespace internet {
namespace grpc {
namespace encoding {

class GRPCService final {
 public:
  static constexpr char const* service_full_name() {
    return "xray.transport.internet.grpc.encoding.GRPCService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::xray::transport::internet::grpc::encoding::Hunk, ::xray::transport::internet::grpc::encoding::Hunk>> Tun(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::xray::transport::internet::grpc::encoding::Hunk, ::xray::transport::internet::grpc::encoding::Hunk>>(TunRaw(context));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::xray::transport::internet::grpc::encoding::Hunk, ::xray::transport::internet::grpc::encoding::Hunk>> AsyncTun(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::xray::transport::internet::grpc::encoding::Hunk, ::xray::transport::internet::grpc::encoding::Hunk>>(AsyncTunRaw(context, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::xray::transport::internet::grpc::encoding::Hunk, ::xray::transport::internet::grpc::encoding::Hunk>> PrepareAsyncTun(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::xray::transport::internet::grpc::encoding::Hunk, ::xray::transport::internet::grpc::encoding::Hunk>>(PrepareAsyncTunRaw(context, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::xray::transport::internet::grpc::encoding::MultiHunk, ::xray::transport::internet::grpc::encoding::MultiHunk>> TunMulti(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriterInterface< ::xray::transport::internet::grpc::encoding::MultiHunk, ::xray::transport::internet::grpc::encoding::MultiHunk>>(TunMultiRaw(context));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::xray::transport::internet::grpc::encoding::MultiHunk, ::xray::transport::internet::grpc::encoding::MultiHunk>> AsyncTunMulti(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::xray::transport::internet::grpc::encoding::MultiHunk, ::xray::transport::internet::grpc::encoding::MultiHunk>>(AsyncTunMultiRaw(context, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::xray::transport::internet::grpc::encoding::MultiHunk, ::xray::transport::internet::grpc::encoding::MultiHunk>> PrepareAsyncTunMulti(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriterInterface< ::xray::transport::internet::grpc::encoding::MultiHunk, ::xray::transport::internet::grpc::encoding::MultiHunk>>(PrepareAsyncTunMultiRaw(context, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void Tun(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::xray::transport::internet::grpc::encoding::Hunk,::xray::transport::internet::grpc::encoding::Hunk>* reactor) = 0;
      virtual void TunMulti(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::xray::transport::internet::grpc::encoding::MultiHunk,::xray::transport::internet::grpc::encoding::MultiHunk>* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientReaderWriterInterface< ::xray::transport::internet::grpc::encoding::Hunk, ::xray::transport::internet::grpc::encoding::Hunk>* TunRaw(::grpc::ClientContext* context) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::xray::transport::internet::grpc::encoding::Hunk, ::xray::transport::internet::grpc::encoding::Hunk>* AsyncTunRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::xray::transport::internet::grpc::encoding::Hunk, ::xray::transport::internet::grpc::encoding::Hunk>* PrepareAsyncTunRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderWriterInterface< ::xray::transport::internet::grpc::encoding::MultiHunk, ::xray::transport::internet::grpc::encoding::MultiHunk>* TunMultiRaw(::grpc::ClientContext* context) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::xray::transport::internet::grpc::encoding::MultiHunk, ::xray::transport::internet::grpc::encoding::MultiHunk>* AsyncTunMultiRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderWriterInterface< ::xray::transport::internet::grpc::encoding::MultiHunk, ::xray::transport::internet::grpc::encoding::MultiHunk>* PrepareAsyncTunMultiRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    std::unique_ptr< ::grpc::ClientReaderWriter< ::xray::transport::internet::grpc::encoding::Hunk, ::xray::transport::internet::grpc::encoding::Hunk>> Tun(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriter< ::xray::transport::internet::grpc::encoding::Hunk, ::xray::transport::internet::grpc::encoding::Hunk>>(TunRaw(context));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::xray::transport::internet::grpc::encoding::Hunk, ::xray::transport::internet::grpc::encoding::Hunk>> AsyncTun(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::xray::transport::internet::grpc::encoding::Hunk, ::xray::transport::internet::grpc::encoding::Hunk>>(AsyncTunRaw(context, cq, tag));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::xray::transport::internet::grpc::encoding::Hunk, ::xray::transport::internet::grpc::encoding::Hunk>> PrepareAsyncTun(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::xray::transport::internet::grpc::encoding::Hunk, ::xray::transport::internet::grpc::encoding::Hunk>>(PrepareAsyncTunRaw(context, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderWriter< ::xray::transport::internet::grpc::encoding::MultiHunk, ::xray::transport::internet::grpc::encoding::MultiHunk>> TunMulti(::grpc::ClientContext* context) {
      return std::unique_ptr< ::grpc::ClientReaderWriter< ::xray::transport::internet::grpc::encoding::MultiHunk, ::xray::transport::internet::grpc::encoding::MultiHunk>>(TunMultiRaw(context));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::xray::transport::internet::grpc::encoding::MultiHunk, ::xray::transport::internet::grpc::encoding::MultiHunk>> AsyncTunMulti(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::xray::transport::internet::grpc::encoding::MultiHunk, ::xray::transport::internet::grpc::encoding::MultiHunk>>(AsyncTunMultiRaw(context, cq, tag));
    }
    std::unique_ptr<  ::grpc::ClientAsyncReaderWriter< ::xray::transport::internet::grpc::encoding::MultiHunk, ::xray::transport::internet::grpc::encoding::MultiHunk>> PrepareAsyncTunMulti(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderWriter< ::xray::transport::internet::grpc::encoding::MultiHunk, ::xray::transport::internet::grpc::encoding::MultiHunk>>(PrepareAsyncTunMultiRaw(context, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void Tun(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::xray::transport::internet::grpc::encoding::Hunk,::xray::transport::internet::grpc::encoding::Hunk>* reactor) override;
      void TunMulti(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::xray::transport::internet::grpc::encoding::MultiHunk,::xray::transport::internet::grpc::encoding::MultiHunk>* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientReaderWriter< ::xray::transport::internet::grpc::encoding::Hunk, ::xray::transport::internet::grpc::encoding::Hunk>* TunRaw(::grpc::ClientContext* context) override;
    ::grpc::ClientAsyncReaderWriter< ::xray::transport::internet::grpc::encoding::Hunk, ::xray::transport::internet::grpc::encoding::Hunk>* AsyncTunRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReaderWriter< ::xray::transport::internet::grpc::encoding::Hunk, ::xray::transport::internet::grpc::encoding::Hunk>* PrepareAsyncTunRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientReaderWriter< ::xray::transport::internet::grpc::encoding::MultiHunk, ::xray::transport::internet::grpc::encoding::MultiHunk>* TunMultiRaw(::grpc::ClientContext* context) override;
    ::grpc::ClientAsyncReaderWriter< ::xray::transport::internet::grpc::encoding::MultiHunk, ::xray::transport::internet::grpc::encoding::MultiHunk>* AsyncTunMultiRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReaderWriter< ::xray::transport::internet::grpc::encoding::MultiHunk, ::xray::transport::internet::grpc::encoding::MultiHunk>* PrepareAsyncTunMultiRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Tun_;
    const ::grpc::internal::RpcMethod rpcmethod_TunMulti_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Tun(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::xray::transport::internet::grpc::encoding::Hunk, ::xray::transport::internet::grpc::encoding::Hunk>* stream);
    virtual ::grpc::Status TunMulti(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::xray::transport::internet::grpc::encoding::MultiHunk, ::xray::transport::internet::grpc::encoding::MultiHunk>* stream);
  };
  template <class BaseClass>
  class WithAsyncMethod_Tun : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Tun() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Tun() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Tun(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::xray::transport::internet::grpc::encoding::Hunk, ::xray::transport::internet::grpc::encoding::Hunk>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestTun(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::xray::transport::internet::grpc::encoding::Hunk, ::xray::transport::internet::grpc::encoding::Hunk>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(0, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_TunMulti : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_TunMulti() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_TunMulti() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status TunMulti(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::xray::transport::internet::grpc::encoding::MultiHunk, ::xray::transport::internet::grpc::encoding::MultiHunk>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestTunMulti(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::xray::transport::internet::grpc::encoding::MultiHunk, ::xray::transport::internet::grpc::encoding::MultiHunk>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(1, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Tun<WithAsyncMethod_TunMulti<Service > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_Tun : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Tun() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackBidiHandler< ::xray::transport::internet::grpc::encoding::Hunk, ::xray::transport::internet::grpc::encoding::Hunk>(
            [this](
                   ::grpc::CallbackServerContext* context) { return this->Tun(context); }));
    }
    ~WithCallbackMethod_Tun() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Tun(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::xray::transport::internet::grpc::encoding::Hunk, ::xray::transport::internet::grpc::encoding::Hunk>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerBidiReactor< ::xray::transport::internet::grpc::encoding::Hunk, ::xray::transport::internet::grpc::encoding::Hunk>* Tun(
      ::grpc::CallbackServerContext* /*context*/)
      { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_TunMulti : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_TunMulti() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackBidiHandler< ::xray::transport::internet::grpc::encoding::MultiHunk, ::xray::transport::internet::grpc::encoding::MultiHunk>(
            [this](
                   ::grpc::CallbackServerContext* context) { return this->TunMulti(context); }));
    }
    ~WithCallbackMethod_TunMulti() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status TunMulti(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::xray::transport::internet::grpc::encoding::MultiHunk, ::xray::transport::internet::grpc::encoding::MultiHunk>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerBidiReactor< ::xray::transport::internet::grpc::encoding::MultiHunk, ::xray::transport::internet::grpc::encoding::MultiHunk>* TunMulti(
      ::grpc::CallbackServerContext* /*context*/)
      { return nullptr; }
  };
  typedef WithCallbackMethod_Tun<WithCallbackMethod_TunMulti<Service > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_Tun : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Tun() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Tun() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Tun(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::xray::transport::internet::grpc::encoding::Hunk, ::xray::transport::internet::grpc::encoding::Hunk>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_TunMulti : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_TunMulti() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_TunMulti() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status TunMulti(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::xray::transport::internet::grpc::encoding::MultiHunk, ::xray::transport::internet::grpc::encoding::MultiHunk>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Tun : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Tun() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Tun() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Tun(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::xray::transport::internet::grpc::encoding::Hunk, ::xray::transport::internet::grpc::encoding::Hunk>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestTun(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(0, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_TunMulti : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_TunMulti() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_TunMulti() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status TunMulti(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::xray::transport::internet::grpc::encoding::MultiHunk, ::xray::transport::internet::grpc::encoding::MultiHunk>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestTunMulti(::grpc::ServerContext* context, ::grpc::ServerAsyncReaderWriter< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* stream, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncBidiStreaming(1, context, stream, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Tun : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Tun() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackBidiHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context) { return this->Tun(context); }));
    }
    ~WithRawCallbackMethod_Tun() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Tun(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::xray::transport::internet::grpc::encoding::Hunk, ::xray::transport::internet::grpc::encoding::Hunk>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerBidiReactor< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* Tun(
      ::grpc::CallbackServerContext* /*context*/)
      { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_TunMulti : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_TunMulti() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackBidiHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context) { return this->TunMulti(context); }));
    }
    ~WithRawCallbackMethod_TunMulti() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status TunMulti(::grpc::ServerContext* /*context*/, ::grpc::ServerReaderWriter< ::xray::transport::internet::grpc::encoding::MultiHunk, ::xray::transport::internet::grpc::encoding::MultiHunk>* /*stream*/)  override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerBidiReactor< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* TunMulti(
      ::grpc::CallbackServerContext* /*context*/)
      { return nullptr; }
  };
  typedef Service StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef Service StreamedService;
};

}  // namespace encoding
}  // namespace grpc
}  // namespace internet
}  // namespace transport
}  // namespace xray


#endif  // GRPC_transport_2finternet_2fgrpc_2fencoding_2fstream_2eproto__INCLUDED
