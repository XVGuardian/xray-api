// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: transport/internet/quic/config.proto
// Protobuf C++ Version: 4.25.1

#ifndef GOOGLE_PROTOBUF_INCLUDED_transport_2finternet_2fquic_2fconfig_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_transport_2finternet_2fquic_2fconfig_2eproto_2epb_2eh

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
#include "common/serial/typed_message.pb.h"
#include "common/protocol/headers.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_transport_2finternet_2fquic_2fconfig_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_transport_2finternet_2fquic_2fconfig_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_transport_2finternet_2fquic_2fconfig_2eproto;
namespace xray {
namespace transport {
namespace internet {
namespace quic {
class Config;
struct ConfigDefaultTypeInternal;
extern ConfigDefaultTypeInternal _Config_default_instance_;
}  // namespace quic
}  // namespace internet
}  // namespace transport
}  // namespace xray
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace xray {
namespace transport {
namespace internet {
namespace quic {

// ===================================================================


// -------------------------------------------------------------------

class Config final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:xray.transport.internet.quic.Config) */ {
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
    return "xray.transport.internet.quic.Config";
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
    kKeyFieldNumber = 1,
    kSecurityFieldNumber = 2,
    kHeaderFieldNumber = 3,
  };
  // string key = 1;
  void clear_key() ;
  const std::string& key() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_key(Arg_&& arg, Args_... args);
  std::string* mutable_key();
  PROTOBUF_NODISCARD std::string* release_key();
  void set_allocated_key(std::string* value);

  private:
  const std::string& _internal_key() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_key(
      const std::string& value);
  std::string* _internal_mutable_key();

  public:
  // .xray.common.protocol.SecurityConfig security = 2;
  bool has_security() const;
  void clear_security() ;
  const ::xray::common::protocol::SecurityConfig& security() const;
  PROTOBUF_NODISCARD ::xray::common::protocol::SecurityConfig* release_security();
  ::xray::common::protocol::SecurityConfig* mutable_security();
  void set_allocated_security(::xray::common::protocol::SecurityConfig* value);
  void unsafe_arena_set_allocated_security(::xray::common::protocol::SecurityConfig* value);
  ::xray::common::protocol::SecurityConfig* unsafe_arena_release_security();

  private:
  const ::xray::common::protocol::SecurityConfig& _internal_security() const;
  ::xray::common::protocol::SecurityConfig* _internal_mutable_security();

  public:
  // .xray.common.serial.TypedMessage header = 3;
  bool has_header() const;
  void clear_header() ;
  const ::xray::common::serial::TypedMessage& header() const;
  PROTOBUF_NODISCARD ::xray::common::serial::TypedMessage* release_header();
  ::xray::common::serial::TypedMessage* mutable_header();
  void set_allocated_header(::xray::common::serial::TypedMessage* value);
  void unsafe_arena_set_allocated_header(::xray::common::serial::TypedMessage* value);
  ::xray::common::serial::TypedMessage* unsafe_arena_release_header();

  private:
  const ::xray::common::serial::TypedMessage& _internal_header() const;
  ::xray::common::serial::TypedMessage* _internal_mutable_header();

  public:
  // @@protoc_insertion_point(class_scope:xray.transport.internet.quic.Config)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      2, 3, 2,
      47, 2>
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
    ::google::protobuf::internal::ArenaStringPtr key_;
    ::xray::common::protocol::SecurityConfig* security_;
    ::xray::common::serial::TypedMessage* header_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_transport_2finternet_2fquic_2fconfig_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Config

// string key = 1;
inline void Config::clear_key() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.key_.ClearToEmpty();
}
inline const std::string& Config::key() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:xray.transport.internet.quic.Config.key)
  return _internal_key();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Config::set_key(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.key_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:xray.transport.internet.quic.Config.key)
}
inline std::string* Config::mutable_key() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_key();
  // @@protoc_insertion_point(field_mutable:xray.transport.internet.quic.Config.key)
  return _s;
}
inline const std::string& Config::_internal_key() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.key_.Get();
}
inline void Config::_internal_set_key(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.key_.Set(value, GetArena());
}
inline std::string* Config::_internal_mutable_key() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.key_.Mutable( GetArena());
}
inline std::string* Config::release_key() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:xray.transport.internet.quic.Config.key)
  return _impl_.key_.Release();
}
inline void Config::set_allocated_key(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.key_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.key_.IsDefault()) {
          _impl_.key_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:xray.transport.internet.quic.Config.key)
}

