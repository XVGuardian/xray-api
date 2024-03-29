// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proxy/vless/inbound/config.proto

#include "proxy/vless/inbound/config.pb.h"

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
namespace proxy {
namespace vless {
namespace inbound {

inline constexpr Fallback::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : name_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        alpn_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        path_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        type_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        dest_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        xver_{::uint64_t{0u}},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR Fallback::Fallback(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct FallbackDefaultTypeInternal {
  PROTOBUF_CONSTEXPR FallbackDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~FallbackDefaultTypeInternal() {}
  union {
    Fallback _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 FallbackDefaultTypeInternal _Fallback_default_instance_;

inline constexpr Config::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : clients_{},
        fallbacks_{},
        decryption_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR Config::Config(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct ConfigDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ConfigDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~ConfigDefaultTypeInternal() {}
  union {
    Config _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ConfigDefaultTypeInternal _Config_default_instance_;
}  // namespace inbound
}  // namespace vless
}  // namespace proxy
}  // namespace xray
static ::_pb::Metadata file_level_metadata_proxy_2fvless_2finbound_2fconfig_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_proxy_2fvless_2finbound_2fconfig_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_proxy_2fvless_2finbound_2fconfig_2eproto = nullptr;
const ::uint32_t TableStruct_proxy_2fvless_2finbound_2fconfig_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::xray::proxy::vless::inbound::Fallback, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::xray::proxy::vless::inbound::Fallback, _impl_.name_),
    PROTOBUF_FIELD_OFFSET(::xray::proxy::vless::inbound::Fallback, _impl_.alpn_),
    PROTOBUF_FIELD_OFFSET(::xray::proxy::vless::inbound::Fallback, _impl_.path_),
    PROTOBUF_FIELD_OFFSET(::xray::proxy::vless::inbound::Fallback, _impl_.type_),
    PROTOBUF_FIELD_OFFSET(::xray::proxy::vless::inbound::Fallback, _impl_.dest_),
    PROTOBUF_FIELD_OFFSET(::xray::proxy::vless::inbound::Fallback, _impl_.xver_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::xray::proxy::vless::inbound::Config, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::xray::proxy::vless::inbound::Config, _impl_.clients_),
    PROTOBUF_FIELD_OFFSET(::xray::proxy::vless::inbound::Config, _impl_.decryption_),
    PROTOBUF_FIELD_OFFSET(::xray::proxy::vless::inbound::Config, _impl_.fallbacks_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::xray::proxy::vless::inbound::Fallback)},
        {14, -1, -1, sizeof(::xray::proxy::vless::inbound::Config)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::xray::proxy::vless::inbound::_Fallback_default_instance_._instance,
    &::xray::proxy::vless::inbound::_Config_default_instance_._instance,
};
const char descriptor_table_protodef_proxy_2fvless_2finbound_2fconfig_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n proxy/vless/inbound/config.proto\022\030xray"
    ".proxy.vless.inbound\032\032common/protocol/us"
    "er.proto\"^\n\010Fallback\022\014\n\004name\030\001 \001(\t\022\014\n\004al"
    "pn\030\002 \001(\t\022\014\n\004path\030\003 \001(\t\022\014\n\004type\030\004 \001(\t\022\014\n\004"
    "dest\030\005 \001(\t\022\014\n\004xver\030\006 \001(\004\"\200\001\n\006Config\022+\n\007c"
    "lients\030\001 \003(\0132\032.xray.common.protocol.User"
    "\022\022\n\ndecryption\030\002 \001(\t\0225\n\tfallbacks\030\003 \003(\0132"
    "\".xray.proxy.vless.inbound.FallbackBj\n\034c"
    "om.xray.proxy.vless.inboundP\001Z-github.co"
    "m/xtls/xray-core/proxy/vless/inbound\252\002\030X"
    "ray.Proxy.Vless.Inboundb\006proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_proxy_2fvless_2finbound_2fconfig_2eproto_deps[1] =
    {
        &::descriptor_table_common_2fprotocol_2fuser_2eproto,
};
static ::absl::once_flag descriptor_table_proxy_2fvless_2finbound_2fconfig_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_proxy_2fvless_2finbound_2fconfig_2eproto = {
    false,
    false,
    431,
    descriptor_table_protodef_proxy_2fvless_2finbound_2fconfig_2eproto,
    "proxy/vless/inbound/config.proto",
    &descriptor_table_proxy_2fvless_2finbound_2fconfig_2eproto_once,
    descriptor_table_proxy_2fvless_2finbound_2fconfig_2eproto_deps,
    1,
    2,
    schemas,
    file_default_instances,
    TableStruct_proxy_2fvless_2finbound_2fconfig_2eproto::offsets,
    file_level_metadata_proxy_2fvless_2finbound_2fconfig_2eproto,
    file_level_enum_descriptors_proxy_2fvless_2finbound_2fconfig_2eproto,
    file_level_service_descriptors_proxy_2fvless_2finbound_2fconfig_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_proxy_2fvless_2finbound_2fconfig_2eproto_getter() {
  return &descriptor_table_proxy_2fvless_2finbound_2fconfig_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_proxy_2fvless_2finbound_2fconfig_2eproto(&descriptor_table_proxy_2fvless_2finbound_2fconfig_2eproto);
namespace xray {
namespace proxy {
namespace vless {
namespace inbound {
// ===================================================================

class Fallback::_Internal {
 public:
};

Fallback::Fallback(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:xray.proxy.vless.inbound.Fallback)
}
inline PROTOBUF_NDEBUG_INLINE Fallback::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : name_(arena, from.name_),
        alpn_(arena, from.alpn_),
        path_(arena, from.path_),
        type_(arena, from.type_),
        dest_(arena, from.dest_),
        _cached_size_{0} {}

Fallback::Fallback(
    ::google::protobuf::Arena* arena,
    const Fallback& from)
    : ::google::protobuf::Message(arena) {
  Fallback* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);
  _impl_.xver_ = from._impl_.xver_;

  // @@protoc_insertion_point(copy_constructor:xray.proxy.vless.inbound.Fallback)
}
inline PROTOBUF_NDEBUG_INLINE Fallback::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : name_(arena),
        alpn_(arena),
        path_(arena),
        type_(arena),
        dest_(arena),
        _cached_size_{0} {}

inline void Fallback::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.xver_ = {};
}
Fallback::~Fallback() {
  // @@protoc_insertion_point(destructor:xray.proxy.vless.inbound.Fallback)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void Fallback::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.name_.Destroy();
  _impl_.alpn_.Destroy();
  _impl_.path_.Destroy();
  _impl_.type_.Destroy();
  _impl_.dest_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void Fallback::Clear() {
// @@protoc_insertion_point(message_clear_start:xray.proxy.vless.inbound.Fallback)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.name_.ClearToEmpty();
  _impl_.alpn_.ClearToEmpty();
  _impl_.path_.ClearToEmpty();
  _impl_.type_.ClearToEmpty();
  _impl_.dest_.ClearToEmpty();
  _impl_.xver_ = ::uint64_t{0u};
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* Fallback::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<3, 6, 0, 62, 2> Fallback::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    6, 56,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967232,  // skipmap
    offsetof(decltype(_table_), field_entries),
    6,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_Fallback_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // string name = 1;
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(Fallback, _impl_.name_)}},
    // string alpn = 2;
    {::_pbi::TcParser::FastUS1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(Fallback, _impl_.alpn_)}},
    // string path = 3;
    {::_pbi::TcParser::FastUS1,
     {26, 63, 0, PROTOBUF_FIELD_OFFSET(Fallback, _impl_.path_)}},
    // string type = 4;
    {::_pbi::TcParser::FastUS1,
     {34, 63, 0, PROTOBUF_FIELD_OFFSET(Fallback, _impl_.type_)}},
    // string dest = 5;
    {::_pbi::TcParser::FastUS1,
     {42, 63, 0, PROTOBUF_FIELD_OFFSET(Fallback, _impl_.dest_)}},
    // uint64 xver = 6;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint64_t, offsetof(Fallback, _impl_.xver_), 63>(),
     {48, 63, 0, PROTOBUF_FIELD_OFFSET(Fallback, _impl_.xver_)}},
    {::_pbi::TcParser::MiniParse, {}},
  }}, {{
    65535, 65535
  }}, {{
    // string name = 1;
    {PROTOBUF_FIELD_OFFSET(Fallback, _impl_.name_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // string alpn = 2;
    {PROTOBUF_FIELD_OFFSET(Fallback, _impl_.alpn_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // string path = 3;
    {PROTOBUF_FIELD_OFFSET(Fallback, _impl_.path_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // string type = 4;
    {PROTOBUF_FIELD_OFFSET(Fallback, _impl_.type_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // string dest = 5;
    {PROTOBUF_FIELD_OFFSET(Fallback, _impl_.dest_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // uint64 xver = 6;
    {PROTOBUF_FIELD_OFFSET(Fallback, _impl_.xver_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUInt64)},
  }},
  // no aux_entries
  {{
    "\41\4\4\4\4\4\0\0"
    "xray.proxy.vless.inbound.Fallback"
    "name"
    "alpn"
    "path"
    "type"
    "dest"
  }},
};

::uint8_t* Fallback::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:xray.proxy.vless.inbound.Fallback)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // string name = 1;
  if (!this->_internal_name().empty()) {
    const std::string& _s = this->_internal_name();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "xray.proxy.vless.inbound.Fallback.name");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // string alpn = 2;
  if (!this->_internal_alpn().empty()) {
    const std::string& _s = this->_internal_alpn();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "xray.proxy.vless.inbound.Fallback.alpn");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  // string path = 3;
  if (!this->_internal_path().empty()) {
    const std::string& _s = this->_internal_path();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "xray.proxy.vless.inbound.Fallback.path");
    target = stream->WriteStringMaybeAliased(3, _s, target);
  }

  // string type = 4;
  if (!this->_internal_type().empty()) {
    const std::string& _s = this->_internal_type();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "xray.proxy.vless.inbound.Fallback.type");
    target = stream->WriteStringMaybeAliased(4, _s, target);
  }

  // string dest = 5;
  if (!this->_internal_dest().empty()) {
    const std::string& _s = this->_internal_dest();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "xray.proxy.vless.inbound.Fallback.dest");
    target = stream->WriteStringMaybeAliased(5, _s, target);
  }

  // uint64 xver = 6;
  if (this->_internal_xver() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(
        6, this->_internal_xver(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:xray.proxy.vless.inbound.Fallback)
  return target;
}

::size_t Fallback::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:xray.proxy.vless.inbound.Fallback)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 1;
  if (!this->_internal_name().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_name());
  }

  // string alpn = 2;
  if (!this->_internal_alpn().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_alpn());
  }

  // string path = 3;
  if (!this->_internal_path().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_path());
  }

  // string type = 4;
  if (!this->_internal_type().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_type());
  }

  // string dest = 5;
  if (!this->_internal_dest().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_dest());
  }

