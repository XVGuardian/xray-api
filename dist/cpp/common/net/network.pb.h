// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common/net/network.proto
// Protobuf C++ Version: 4.25.3

#ifndef GOOGLE_PROTOBUF_INCLUDED_common_2fnet_2fnetwork_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_common_2fnet_2fnetwork_2eproto_2epb_2eh

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

#if 4025003 < PROTOBUF_MIN_PROTOC_VERSION
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
#include "google/protobuf/generated_enum_reflection.h"
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_common_2fnet_2fnetwork_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_common_2fnet_2fnetwork_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_common_2fnet_2fnetwork_2eproto;
namespace xray {
namespace common {
namespace net {
class NetworkList;
struct NetworkListDefaultTypeInternal;
extern NetworkListDefaultTypeInternal _NetworkList_default_instance_;
}  // namespace net
}  // namespace common
}  // namespace xray
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace xray {
namespace common {
namespace net {
enum Network : int {
  Unknown = 0,
  RawTCP [[deprecated]] = 1,
  TCP = 2,
  UDP = 3,
  UNIX = 4,
  Network_INT_MIN_SENTINEL_DO_NOT_USE_ =
      std::numeric_limits<::int32_t>::min(),
  Network_INT_MAX_SENTINEL_DO_NOT_USE_ =
      std::numeric_limits<::int32_t>::max(),
};

bool Network_IsValid(int value);
extern const uint32_t Network_internal_data_[];
constexpr Network Network_MIN = static_cast<Network>(0);
constexpr Network Network_MAX = static_cast<Network>(4);
constexpr int Network_ARRAYSIZE = 4 + 1;
const ::google::protobuf::EnumDescriptor*
Network_descriptor();
template <typename T>
const std::string& Network_Name(T value) {
  static_assert(std::is_same<T, Network>::value ||
                    std::is_integral<T>::value,
                "Incorrect type passed to Network_Name().");
  return Network_Name(static_cast<Network>(value));
}
template <>
inline const std::string& Network_Name(Network value) {
  return ::google::protobuf::internal::NameOfDenseEnum<Network_descriptor,
                                                 0, 4>(
      static_cast<int>(value));
}
inline bool Network_Parse(absl::string_view name, Network* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Network>(
      Network_descriptor(), name, value);
}

// ===================================================================


// -------------------------------------------------------------------

class NetworkList final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:xray.common.net.NetworkList) */ {
 public:
  inline NetworkList() : NetworkList(nullptr) {}
  ~NetworkList() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR NetworkList(::google::protobuf::internal::ConstantInitialized);

  inline NetworkList(const NetworkList& from)
      : NetworkList(nullptr, from) {}
  NetworkList(NetworkList&& from) noexcept
    : NetworkList() {
    *this = ::std::move(from);
  }

  inline NetworkList& operator=(const NetworkList& from) {
    CopyFrom(from);
    return *this;
  }
  inline NetworkList& operator=(NetworkList&& from) noexcept {
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
  static const NetworkList& default_instance() {
    return *internal_default_instance();
  }
  static inline const NetworkList* internal_default_instance() {
    return reinterpret_cast<const NetworkList*>(
               &_NetworkList_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(NetworkList& a, NetworkList& b) {
    a.Swap(&b);
  }
  inline void Swap(NetworkList* other) {
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
  void UnsafeArenaSwap(NetworkList* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  NetworkList* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<NetworkList>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const NetworkList& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const NetworkList& from) {
    NetworkList::MergeImpl(*this, from);
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
  void InternalSwap(NetworkList* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "xray.common.net.NetworkList";
  }
  protected:
  explicit NetworkList(::google::protobuf::Arena* arena);
  NetworkList(::google::protobuf::Arena* arena, const NetworkList& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNetworkFieldNumber = 1,
  };
  // repeated .xray.common.net.Network network = 1;
  int network_size() const;
  private:
  int _internal_network_size() const;

  public:
  void clear_network() ;
  public:
  ::xray::common::net::Network network(int index) const;
  void set_network(int index, ::xray::common::net::Network value);
  void add_network(::xray::common::net::Network value);
  const ::google::protobuf::RepeatedField<int>& network() const;
  ::google::protobuf::RepeatedField<int>* mutable_network();

  private:
  const ::google::protobuf::RepeatedField<int>& _internal_network() const;
  ::google::protobuf::RepeatedField<int>* _internal_mutable_network();

  public:
  // @@protoc_insertion_point(class_scope:xray.common.net.NetworkList)
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
    ::google::protobuf::RepeatedField<int> network_;
    mutable ::google::protobuf::internal::CachedSize _network_cached_byte_size_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_common_2fnet_2fnetwork_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// NetworkList

// repeated .xray.common.net.Network network = 1;
inline int NetworkList::_internal_network_size() const {
  return _internal_network().size();
}
inline int NetworkList::network_size() const {
  return _internal_network_size();
}
inline void NetworkList::clear_network() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.network_.Clear();
}
inline ::xray::common::net::Network NetworkList::network(int index) const {
  // @@protoc_insertion_point(field_get:xray.common.net.NetworkList.network)
  return static_cast<::xray::common::net::Network>(_internal_network().Get(index));
}
inline void NetworkList::set_network(int index, ::xray::common::net::Network value) {
  _internal_mutable_network()->Set(index, value);
  // @@protoc_insertion_point(field_set:xray.common.net.NetworkList.network)
}
inline void NetworkList::add_network(::xray::common::net::Network value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _internal_mutable_network()->Add(value);
  // @@protoc_insertion_point(field_add:xray.common.net.NetworkList.network)
}
inline const ::google::protobuf::RepeatedField<int>& NetworkList::network() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_list:xray.common.net.NetworkList.network)
  return _internal_network();
}
inline ::google::protobuf::RepeatedField<int>* NetworkList::mutable_network()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable_list:xray.common.net.NetworkList.network)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  return _internal_mutable_network();
}
inline const ::google::protobuf::RepeatedField<int>& NetworkList::_internal_network() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.network_;
}
inline ::google::protobuf::RepeatedField<int>* NetworkList::_internal_mutable_network() {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return &_impl_.network_;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace net
}  // namespace common
}  // namespace xray


namespace google {
namespace protobuf {

template <>
struct is_proto_enum<::xray::common::net::Network> : std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor<::xray::common::net::Network>() {
  return ::xray::common::net::Network_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_common_2fnet_2fnetwork_2eproto_2epb_2eh
