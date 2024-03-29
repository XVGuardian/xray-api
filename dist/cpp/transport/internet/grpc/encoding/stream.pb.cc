// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: transport/internet/grpc/encoding/stream.proto

#include "transport/internet/grpc/encoding/stream.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
#include "google/protobuf/generated_message_tctable_impl.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace xray {
namespace transport {
namespace internet {
namespace grpc {
namespace encoding {

inline constexpr MultiHunk::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : data_{},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR MultiHunk::MultiHunk(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct MultiHunkDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MultiHunkDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~MultiHunkDefaultTypeInternal() {}
  union {
    MultiHunk _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MultiHunkDefaultTypeInternal _MultiHunk_default_instance_;

inline constexpr Hunk::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : data_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR Hunk::Hunk(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct HunkDefaultTypeInternal {
  PROTOBUF_CONSTEXPR HunkDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~HunkDefaultTypeInternal() {}
  union {
    Hunk _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 HunkDefaultTypeInternal _Hunk_default_instance_;
}  // namespace encoding
}  // namespace grpc
}  // namespace internet
}  // namespace transport
}  // namespace xray
static ::_pb::Metadata file_level_metadata_transport_2finternet_2fgrpc_2fencoding_2fstream_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_transport_2finternet_2fgrpc_2fencoding_2fstream_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_transport_2finternet_2fgrpc_2fencoding_2fstream_2eproto = nullptr;
const ::uint32_t TableStruct_transport_2finternet_2fgrpc_2fencoding_2fstream_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::xray::transport::internet::grpc::encoding::Hunk, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::xray::transport::internet::grpc::encoding::Hunk, _impl_.data_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::xray::transport::internet::grpc::encoding::MultiHunk, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::xray::transport::internet::grpc::encoding::MultiHunk, _impl_.data_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::xray::transport::internet::grpc::encoding::Hunk)},
        {9, -1, -1, sizeof(::xray::transport::internet::grpc::encoding::MultiHunk)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::xray::transport::internet::grpc::encoding::_Hunk_default_instance_._instance,
    &::xray::transport::internet::grpc::encoding::_MultiHunk_default_instance_._instance,
};
const char descriptor_table_protodef_transport_2finternet_2fgrpc_2fencoding_2fstream_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n-transport/internet/grpc/encoding/strea"
    "m.proto\022%xray.transport.internet.grpc.en"
    "coding\"\024\n\004Hunk\022\014\n\004data\030\001 \001(\014\"\031\n\tMultiHun"
    "k\022\014\n\004data\030\001 \003(\0142\346\001\n\013GRPCService\022c\n\003Tun\022+"
    ".xray.transport.internet.grpc.encoding.H"
    "unk\032+.xray.transport.internet.grpc.encod"
    "ing.Hunk(\0010\001\022r\n\010TunMulti\0220.xray.transpor"
    "t.internet.grpc.encoding.MultiHunk\0320.xra"
    "y.transport.internet.grpc.encoding.Multi"
    "Hunk(\0010\001B<Z:github.com/xtls/xray-core/tr"
    "ansport/internet/grpc/encodingb\006proto3"
};
static ::absl::once_flag descriptor_table_transport_2finternet_2fgrpc_2fencoding_2fstream_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_transport_2finternet_2fgrpc_2fencoding_2fstream_2eproto = {
    false,
    false,
    438,
    descriptor_table_protodef_transport_2finternet_2fgrpc_2fencoding_2fstream_2eproto,
    "transport/internet/grpc/encoding/stream.proto",
    &descriptor_table_transport_2finternet_2fgrpc_2fencoding_2fstream_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_transport_2finternet_2fgrpc_2fencoding_2fstream_2eproto::offsets,
    file_level_metadata_transport_2finternet_2fgrpc_2fencoding_2fstream_2eproto,
    file_level_enum_descriptors_transport_2finternet_2fgrpc_2fencoding_2fstream_2eproto,
    file_level_service_descriptors_transport_2finternet_2fgrpc_2fencoding_2fstream_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_transport_2finternet_2fgrpc_2fencoding_2fstream_2eproto_getter() {
  return &descriptor_table_transport_2finternet_2fgrpc_2fencoding_2fstream_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_transport_2finternet_2fgrpc_2fencoding_2fstream_2eproto(&descriptor_table_transport_2finternet_2fgrpc_2fencoding_2fstream_2eproto);
namespace xray {
namespace transport {
namespace internet {
namespace grpc {
namespace encoding {
// ===================================================================

class Hunk::_Internal {
 public:
};

Hunk::Hunk(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:xray.transport.internet.grpc.encoding.Hunk)
}
inline PROTOBUF_NDEBUG_INLINE Hunk::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : data_(arena, from.data_),
        _cached_size_{0} {}

Hunk::Hunk(
    ::google::protobuf::Arena* arena,
    const Hunk& from)
    : ::google::protobuf::Message(arena) {
  Hunk* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);

  // @@protoc_insertion_point(copy_constructor:xray.transport.internet.grpc.encoding.Hunk)
}
inline PROTOBUF_NDEBUG_INLINE Hunk::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : data_(arena),
        _cached_size_{0} {}

inline void Hunk::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
Hunk::~Hunk() {
  // @@protoc_insertion_point(destructor:xray.transport.internet.grpc.encoding.Hunk)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void Hunk::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.data_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void Hunk::Clear() {
// @@protoc_insertion_point(message_clear_start:xray.transport.internet.grpc.encoding.Hunk)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.data_.ClearToEmpty();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* Hunk::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 0, 2> Hunk::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_Hunk_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // bytes data = 1;
    {::_pbi::TcParser::FastBS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(Hunk, _impl_.data_)}},
  }}, {{
    65535, 65535
  }}, {{
    // bytes data = 1;
    {PROTOBUF_FIELD_OFFSET(Hunk, _impl_.data_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kBytes | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
  }},
};

::uint8_t* Hunk::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:xray.transport.internet.grpc.encoding.Hunk)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // bytes data = 1;
  if (!this->_internal_data().empty()) {
    const std::string& _s = this->_internal_data();
    target = stream->WriteBytesMaybeAliased(1, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:xray.transport.internet.grpc.encoding.Hunk)
  return target;
}

::size_t Hunk::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:xray.transport.internet.grpc.encoding.Hunk)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes data = 1;
  if (!this->_internal_data().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::BytesSize(
                                    this->_internal_data());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData Hunk::_class_data_ = {
    Hunk::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* Hunk::GetClassData() const {
  return &_class_data_;
}

void Hunk::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<Hunk*>(&to_msg);
  auto& from = static_cast<const Hunk&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:xray.transport.internet.grpc.encoding.Hunk)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_data().empty()) {
    _this->_internal_set_data(from._internal_data());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Hunk::CopyFrom(const Hunk& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:xray.transport.internet.grpc.encoding.Hunk)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool Hunk::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* Hunk::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void Hunk::InternalSwap(Hunk* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.data_, &other->_impl_.data_, arena);
}

::google::protobuf::Metadata Hunk::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_transport_2finternet_2fgrpc_2fencoding_2fstream_2eproto_getter, &descriptor_table_transport_2finternet_2fgrpc_2fencoding_2fstream_2eproto_once,
      file_level_metadata_transport_2finternet_2fgrpc_2fencoding_2fstream_2eproto[0]);
}
// ===================================================================

class MultiHunk::_Internal {
 public:
};

MultiHunk::MultiHunk(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:xray.transport.internet.grpc.encoding.MultiHunk)
}
inline PROTOBUF_NDEBUG_INLINE MultiHunk::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : data_{visibility, arena, from.data_},
        _cached_size_{0} {}

