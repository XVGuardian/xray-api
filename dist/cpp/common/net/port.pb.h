// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common/net/port.proto
// Protobuf C++ Version: 4.25.1

#ifndef GOOGLE_PROTOBUF_INCLUDED_common_2fnet_2fport_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_common_2fnet_2fport_2eproto_2epb_2eh

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

#define PROTOBUF_INTERNAL_EXPORT_common_2fnet_2fport_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_common_2fnet_2fport_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_common_2fnet_2fport_2eproto;
namespace xray {
namespace common {
namespace net {
class PortList;
struct PortListDefaultTypeInternal;
extern PortListDefaultTypeInternal _PortList_default_instance_;
class PortRange;
struct PortRangeDefaultTypeInternal;
extern PortRangeDefaultTypeInternal _PortRange_default_instance_;
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

// ===================================================================


// -------------------------------------------------------------------

class PortRange final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:xray.common.net.PortRange) */ {
 public:
  inline PortRange() : PortRange(nullptr) {}
  ~PortRange() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR PortRange(::google::protobuf::internal::ConstantInitialized);

  inline PortRange(const PortRange& from)
      : PortRange(nullptr, from) {}
  PortRange(PortRange&& from) noexcept
    : PortRange() {
    *this = ::std::move(from);
  }

  inline PortRange& operator=(const PortRange& from) {
    CopyFrom(from);
    return *this;
  }
  inline PortRange& operator=(PortRange&& from) noexcept {
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
  static const PortRange& default_instance() {
    return *internal_default_instance();
  }
  static inline const PortRange* internal_default_instance() {
    return reinterpret_cast<const PortRange*>(
               &_PortRange_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PortRange& a, PortRange& b) {
    a.Swap(&b);
  }
  inline void Swap(PortRange* other) {
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
  void UnsafeArenaSwap(PortRange* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  PortRange* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<PortRange>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const PortRange& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const PortRange& from) {
    PortRange::MergeImpl(*this, from);
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
  void InternalSwap(PortRange* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "xray.common.net.PortRange";
  }
  protected:
  explicit PortRange(::google::protobuf::Arena* arena);
  PortRange(::google::protobuf::Arena* arena, const PortRange& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFromFieldNumber = 1,
    kToFieldNumber = 2,
  };
  // uint32 From = 1;
  void clear_from() ;
  ::uint32_t from() const;
  void set_from(::uint32_t value);

  private:
  ::uint32_t _internal_from() const;
  void _internal_set_from(::uint32_t value);

  public:
  // uint32 To = 2;
  void clear_to() ;
  ::uint32_t to() const;
  void set_to(::uint32_t value);

  private:
  ::uint32_t _internal_to() const;
  void _internal_set_to(::uint32_t value);

  public:
  // @@protoc_insertion_point(class_scope:xray.common.net.PortRange)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      1, 2, 0,
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
    ::uint32_t from_;
    ::uint32_t to_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_common_2fnet_2fport_2eproto;
};// -------------------------------------------------------------------

class PortList final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:xray.common.net.PortList) */ {
 public:
  inline PortList() : PortList(nullptr) {}
  ~PortList() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR PortList(::google::protobuf::internal::ConstantInitialized);

  inline PortList(const PortList& from)
      : PortList(nullptr, from) {}
  PortList(PortList&& from) noexcept
    : PortList() {
    *this = ::std::move(from);
  }

  inline PortList& operator=(const PortList& from) {
    CopyFrom(from);
    return *this;
  }
  inline PortList& operator=(PortList&& from) noexcept {
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
  static const PortList& default_instance() {
    return *internal_default_instance();
  }
  static inline const PortList* internal_default_instance() {
    return reinterpret_cast<const PortList*>(
               &_PortList_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(PortList& a, PortList& b) {
    a.Swap(&b);
  }
  inline void Swap(PortList* other) {
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
  void UnsafeArenaSwap(PortList* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  PortList* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<PortList>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const PortList& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const PortList& from) {
    PortList::MergeImpl(*this, from);
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
  void InternalSwap(PortList* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "xray.common.net.PortList";
  }
  protected:
  explicit PortList(::google::protobuf::Arena* arena);
  PortList(::google::protobuf::Arena* arena, const PortList& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRangeFieldNumber = 1,
  };
  // repeated .xray.common.net.PortRange range = 1;
  int range_size() const;
  private:
  int _internal_range_size() const;

  public:
  void clear_range() ;
  ::xray::common::net::PortRange* mutable_range(int index);
  ::google::protobuf::RepeatedPtrField< ::xray::common::net::PortRange >*
      mutable_range();
  private:
  const ::google::protobuf::RepeatedPtrField<::xray::common::net::PortRange>& _internal_range() const;
  ::google::protobuf::RepeatedPtrField<::xray::common::net::PortRange>* _internal_mutable_range();
  public:
  const ::xray::common::net::PortRange& range(int index) const;
  ::xray::common::net::PortRange* add_range();
  const ::google::protobuf::RepeatedPtrField< ::xray::common::net::PortRange >&
      range() const;
  // @@protoc_insertion_point(class_scope:xray.common.net.PortList)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 1, 1,
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
    ::google::protobuf::RepeatedPtrField< ::xray::common::net::PortRange > range_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_common_2fnet_2fport_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// PortRange

// uint32 From = 1;
inline void PortRange::clear_from() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.from_ = 0u;
}
inline ::uint32_t PortRange::from() const {
  // @@protoc_insertion_point(field_get:xray.common.net.PortRange.From)
  return _internal_from();
}
inline void PortRange::set_from(::uint32_t value) {
  _internal_set_from(value);
  // @@protoc_insertion_point(field_set:xray.common.net.PortRange.From)
}
inline ::uint32_t PortRange::_internal_from() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.from_;
}
inline void PortRange::_internal_set_from(::uint32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.from_ = value;
}

// uint32 To = 2;
inline void PortRange::clear_to() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.to_ = 0u;
}
inline ::uint32_t PortRange::to() const {
  // @@protoc_insertion_point(field_get:xray.common.net.PortRange.To)
  return _internal_to();
}
inline void PortRange::set_to(::uint32_t value) {
  _internal_set_to(value);
  // @@protoc_insertion_point(field_set:xray.common.net.PortRange.To)
}
inline ::uint32_t PortRange::_internal_to() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.to_;
}
inline void PortRange::_internal_set_to(::uint32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.to_ = value;
}

// -------------------------------------------------------------------

// PortList

// repeated .xray.common.net.PortRange range = 1;
inline int PortList::_internal_range_size() const {
  return _internal_range().size();
}
inline int PortList::range_size() const {
  return _internal_range_size();
}
inline void PortList::clear_range() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.range_.Clear();
}
inline ::xray::common::net::PortRange* PortList::mutable_range(int index)
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable:xray.common.net.PortList.range)
  return _internal_mutable_range()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::xray::common::net::PortRange>* PortList::mutable_range()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable_list:xray.common.net.PortList.range)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  return _internal_mutable_range();
}
inline const ::xray::common::net::PortRange& PortList::range(int index) const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:xray.common.net.PortList.range)
  return _internal_range().Get(index);
}
inline ::xray::common::net::PortRange* PortList::add_range() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::xray::common::net::PortRange* _add = _internal_mutable_range()->Add();
  // @@protoc_insertion_point(field_add:xray.common.net.PortList.range)
  return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::xray::common::net::PortRange>& PortList::range() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_list:xray.common.net.PortList.range)
  return _internal_range();
}
inline const ::google::protobuf::RepeatedPtrField<::xray::common::net::PortRange>&
PortList::_internal_range() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.range_;
}
inline ::google::protobuf::RepeatedPtrField<::xray::common::net::PortRange>*
PortList::_internal_mutable_range() {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return &_impl_.range_;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace net
}  // namespace common
}  // namespace xray


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_common_2fnet_2fport_2eproto_2epb_2eh