// .xray.common.protocol.SecurityConfig security = 2;
inline bool Config::has_security() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.security_ != nullptr);
  return value;
}
inline const ::xray::common::protocol::SecurityConfig& Config::_internal_security() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  const ::xray::common::protocol::SecurityConfig* p = _impl_.security_;
  return p != nullptr ? *p : reinterpret_cast<const ::xray::common::protocol::SecurityConfig&>(::xray::common::protocol::_SecurityConfig_default_instance_);
}
inline const ::xray::common::protocol::SecurityConfig& Config::security() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:xray.transport.internet.quic.Config.security)
  return _internal_security();
}
inline void Config::unsafe_arena_set_allocated_security(::xray::common::protocol::SecurityConfig* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.security_);
  }
  _impl_.security_ = reinterpret_cast<::xray::common::protocol::SecurityConfig*>(value);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:xray.transport.internet.quic.Config.security)
}
inline ::xray::common::protocol::SecurityConfig* Config::release_security() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);

  _impl_._has_bits_[0] &= ~0x00000001u;
  ::xray::common::protocol::SecurityConfig* released = _impl_.security_;
  _impl_.security_ = nullptr;
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
inline ::xray::common::protocol::SecurityConfig* Config::unsafe_arena_release_security() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:xray.transport.internet.quic.Config.security)

  _impl_._has_bits_[0] &= ~0x00000001u;
  ::xray::common::protocol::SecurityConfig* temp = _impl_.security_;
  _impl_.security_ = nullptr;
  return temp;
}
inline ::xray::common::protocol::SecurityConfig* Config::_internal_mutable_security() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  if (_impl_.security_ == nullptr) {
    auto* p = CreateMaybeMessage<::xray::common::protocol::SecurityConfig>(GetArena());
    _impl_.security_ = reinterpret_cast<::xray::common::protocol::SecurityConfig*>(p);
  }
  return _impl_.security_;
}
inline ::xray::common::protocol::SecurityConfig* Config::mutable_security() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  ::xray::common::protocol::SecurityConfig* _msg = _internal_mutable_security();
  // @@protoc_insertion_point(field_mutable:xray.transport.internet.quic.Config.security)
  return _msg;
}
inline void Config::set_allocated_security(::xray::common::protocol::SecurityConfig* value) {
  ::google::protobuf::Arena* message_arena = GetArena();
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (message_arena == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.security_);
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

  _impl_.security_ = reinterpret_cast<::xray::common::protocol::SecurityConfig*>(value);
  // @@protoc_insertion_point(field_set_allocated:xray.transport.internet.quic.Config.security)
}

// .xray.common.serial.TypedMessage header = 3;
inline bool Config::has_header() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.header_ != nullptr);
  return value;
}
inline const ::xray::common::serial::TypedMessage& Config::_internal_header() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  const ::xray::common::serial::TypedMessage* p = _impl_.header_;
  return p != nullptr ? *p : reinterpret_cast<const ::xray::common::serial::TypedMessage&>(::xray::common::serial::_TypedMessage_default_instance_);
}
inline const ::xray::common::serial::TypedMessage& Config::header() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:xray.transport.internet.quic.Config.header)
  return _internal_header();
}
inline void Config::unsafe_arena_set_allocated_header(::xray::common::serial::TypedMessage* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.header_);
  }
  _impl_.header_ = reinterpret_cast<::xray::common::serial::TypedMessage*>(value);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:xray.transport.internet.quic.Config.header)
}
inline ::xray::common::serial::TypedMessage* Config::release_header() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);

  _impl_._has_bits_[0] &= ~0x00000002u;
  ::xray::common::serial::TypedMessage* released = _impl_.header_;
  _impl_.header_ = nullptr;
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
inline ::xray::common::serial::TypedMessage* Config::unsafe_arena_release_header() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:xray.transport.internet.quic.Config.header)

  _impl_._has_bits_[0] &= ~0x00000002u;
  ::xray::common::serial::TypedMessage* temp = _impl_.header_;
  _impl_.header_ = nullptr;
  return temp;
}
inline ::xray::common::serial::TypedMessage* Config::_internal_mutable_header() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000002u;
  if (_impl_.header_ == nullptr) {
    auto* p = CreateMaybeMessage<::xray::common::serial::TypedMessage>(GetArena());
    _impl_.header_ = reinterpret_cast<::xray::common::serial::TypedMessage*>(p);
  }
  return _impl_.header_;
}
inline ::xray::common::serial::TypedMessage* Config::mutable_header() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  ::xray::common::serial::TypedMessage* _msg = _internal_mutable_header();
  // @@protoc_insertion_point(field_mutable:xray.transport.internet.quic.Config.header)
  return _msg;
}
inline void Config::set_allocated_header(::xray::common::serial::TypedMessage* value) {
  ::google::protobuf::Arena* message_arena = GetArena();
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (message_arena == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.header_);
  }

  if (value != nullptr) {
    ::google::protobuf::Arena* submessage_arena = reinterpret_cast<::google::protobuf::MessageLite*>(value)->GetArena();
    if (message_arena != submessage_arena) {
      value = ::google::protobuf::internal::GetOwnedMessage(message_arena, value, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }

  _impl_.header_ = reinterpret_cast<::xray::common::serial::TypedMessage*>(value);
  // @@protoc_insertion_point(field_set_allocated:xray.transport.internet.quic.Config.header)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace quic
}  // namespace internet
}  // namespace transport
}  // namespace xray


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_transport_2finternet_2fquic_2fconfig_2eproto_2epb_2eh