MultiHunk::MultiHunk(
    ::google::protobuf::Arena* arena,
    const MultiHunk& from)
    : ::google::protobuf::Message(arena) {
  MultiHunk* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);

  // @@protoc_insertion_point(copy_constructor:xray.transport.internet.grpc.encoding.MultiHunk)
}
inline PROTOBUF_NDEBUG_INLINE MultiHunk::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : data_{visibility, arena},
        _cached_size_{0} {}

inline void MultiHunk::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
MultiHunk::~MultiHunk() {
  // @@protoc_insertion_point(destructor:xray.transport.internet.grpc.encoding.MultiHunk)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void MultiHunk::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void MultiHunk::Clear() {
// @@protoc_insertion_point(message_clear_start:xray.transport.internet.grpc.encoding.MultiHunk)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.data_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* MultiHunk::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 0, 2> MultiHunk::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_MultiHunk_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // repeated bytes data = 1;
    {::_pbi::TcParser::FastBR1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(MultiHunk, _impl_.data_)}},
  }}, {{
    65535, 65535
  }}, {{
    // repeated bytes data = 1;
    {PROTOBUF_FIELD_OFFSET(MultiHunk, _impl_.data_), 0, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kBytes | ::_fl::kRepSString)},
  }},
  // no aux_entries
  {{
  }},
};

::uint8_t* MultiHunk::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:xray.transport.internet.grpc.encoding.MultiHunk)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // repeated bytes data = 1;
  for (int i = 0, n = this->_internal_data_size(); i < n; ++i) {
    const auto& s = this->_internal_data().Get(i);
    target = stream->WriteBytes(1, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:xray.transport.internet.grpc.encoding.MultiHunk)
  return target;
}

::size_t MultiHunk::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:xray.transport.internet.grpc.encoding.MultiHunk)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated bytes data = 1;
  total_size += 1 * ::google::protobuf::internal::FromIntSize(_internal_data().size());
  for (int i = 0, n = _internal_data().size(); i < n; ++i) {
    total_size += ::google::protobuf::internal::WireFormatLite::BytesSize(
        _internal_data().Get(i));
  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData MultiHunk::_class_data_ = {
    MultiHunk::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* MultiHunk::GetClassData() const {
  return &_class_data_;
}

void MultiHunk::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<MultiHunk*>(&to_msg);
  auto& from = static_cast<const MultiHunk&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:xray.transport.internet.grpc.encoding.MultiHunk)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_data()->MergeFrom(from._internal_data());
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void MultiHunk::CopyFrom(const MultiHunk& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:xray.transport.internet.grpc.encoding.MultiHunk)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool MultiHunk::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* MultiHunk::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void MultiHunk::InternalSwap(MultiHunk* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.data_.InternalSwap(&other->_impl_.data_);
}

::google::protobuf::Metadata MultiHunk::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_transport_2finternet_2fgrpc_2fencoding_2fstream_2eproto_getter, &descriptor_table_transport_2finternet_2fgrpc_2fencoding_2fstream_2eproto_once,
      file_level_metadata_transport_2finternet_2fgrpc_2fencoding_2fstream_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace encoding
}  // namespace grpc
}  // namespace internet
}  // namespace transport
}  // namespace xray
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
