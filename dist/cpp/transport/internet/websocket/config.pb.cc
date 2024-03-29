// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: transport/internet/websocket/config.proto

#include "transport/internet/websocket/config.pb.h"

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
namespace websocket {

inline constexpr Header::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : key_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        value_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR Header::Header(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct HeaderDefaultTypeInternal {
  PROTOBUF_CONSTEXPR HeaderDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~HeaderDefaultTypeInternal() {}
  union {
    Header _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 HeaderDefaultTypeInternal _Header_default_instance_;

inline constexpr Config::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : header_{},
        path_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        accept_proxy_protocol_{false},
        ed_{0u},
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
}  // namespace websocket
}  // namespace internet
}  // namespace transport
}  // namespace xray
static ::_pb::Metadata file_level_metadata_transport_2finternet_2fwebsocket_2fconfig_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_transport_2finternet_2fwebsocket_2fconfig_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_transport_2finternet_2fwebsocket_2fconfig_2eproto = nullptr;
const ::uint32_t TableStruct_transport_2finternet_2fwebsocket_2fconfig_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::xray::transport::internet::websocket::Header, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::xray::transport::internet::websocket::Header, _impl_.key_),
    PROTOBUF_FIELD_OFFSET(::xray::transport::internet::websocket::Header, _impl_.value_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::xray::transport::internet::websocket::Config, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::xray::transport::internet::websocket::Config, _impl_.path_),
    PROTOBUF_FIELD_OFFSET(::xray::transport::internet::websocket::Config, _impl_.header_),
    PROTOBUF_FIELD_OFFSET(::xray::transport::internet::websocket::Config, _impl_.accept_proxy_protocol_),
    PROTOBUF_FIELD_OFFSET(::xray::transport::internet::websocket::Config, _impl_.ed_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::xray::transport::internet::websocket::Header)},
        {10, -1, -1, sizeof(::xray::transport::internet::websocket::Config)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::xray::transport::internet::websocket::_Header_default_instance_._instance,
    &::xray::transport::internet::websocket::_Config_default_instance_._instance,
};
const char descriptor_table_protodef_transport_2finternet_2fwebsocket_2fconfig_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n)transport/internet/websocket/config.pr"
    "oto\022!xray.transport.internet.websocket\"$"
    "\n\006Header\022\013\n\003key\030\001 \001(\t\022\r\n\005value\030\002 \001(\t\"\202\001\n"
    "\006Config\022\014\n\004path\030\002 \001(\t\0229\n\006header\030\003 \003(\0132)."
    "xray.transport.internet.websocket.Header"
    "\022\035\n\025accept_proxy_protocol\030\004 \001(\010\022\n\n\002ed\030\005 "
    "\001(\rJ\004\010\001\020\002B\205\001\n%com.xray.transport.interne"
    "t.websocketP\001Z6github.com/xtls/xray-core"
    "/transport/internet/websocket\252\002!Xray.Tra"
    "nsport.Internet.Websocketb\006proto3"
};
static ::absl::once_flag descriptor_table_transport_2finternet_2fwebsocket_2fconfig_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_transport_2finternet_2fwebsocket_2fconfig_2eproto = {
    false,
    false,
    393,
    descriptor_table_protodef_transport_2finternet_2fwebsocket_2fconfig_2eproto,
    "transport/internet/websocket/config.proto",
    &descriptor_table_transport_2finternet_2fwebsocket_2fconfig_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_transport_2finternet_2fwebsocket_2fconfig_2eproto::offsets,
    file_level_metadata_transport_2finternet_2fwebsocket_2fconfig_2eproto,
    file_level_enum_descriptors_transport_2finternet_2fwebsocket_2fconfig_2eproto,
    file_level_service_descriptors_transport_2finternet_2fwebsocket_2fconfig_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_transport_2finternet_2fwebsocket_2fconfig_2eproto_getter() {
  return &descriptor_table_transport_2finternet_2fwebsocket_2fconfig_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_transport_2finternet_2fwebsocket_2fconfig_2eproto(&descriptor_table_transport_2finternet_2fwebsocket_2fconfig_2eproto);
namespace xray {
namespace transport {
namespace internet {
namespace websocket {
// ===================================================================

class Header::_Internal {
 public:
};

Header::Header(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:xray.transport.internet.websocket.Header)
}
inline PROTOBUF_NDEBUG_INLINE Header::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : key_(arena, from.key_),
        value_(arena, from.value_),
        _cached_size_{0} {}

Header::Header(
    ::google::protobuf::Arena* arena,
    const Header& from)
    : ::google::protobuf::Message(arena) {
  Header* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);

  // @@protoc_insertion_point(copy_constructor:xray.transport.internet.websocket.Header)
}
inline PROTOBUF_NDEBUG_INLINE Header::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : key_(arena),
        value_(arena),
        _cached_size_{0} {}

inline void Header::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
Header::~Header() {
  // @@protoc_insertion_point(destructor:xray.transport.internet.websocket.Header)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void Header::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.key_.Destroy();
  _impl_.value_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void Header::Clear() {
// @@protoc_insertion_point(message_clear_start:xray.transport.internet.websocket.Header)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.key_.ClearToEmpty();
  _impl_.value_.ClearToEmpty();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* Header::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 0, 57, 2> Header::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_Header_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // string value = 2;
    {::_pbi::TcParser::FastUS1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(Header, _impl_.value_)}},
    // string key = 1;
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(Header, _impl_.key_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string key = 1;
    {PROTOBUF_FIELD_OFFSET(Header, _impl_.key_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // string value = 2;
    {PROTOBUF_FIELD_OFFSET(Header, _impl_.value_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\50\3\5\0\0\0\0\0"
    "xray.transport.internet.websocket.Header"
    "key"
    "value"
  }},
};

::uint8_t* Header::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:xray.transport.internet.websocket.Header)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // string key = 1;
  if (!this->_internal_key().empty()) {
    const std::string& _s = this->_internal_key();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "xray.transport.internet.websocket.Header.key");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // string value = 2;
  if (!this->_internal_value().empty()) {
    const std::string& _s = this->_internal_value();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "xray.transport.internet.websocket.Header.value");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:xray.transport.internet.websocket.Header)
  return target;
}

::size_t Header::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:xray.transport.internet.websocket.Header)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string key = 1;
  if (!this->_internal_key().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_key());
  }

  // string value = 2;
  if (!this->_internal_value().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_value());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData Header::_class_data_ = {
    Header::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* Header::GetClassData() const {
  return &_class_data_;
}

void Header::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<Header*>(&to_msg);
  auto& from = static_cast<const Header&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:xray.transport.internet.websocket.Header)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_key().empty()) {
    _this->_internal_set_key(from._internal_key());
  }
  if (!from._internal_value().empty()) {
    _this->_internal_set_value(from._internal_value());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Header::CopyFrom(const Header& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:xray.transport.internet.websocket.Header)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool Header::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* Header::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void Header::InternalSwap(Header* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.key_, &other->_impl_.key_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.value_, &other->_impl_.value_, arena);
}

::google::protobuf::Metadata Header::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_transport_2finternet_2fwebsocket_2fconfig_2eproto_getter, &descriptor_table_transport_2finternet_2fwebsocket_2fconfig_2eproto_once,
      file_level_metadata_transport_2finternet_2fwebsocket_2fconfig_2eproto[0]);
}
// ===================================================================

