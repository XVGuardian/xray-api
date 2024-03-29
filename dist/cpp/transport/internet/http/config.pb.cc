// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: transport/internet/http/config.proto

#include "transport/internet/http/config.pb.h"

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
namespace http {

inline constexpr Config::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : host_{},
        header_{},
        path_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        method_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        idle_timeout_{0},
        health_check_timeout_{0},
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
}  // namespace http
}  // namespace internet
}  // namespace transport
}  // namespace xray
static ::_pb::Metadata file_level_metadata_transport_2finternet_2fhttp_2fconfig_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_transport_2finternet_2fhttp_2fconfig_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_transport_2finternet_2fhttp_2fconfig_2eproto = nullptr;
const ::uint32_t TableStruct_transport_2finternet_2fhttp_2fconfig_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::xray::transport::internet::http::Config, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::xray::transport::internet::http::Config, _impl_.host_),
    PROTOBUF_FIELD_OFFSET(::xray::transport::internet::http::Config, _impl_.path_),
    PROTOBUF_FIELD_OFFSET(::xray::transport::internet::http::Config, _impl_.idle_timeout_),
    PROTOBUF_FIELD_OFFSET(::xray::transport::internet::http::Config, _impl_.health_check_timeout_),
    PROTOBUF_FIELD_OFFSET(::xray::transport::internet::http::Config, _impl_.method_),
    PROTOBUF_FIELD_OFFSET(::xray::transport::internet::http::Config, _impl_.header_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::xray::transport::internet::http::Config)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::xray::transport::internet::http::_Config_default_instance_._instance,
};
const char descriptor_table_protodef_transport_2finternet_2fhttp_2fconfig_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n$transport/internet/http/config.proto\022\034"
    "xray.transport.internet.http\032,transport/"
    "internet/headers/http/config.proto\"\246\001\n\006C"
    "onfig\022\014\n\004host\030\001 \003(\t\022\014\n\004path\030\002 \001(\t\022\024\n\014idl"
    "e_timeout\030\003 \001(\005\022\034\n\024health_check_timeout\030"
    "\004 \001(\005\022\016\n\006method\030\005 \001(\t\022<\n\006header\030\006 \003(\0132,."
    "xray.transport.internet.headers.http.Hea"
    "derBv\n com.xray.transport.internet.httpP"
    "\001Z1github.com/xtls/xray-core/transport/i"
    "nternet/http\252\002\034Xray.Transport.Internet.H"
    "ttpb\006proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_transport_2finternet_2fhttp_2fconfig_2eproto_deps[1] =
    {
        &::descriptor_table_transport_2finternet_2fheaders_2fhttp_2fconfig_2eproto,
};
static ::absl::once_flag descriptor_table_transport_2finternet_2fhttp_2fconfig_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_transport_2finternet_2fhttp_2fconfig_2eproto = {
    false,
    false,
    411,
    descriptor_table_protodef_transport_2finternet_2fhttp_2fconfig_2eproto,
    "transport/internet/http/config.proto",
    &descriptor_table_transport_2finternet_2fhttp_2fconfig_2eproto_once,
    descriptor_table_transport_2finternet_2fhttp_2fconfig_2eproto_deps,
    1,
    1,
    schemas,
    file_default_instances,
    TableStruct_transport_2finternet_2fhttp_2fconfig_2eproto::offsets,
    file_level_metadata_transport_2finternet_2fhttp_2fconfig_2eproto,
    file_level_enum_descriptors_transport_2finternet_2fhttp_2fconfig_2eproto,
    file_level_service_descriptors_transport_2finternet_2fhttp_2fconfig_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_transport_2finternet_2fhttp_2fconfig_2eproto_getter() {
  return &descriptor_table_transport_2finternet_2fhttp_2fconfig_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_transport_2finternet_2fhttp_2fconfig_2eproto(&descriptor_table_transport_2finternet_2fhttp_2fconfig_2eproto);
namespace xray {
namespace transport {
namespace internet {
namespace http {
// ===================================================================

class Config::_Internal {
 public:
};

void Config::clear_header() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.header_.Clear();
}
Config::Config(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:xray.transport.internet.http.Config)
}
inline PROTOBUF_NDEBUG_INLINE Config::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : host_{visibility, arena, from.host_},
        header_{visibility, arena, from.header_},
        path_(arena, from.path_),
        method_(arena, from.method_),
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
  ::memcpy(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, idle_timeout_),
           reinterpret_cast<const char *>(&from._impl_) +
               offsetof(Impl_, idle_timeout_),
           offsetof(Impl_, health_check_timeout_) -
               offsetof(Impl_, idle_timeout_) +
               sizeof(Impl_::health_check_timeout_));

  // @@protoc_insertion_point(copy_constructor:xray.transport.internet.http.Config)
}
inline PROTOBUF_NDEBUG_INLINE Config::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : host_{visibility, arena},
        header_{visibility, arena},
        path_(arena),
        method_(arena),
        _cached_size_{0} {}

inline void Config::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, idle_timeout_),
           0,
           offsetof(Impl_, health_check_timeout_) -
               offsetof(Impl_, idle_timeout_) +
               sizeof(Impl_::health_check_timeout_));
}
Config::~Config() {
  // @@protoc_insertion_point(destructor:xray.transport.internet.http.Config)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void Config::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.path_.Destroy();
  _impl_.method_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void Config::Clear() {
// @@protoc_insertion_point(message_clear_start:xray.transport.internet.http.Config)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.host_.Clear();
  _impl_.header_.Clear();
  _impl_.path_.ClearToEmpty();
  _impl_.method_.ClearToEmpty();
  ::memset(&_impl_.idle_timeout_, 0, static_cast<::size_t>(
      reinterpret_cast<char*>(&_impl_.health_check_timeout_) -
      reinterpret_cast<char*>(&_impl_.idle_timeout_)) + sizeof(_impl_.health_check_timeout_));
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* Config::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<3, 6, 1, 58, 2> Config::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    6, 56,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967232,  // skipmap
    offsetof(decltype(_table_), field_entries),
    6,  // num_field_entries
    1,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    &_Config_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // repeated string host = 1;
    {::_pbi::TcParser::FastUR1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(Config, _impl_.host_)}},
    // string path = 2;
    {::_pbi::TcParser::FastUS1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(Config, _impl_.path_)}},
    // int32 idle_timeout = 3;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(Config, _impl_.idle_timeout_), 63>(),
     {24, 63, 0, PROTOBUF_FIELD_OFFSET(Config, _impl_.idle_timeout_)}},
    // int32 health_check_timeout = 4;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(Config, _impl_.health_check_timeout_), 63>(),
     {32, 63, 0, PROTOBUF_FIELD_OFFSET(Config, _impl_.health_check_timeout_)}},
    // string method = 5;
    {::_pbi::TcParser::FastUS1,
     {42, 63, 0, PROTOBUF_FIELD_OFFSET(Config, _impl_.method_)}},
    // repeated .xray.transport.internet.headers.http.Header header = 6;
    {::_pbi::TcParser::FastMtR1,
     {50, 63, 0, PROTOBUF_FIELD_OFFSET(Config, _impl_.header_)}},
    {::_pbi::TcParser::MiniParse, {}},
  }}, {{
    65535, 65535
  }}, {{
    // repeated string host = 1;
    {PROTOBUF_FIELD_OFFSET(Config, _impl_.host_), 0, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kUtf8String | ::_fl::kRepSString)},
    // string path = 2;
    {PROTOBUF_FIELD_OFFSET(Config, _impl_.path_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // int32 idle_timeout = 3;
    {PROTOBUF_FIELD_OFFSET(Config, _impl_.idle_timeout_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
    // int32 health_check_timeout = 4;
    {PROTOBUF_FIELD_OFFSET(Config, _impl_.health_check_timeout_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
    // string method = 5;
    {PROTOBUF_FIELD_OFFSET(Config, _impl_.method_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // repeated .xray.transport.internet.headers.http.Header header = 6;
    {PROTOBUF_FIELD_OFFSET(Config, _impl_.header_), 0, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kMessage | ::_fl::kTvTable)},
  }}, {{
    {::_pbi::TcParser::GetTable<::xray::transport::internet::headers::http::Header>()},
  }}, {{
    "\43\4\4\0\0\6\0\0"
    "xray.transport.internet.http.Config"
    "host"
    "path"
    "method"
  }},
};

::uint8_t* Config::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:xray.transport.internet.http.Config)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // repeated string host = 1;
  for (int i = 0, n = this->_internal_host_size(); i < n; ++i) {
    const auto& s = this->_internal_host().Get(i);
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        s.data(), static_cast<int>(s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "xray.transport.internet.http.Config.host");
    target = stream->WriteString(1, s, target);
  }

  // string path = 2;
  if (!this->_internal_path().empty()) {
    const std::string& _s = this->_internal_path();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "xray.transport.internet.http.Config.path");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  // int32 idle_timeout = 3;
  if (this->_internal_idle_timeout() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<3>(
            stream, this->_internal_idle_timeout(), target);
  }

  // int32 health_check_timeout = 4;
  if (this->_internal_health_check_timeout() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<4>(
            stream, this->_internal_health_check_timeout(), target);
  }

  // string method = 5;
  if (!this->_internal_method().empty()) {
    const std::string& _s = this->_internal_method();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "xray.transport.internet.http.Config.method");
    target = stream->WriteStringMaybeAliased(5, _s, target);
  }

  // repeated .xray.transport.internet.headers.http.Header header = 6;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_header_size()); i < n; i++) {
    const auto& repfield = this->_internal_header().Get(i);
    target = ::google::protobuf::internal::WireFormatLite::
        InternalWriteMessage(6, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:xray.transport.internet.http.Config)
  return target;
}

::size_t Config::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:xray.transport.internet.http.Config)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string host = 1;
  total_size += 1 * ::google::protobuf::internal::FromIntSize(_internal_host().size());
  for (int i = 0, n = _internal_host().size(); i < n; ++i) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
        _internal_host().Get(i));
  }
  // repeated .xray.transport.internet.headers.http.Header header = 6;
  total_size += 1UL * this->_internal_header_size();
  for (const auto& msg : this->_internal_header()) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSize(msg);
  }
  // string path = 2;
  if (!this->_internal_path().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_path());
  }

  // string method = 5;
  if (!this->_internal_method().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_method());
  }

  // int32 idle_timeout = 3;
  if (this->_internal_idle_timeout() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_idle_timeout());
  }

  // int32 health_check_timeout = 4;
  if (this->_internal_health_check_timeout() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_health_check_timeout());
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
  // @@protoc_insertion_point(class_specific_merge_from_start:xray.transport.internet.http.Config)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_host()->MergeFrom(from._internal_host());
  _this->_internal_mutable_header()->MergeFrom(
      from._internal_header());
  if (!from._internal_path().empty()) {
    _this->_internal_set_path(from._internal_path());
  }
  if (!from._internal_method().empty()) {
    _this->_internal_set_method(from._internal_method());
  }
  if (from._internal_idle_timeout() != 0) {
    _this->_internal_set_idle_timeout(from._internal_idle_timeout());
  }
  if (from._internal_health_check_timeout() != 0) {
    _this->_internal_set_health_check_timeout(from._internal_health_check_timeout());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Config::CopyFrom(const Config& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:xray.transport.internet.http.Config)
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
  _impl_.host_.InternalSwap(&other->_impl_.host_);
  _impl_.header_.InternalSwap(&other->_impl_.header_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.path_, &other->_impl_.path_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.method_, &other->_impl_.method_, arena);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Config, _impl_.health_check_timeout_)
      + sizeof(Config::_impl_.health_check_timeout_)
      - PROTOBUF_FIELD_OFFSET(Config, _impl_.idle_timeout_)>(
          reinterpret_cast<char*>(&_impl_.idle_timeout_),
          reinterpret_cast<char*>(&other->_impl_.idle_timeout_));
}

::google::protobuf::Metadata Config::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_transport_2finternet_2fhttp_2fconfig_2eproto_getter, &descriptor_table_transport_2finternet_2fhttp_2fconfig_2eproto_once,
      file_level_metadata_transport_2finternet_2fhttp_2fconfig_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace http
}  // namespace internet
}  // namespace transport
}  // namespace xray
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
