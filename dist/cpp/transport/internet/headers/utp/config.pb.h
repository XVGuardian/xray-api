// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: transport/internet/headers/utp/config.proto
// Protobuf C++ Version: 4.25.1

#ifndef GOOGLE_PROTOBUF_INCLUDED_transport_2finternet_2fheaders_2futp_2fconfig_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_transport_2finternet_2fheaders_2futp_2fconfig_2eproto_2epb_2eh

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
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_transport_2finternet_2fheaders_2futp_2fconfig_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_transport_2finternet_2fheaders_2futp_2fconfig_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_transport_2finternet_2fheaders_2futp_2fconfig_2eproto;
namespace xray {
namespace transport {
namespace internet {
namespace headers {
namespace utp {
class Config;
struct ConfigDefaultTypeInternal;
extern ConfigDefaultTypeInternal _Config_default_instance_;
}  // namespace utp
}  // namespace headers
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
namespace headers {
namespace utp {

// ===================================================================


// -------------------------------------------------------------------

class Config final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:xray.transport.internet.headers.utp.Config) */ {
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
    return "xray.transport.internet.headers.utp.Config";
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
    kVersionFieldNumber = 1,
  };
  // uint32 version = 1;
  void clear_version() ;
  ::uint32_t version() const;
  void set_version(::uint32_t value);

  private:
  ::uint32_t _internal_version() const;
  void _internal_set_version(::uint32_t value);

  public:
  // @@protoc_insertion_point(class_scope:xray.transport.internet.headers.utp.Config)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 1, 0,
      0, 2>
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
    ::uint32_t version_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_transport_2finternet_2fheaders_2futp_2fconfig_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Config

// uint32 version = 1;
inline void Config::clear_version() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.version_ = 0u;
}
inline ::uint32_t Config::version() const {
  // @@protoc_insertion_point(field_get:xray.transport.internet.headers.utp.Config.version)
  return _internal_version();
}
inline void Config::set_version(::uint32_t value) {
  _internal_set_version(value);
  // @@protoc_insertion_point(field_set:xray.transport.internet.headers.utp.Config.version)
}
inline ::uint32_t Config::_internal_version() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.version_;
}
inline void Config::_internal_set_version(::uint32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.version_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace utp
}  // namespace headers
}  // namespace internet
}  // namespace transport
}  // namespace xray


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_transport_2finternet_2fheaders_2futp_2fconfig_2eproto_2epb_2eh