class Config::_Internal {
 public:
};

Config::Config(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:xray.transport.internet.websocket.Config)
}
inline PROTOBUF_NDEBUG_INLINE Config::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : header_{visibility, arena, from.header_},
        path_(arena, from.path_),
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
               offsetof(Impl_, accept_proxy_protocol_),
           reinterpret_cast<const char *>(&from._impl_) +
               offsetof(Impl_, accept_proxy_protocol_),
           offsetof(Impl_, ed_) -
               offsetof(Impl_, accept_proxy_protocol_) +
               sizeof(Impl_::ed_));

  // @@protoc_insertion_point(copy_constructor:xray.transport.internet.websocket.Config)
}
inline PROTOBUF_NDEBUG_INLINE Config::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : header_{visibility, arena},
        path_(arena),
        _cached_size_{0} {}

inline void Config::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, accept_proxy_protocol_),
           0,
           offsetof(Impl_, ed_) -
               offsetof(Impl_, accept_proxy_protocol_) +
               sizeof(Impl_::ed_));
}
Config::~Config() {
  // @@protoc_insertion_point(destructor:xray.transport.internet.websocket.Config)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void Config::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.path_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void Config::Clear() {
// @@protoc_insertion_point(message_clear_start:xray.transport.internet.websocket.Config)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.header_.Clear();
  _impl_.path_.ClearToEmpty();
  ::memset(&_impl_.accept_proxy_protocol_, 0, static_cast<::size_t>(
      reinterpret_cast<char*>(&_impl_.ed_) -
      reinterpret_cast<char*>(&_impl_.accept_proxy_protocol_)) + sizeof(_impl_.ed_));
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* Config::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<2, 4, 1, 53, 2> Config::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    5, 24,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967265,  // skipmap
    offsetof(decltype(_table_), field_entries),
    4,  // num_field_entries
    1,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    &_Config_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // bool accept_proxy_protocol = 4;
    {::_pbi::TcParser::SingularVarintNoZag1<bool, offsetof(Config, _impl_.accept_proxy_protocol_), 63>(),
     {32, 63, 0, PROTOBUF_FIELD_OFFSET(Config, _impl_.accept_proxy_protocol_)}},
    // uint32 ed = 5;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(Config, _impl_.ed_), 63>(),
     {40, 63, 0, PROTOBUF_FIELD_OFFSET(Config, _impl_.ed_)}},
    // string path = 2;
    {::_pbi::TcParser::FastUS1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(Config, _impl_.path_)}},
    // repeated .xray.transport.internet.websocket.Header header = 3;
    {::_pbi::TcParser::FastMtR1,
     {26, 63, 0, PROTOBUF_FIELD_OFFSET(Config, _impl_.header_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string path = 2;
    {PROTOBUF_FIELD_OFFSET(Config, _impl_.path_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // repeated .xray.transport.internet.websocket.Header header = 3;
    {PROTOBUF_FIELD_OFFSET(Config, _impl_.header_), 0, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kMessage | ::_fl::kTvTable)},
    // bool accept_proxy_protocol = 4;
    {PROTOBUF_FIELD_OFFSET(Config, _impl_.accept_proxy_protocol_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kBool)},
    // uint32 ed = 5;
    {PROTOBUF_FIELD_OFFSET(Config, _impl_.ed_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUInt32)},
  }}, {{
    {::_pbi::TcParser::GetTable<::xray::transport::internet::websocket::Header>()},
  }}, {{
    "\50\4\0\0\0\0\0\0"
    "xray.transport.internet.websocket.Config"
    "path"
  }},
};

::uint8_t* Config::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:xray.transport.internet.websocket.Config)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // string path = 2;
  if (!this->_internal_path().empty()) {
    const std::string& _s = this->_internal_path();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "xray.transport.internet.websocket.Config.path");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  // repeated .xray.transport.internet.websocket.Header header = 3;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_header_size()); i < n; i++) {
    const auto& repfield = this->_internal_header().Get(i);
    target = ::google::protobuf::internal::WireFormatLite::
        InternalWriteMessage(3, repfield, repfield.GetCachedSize(), target, stream);
  }

  // bool accept_proxy_protocol = 4;
  if (this->_internal_accept_proxy_protocol() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(
        4, this->_internal_accept_proxy_protocol(), target);
  }

  // uint32 ed = 5;
  if (this->_internal_ed() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        5, this->_internal_ed(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:xray.transport.internet.websocket.Config)
  return target;
}