  // uint64 xver = 6;
  if (this->_internal_xver() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(
        this->_internal_xver());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData Fallback::_class_data_ = {
    Fallback::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* Fallback::GetClassData() const {
  return &_class_data_;
}

void Fallback::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<Fallback*>(&to_msg);
  auto& from = static_cast<const Fallback&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:xray.proxy.vless.inbound.Fallback)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_name().empty()) {
    _this->_internal_set_name(from._internal_name());
  }
  if (!from._internal_alpn().empty()) {
    _this->_internal_set_alpn(from._internal_alpn());
  }
  if (!from._internal_path().empty()) {
    _this->_internal_set_path(from._internal_path());
  }
  if (!from._internal_type().empty()) {
    _this->_internal_set_type(from._internal_type());
  }
  if (!from._internal_dest().empty()) {
    _this->_internal_set_dest(from._internal_dest());
  }
  if (from._internal_xver() != 0) {
    _this->_internal_set_xver(from._internal_xver());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Fallback::CopyFrom(const Fallback& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:xray.proxy.vless.inbound.Fallback)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool Fallback::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* Fallback::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void Fallback::InternalSwap(Fallback* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.name_, &other->_impl_.name_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.alpn_, &other->_impl_.alpn_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.path_, &other->_impl_.path_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.type_, &other->_impl_.type_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.dest_, &other->_impl_.dest_, arena);
        swap(_impl_.xver_, other->_impl_.xver_);
}

::google::protobuf::Metadata Fallback::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_proxy_2fvless_2finbound_2fconfig_2eproto_getter, &descriptor_table_proxy_2fvless_2finbound_2fconfig_2eproto_once,
      file_level_metadata_proxy_2fvless_2finbound_2fconfig_2eproto[0]);
}
// ===================================================================

