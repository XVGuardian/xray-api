// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proxy/dns/config.proto
// Protobuf C++ Version: 4.25.1

#ifndef GOOGLE_PROTOBUF_INCLUDED_proxy_2fdns_2fconfig_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_proxy_2fdns_2fconfig_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4025000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4025001 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
#include "common/net/destination.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_proxy_2fdns_2fconfig_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_proxy_2fdns_2fconfig_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_proxy_2fdns_2fconfig_2eproto;
namespace xray {
namespace proxy {
namespace dns {
class Config;
struct ConfigDefaultTypeInternal;
extern ConfigDefaultTypeInternal _Config_default_instance_;
}  // namespace dns
}  // namespace proxy
}  // namespace xray
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace xray {
namespace proxy {
namespace dns {

// ===================================================================


// -------------------------------------------------------------------

class Config final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:xray.proxy.dns.Config) */ {
 public:
  inline Config() : Config(nullptr) {}
  ~Config() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR Config(::google::protobuf::internal::ConstantInitialized);

  inline Config(const Config& from)
      : Config(nullptr, from) {}
  Config(Config&& from) noexcept
    : Config() {
    *this = ::std::move(from);
  }

  inline Config& operator=(const Config& from) {
    CopyFrom(from);
    return *this;
  }
  inline Config& operator=(Config&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Config& default_instance() {
    return *internal_default_instance();
  }
  static inline const Config* internal_default_instance() {
    return reinterpret_cast<const Config*>(
               &_Config_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Config& a, Config& b) {
    a.Swap(&b);
  }
  inline void Swap(Config* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Config* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Config* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Config>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Config& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const Config& from) {
    Config::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(Config* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "xray.proxy.dns.Config";
  }
  protected:
  explicit Config(::google::protobuf::Arena* arena);
  Config(::google::protobuf::Arena* arena, const Config& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNonIPQueryFieldNumber = 3,
    kServerFieldNumber = 1,
    kUserLevelFieldNumber = 2,
  };
  // string non_IP_query = 3;
  void clear_non_ip_query() ;
  const std::string& non_ip_query() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_non_ip_query(Arg_&& arg, Args_... args);
  std::string* mutable_non_ip_query();
  PROTOBUF_NODISCARD std::string* release_non_ip_query();
  void set_allocated_non_ip_query(std::string* value);

  private:
  const std::string& _internal_non_ip_query() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_non_ip_query(
      const std::string& value);
  std::string* _internal_mutable_non_ip_query();

  public:
  // .xray.common.net.Endpoint server = 1;
  bool has_server() const;
  void clear_server() ;
  const ::xray::common::net::Endpoint& server() const;
  PROTOBUF_NODISCARD ::xray::common::net::Endpoint* release_server();
  ::xray::common::net::Endpoint* mutable_server();
  void set_allocated_server(::xray::common::net::Endpoint* value);
  void unsafe_arena_set_allocated_server(::xray::common::net::Endpoint* value);
  ::xray::common::net::Endpoint* unsafe_arena_release_server();

  private:
  const ::xray::common::net::Endpoint& _internal_server() const;
  ::xray::common::net::Endpoint* _internal_mutable_server();

  public:
  // uint32 user_level = 2;
  void clear_user_level() ;
  ::uint32_t user_level() const;
  void set_user_level(::uint32_t value);

  private:
  ::uint32_t _internal_user_level() const;
  void _internal_set_user_level(::uint32_t value);

  public:
  // @@protoc_insertion_point(class_scope:xray.proxy.dns.Config)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      2, 3, 1,
      42, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    ::google::protobuf::internal::ArenaStringPtr non_ip_query_;
    ::xray::common::net::Endpoint* server_;
    ::uint32_t user_level_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_proxy_2fdns_2fconfig_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Config

// .xray.common.net.Endpoint server = 1;
inline bool Config::has_server() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.server_ != nullptr);
  return value;
}
inline const ::xray::common::net::Endpoint& Config::_internal_server() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  const ::xray::common::net::Endpoint* p = _impl_.server_;
  return p != nullptr ? *p : reinterpret_cast<const ::xray::common::net::Endpoint&>(::xray::common::net::_Endpoint_default_instance_);
}
inline const ::xray::common::net::Endpoint& Config::server() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:xray.proxy.dns.Config.server)
  return _internal_server();
}
inline void Config::unsafe_arena_set_allocated_server(::xray::common::net::Endpoint* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.server_);
  }
  _impl_.server_ = reinterpret_cast<::xray::common::net::Endpoint*>(value);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:xray.proxy.dns.Config.server)
}
inline ::xray::common::net::Endpoint* Config::release_server() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);

  _impl_._has_bits_[0] &= ~0x00000001u;
  ::xray::common::net::Endpoint* released = _impl_.server_;
  _impl_.server_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old = reinterpret_cast<::google::protobuf::MessageLite*>(released);
  released = ::google::protobuf::internal::DuplicateIfNonNull(released);
  if (GetArena() == nullptr) {
    delete old;
  }