::size_t Config::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:xray.transport.internet.websocket.Config)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .xray.transport.internet.websocket.Header header = 3;
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

  // bool accept_proxy_protocol = 4;
  if (this->_internal_accept_proxy_protocol() != 0) {
    total_size += 2;
  }

  // uint32 ed = 5;
  if (this->_internal_ed() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
        this->_internal_ed());
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
  // @@protoc_insertion_point(class_specific_merge_from_start:xray.transport.internet.websocket.Config)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_header()->MergeFrom(
      from._internal_header());
  if (!from._internal_path().empty()) {
    _this->_internal_set_path(from._internal_path());
  }
  if (from._internal_accept_proxy_protocol() != 0) {
    _this->_internal_set_accept_proxy_protocol(from._internal_accept_proxy_protocol());
  }
  if (from._internal_ed() != 0) {
    _this->_internal_set_ed(from._internal_ed());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Config::CopyFrom(const Config& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:xray.transport.internet.websocket.Config)
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
  _impl_.header_.InternalSwap(&other->_impl_.header_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.path_, &other->_impl_.path_, arena);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Config, _impl_.ed_)
      + sizeof(Config::_impl_.ed_)
      - PROTOBUF_FIELD_OFFSET(Config, _impl_.accept_proxy_protocol_)>(
          reinterpret_cast<char*>(&_impl_.accept_proxy_protocol_),
          reinterpret_cast<char*>(&other->_impl_.accept_proxy_protocol_));
}

::google::protobuf::Metadata Config::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_transport_2finternet_2fwebsocket_2fconfig_2eproto_getter, &descriptor_table_transport_2finternet_2fwebsocket_2fconfig_2eproto_once,
      file_level_metadata_transport_2finternet_2fwebsocket_2fconfig_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace websocket
}  // namespace internet
}  // namespace transport
}  // namespace xray
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