class Config::_Internal {
 public:
};

void Config::clear_clients() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.clients_.Clear();
}
Config::Config(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:xray.proxy.vless.inbound.Config)
}
inline PROTOBUF_NDEBUG_INLINE Config::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : clients_{visibility, arena, from.clients_},
        fallbacks_{visibility, arena, from.fallbacks_},
        decryption_(arena, from.decryption_),
        _cached_size_{0} {}

Config::Config(
    ::google::protobuf::Arena* arena,
    const Config& from)
    : ::google::protobuf::Message(arena) {
  Config* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);

  // @@protoc_insertion_point(copy_constructor:xray.proxy.vless.inbound.Config)
}
inline PROTOBUF_NDEBUG_INLINE Config::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : clients_{visibility, arena},
        fallbacks_{visibility, arena},
        decryption_(arena),
        _cached_size_{0} {}

inline void Config::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
Config::~Config() {
  // @@protoc_insertion_point(destructor:xray.proxy.vless.inbound.Config)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void Config::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.decryption_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void Config::Clear() {
// @@protoc_insertion_point(message_clear_start:xray.proxy.vless.inbound.Config)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.clients_.Clear();
  _impl_.fallbacks_.Clear();
  _impl_.decryption_.ClearToEmpty();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* Config::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<2, 3, 2, 50, 2> Config::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    3, 24,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967288,  // skipmap
    offsetof(decltype(_table_), field_entries),
    3,  // num_field_entries
    2,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    &_Config_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // repeated .xray.common.protocol.User clients = 1;
    {::_pbi::TcParser::FastMtR1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(Config, _impl_.clients_)}},
    // string decryption = 2;
    {::_pbi::TcParser::FastUS1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(Config, _impl_.decryption_)}},
    // repeated .xray.proxy.vless.inbound.Fallback fallbacks = 3;
    {::_pbi::TcParser::FastMtR1,
     {26, 63, 1, PROTOBUF_FIELD_OFFSET(Config, _impl_.fallbacks_)}},
  }}, {{
    65535, 65535
  }}, {{
    // repeated .xray.common.protocol.User clients = 1;
    {PROTOBUF_FIELD_OFFSET(Config, _impl_.clients_), 0, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kMessage | ::_fl::kTvTable)},
    // string decryption = 2;
    {PROTOBUF_FIELD_OFFSET(Config, _impl_.decryption_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // repeated .xray.proxy.vless.inbound.Fallback fallbacks = 3;
    {PROTOBUF_FIELD_OFFSET(Config, _impl_.fallbacks_), 0, 1,
    (0 | ::_fl::kFcRepeated | ::_fl::kMessage | ::_fl::kTvTable)},
  }}, {{
    {::_pbi::TcParser::GetTable<::xray::common::protocol::User>()},
    {::_pbi::TcParser::GetTable<::xray::proxy::vless::inbound::Fallback>()},
  }}, {{
    "\37\0\12\0\0\0\0\0"
    "xray.proxy.vless.inbound.Config"
    "decryption"
  }},
};