#else   // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArena() != nullptr) {
    released = ::google::protobuf::internal::DuplicateIfNonNull(released);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return released;
}
inline ::xray::common::net::Endpoint* Config::unsafe_arena_release_server() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:xray.proxy.dns.Config.server)

  _impl_._has_bits_[0] &= ~0x00000001u;
  ::xray::common::net::Endpoint* temp = _impl_.server_;
  _impl_.server_ = nullptr;
  return temp;
}
inline ::xray::common::net::Endpoint* Config::_internal_mutable_server() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  if (_impl_.server_ == nullptr) {
    auto* p = CreateMaybeMessage<::xray::common::net::Endpoint>(GetArena());
    _impl_.server_ = reinterpret_cast<::xray::common::net::Endpoint*>(p);
  }
  return _impl_.server_;
}
inline ::xray::common::net::Endpoint* Config::mutable_server() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  ::xray::common::net::Endpoint* _msg = _internal_mutable_server();
  // @@protoc_insertion_point(field_mutable:xray.proxy.dns.Config.server)
  return _msg;
}
inline void Config::set_allocated_server(::xray::common::net::Endpoint* value) {
  ::google::protobuf::Arena* message_arena = GetArena();
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (message_arena == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.server_);
  }

  if (value != nullptr) {
    ::google::protobuf::Arena* submessage_arena = reinterpret_cast<::google::protobuf::MessageLite*>(value)->GetArena();
    if (message_arena != submessage_arena) {
      value = ::google::protobuf::internal::GetOwnedMessage(message_arena, value, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }

  _impl_.server_ = reinterpret_cast<::xray::common::net::Endpoint*>(value);
  // @@protoc_insertion_point(field_set_allocated:xray.proxy.dns.Config.server)
}

// uint32 user_level = 2;
inline void Config::clear_user_level() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.user_level_ = 0u;
}
inline ::uint32_t Config::user_level() const {
  // @@protoc_insertion_point(field_get:xray.proxy.dns.Config.user_level)
  return _internal_user_level();
}
inline void Config::set_user_level(::uint32_t value) {
  _internal_set_user_level(value);
  // @@protoc_insertion_point(field_set:xray.proxy.dns.Config.user_level)
}
inline ::uint32_t Config::_internal_user_level() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.user_level_;
}
inline void Config::_internal_set_user_level(::uint32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.user_level_ = value;
}

// string non_IP_query = 3;
inline void Config::clear_non_ip_query() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.non_ip_query_.ClearToEmpty();
}
inline const std::string& Config::non_ip_query() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:xray.proxy.dns.Config.non_IP_query)
  return _internal_non_ip_query();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Config::set_non_ip_query(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.non_ip_query_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:xray.proxy.dns.Config.non_IP_query)
}
inline std::string* Config::mutable_non_ip_query() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_non_ip_query();
  // @@protoc_insertion_point(field_mutable:xray.proxy.dns.Config.non_IP_query)
  return _s;
}
inline const std::string& Config::_internal_non_ip_query() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.non_ip_query_.Get();
}
inline void Config::_internal_set_non_ip_query(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.non_ip_query_.Set(value, GetArena());
}
inline std::string* Config::_internal_mutable_non_ip_query() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.non_ip_query_.Mutable( GetArena());
}
inline std::string* Config::release_non_ip_query() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:xray.proxy.dns.Config.non_IP_query)
  return _impl_.non_ip_query_.Release();
}
inline void Config::set_allocated_non_ip_query(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.non_ip_query_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.non_ip_query_.IsDefault()) {
          _impl_.non_ip_query_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:xray.proxy.dns.Config.non_IP_query)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace dns
}  // namespace proxy
}  // namespace xray


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_proxy_2fdns_2fconfig_2eproto_2epb_2eh