::uint8_t* Config::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:xray.proxy.vless.inbound.Config)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // repeated .xray.common.protocol.User clients = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_clients_size()); i < n; i++) {
    const auto& repfield = this->_internal_clients().Get(i);
    target = ::google::protobuf::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  // string decryption = 2;
  if (!this->_internal_decryption().empty()) {
    const std::string& _s = this->_internal_decryption();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "xray.proxy.vless.inbound.Config.decryption");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  // repeated .xray.proxy.vless.inbound.Fallback fallbacks = 3;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_fallbacks_size()); i < n; i++) {
    const auto& repfield = this->_internal_fallbacks().Get(i);
    target = ::google::protobuf::internal::WireFormatLite::
        InternalWriteMessage(3, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:xray.proxy.vless.inbound.Config)
  return target;
}

::size_t Config::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:xray.proxy.vless.inbound.Config)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .xray.common.protocol.User clients = 1;
  total_size += 1UL * this->_internal_clients_size();
  for (const auto& msg : this->_internal_clients()) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSize(msg);
  }
  // repeated .xray.proxy.vless.inbound.Fallback fallbacks = 3;
  total_size += 1UL * this->_internal_fallbacks_size();
  for (const auto& msg : this->_internal_fallbacks()) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSize(msg);
  }
  // string decryption = 2;
  if (!this->_internal_decryption().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_decryption());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData Config::_class_data_ = {
    Config::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* Config::GetClassData() const {
  return &_class_data_;
}

void Config::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<Config*>(&to_msg);
  auto& from = static_cast<const Config&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:xray.proxy.vless.inbound.Config)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_clients()->MergeFrom(
      from._internal_clients());
  _this->_internal_mutable_fallbacks()->MergeFrom(
      from._internal_fallbacks());
  if (!from._internal_decryption().empty()) {
    _this->_internal_set_decryption(from._internal_decryption());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Config::CopyFrom(const Config& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:xray.proxy.vless.inbound.Config)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool Config::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* Config::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void Config::InternalSwap(Config* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.clients_.InternalSwap(&other->_impl_.clients_);
  _impl_.fallbacks_.InternalSwap(&other->_impl_.fallbacks_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.decryption_, &other->_impl_.decryption_, arena);
}

::google::protobuf::Metadata Config::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_proxy_2fvless_2finbound_2fconfig_2eproto_getter, &descriptor_table_proxy_2fvless_2finbound_2fconfig_2eproto_once,
      file_level_metadata_proxy_2fvless_2finbound_2fconfig_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace inbound
}  // namespace vless
}  // namespace proxy
}  // namespace xray
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
