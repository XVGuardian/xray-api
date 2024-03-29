// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proxy/vmess/account.proto

#include "proxy/vmess/account.pb.h"

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
namespace vmess {

inline constexpr Account::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : _cached_size_{0},
        id_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        tests_enabled_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        security_settings_{nullptr} {}

template <typename>
PROTOBUF_CONSTEXPR Account::Account(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct AccountDefaultTypeInternal {
  PROTOBUF_CONSTEXPR AccountDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~AccountDefaultTypeInternal() {}
  union {
    Account _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 AccountDefaultTypeInternal _Account_default_instance_;
}  // namespace vmess
}  // namespace proxy
}  // namespace xray
static ::_pb::Metadata file_level_metadata_proxy_2fvmess_2faccount_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_proxy_2fvmess_2faccount_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_proxy_2fvmess_2faccount_2eproto = nullptr;
const ::uint32_t TableStruct_proxy_2fvmess_2faccount_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::xray::proxy::vmess::Account, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::xray::proxy::vmess::Account, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::xray::proxy::vmess::Account, _impl_.id_),
    PROTOBUF_FIELD_OFFSET(::xray::proxy::vmess::Account, _impl_.security_settings_),
    PROTOBUF_FIELD_OFFSET(::xray::proxy::vmess::Account, _impl_.tests_enabled_),
    ~0u,
    0,
    ~0u,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, 11, -1, sizeof(::xray::proxy::vmess::Account)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::xray::proxy::vmess::_Account_default_instance_._instance,
};
const char descriptor_table_protodef_proxy_2fvmess_2faccount_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\031proxy/vmess/account.proto\022\020xray.proxy."
    "vmess\032\035common/protocol/headers.proto\"m\n\007"
    "Account\022\n\n\002id\030\001 \001(\t\022\?\n\021security_settings"
    "\030\003 \001(\0132$.xray.common.protocol.SecurityCo"
    "nfig\022\025\n\rtests_enabled\030\004 \001(\tBR\n\024com.xray."
    "proxy.vmessP\001Z%github.com/xtls/xray-core"
    "/proxy/vmess\252\002\020Xray.Proxy.Vmessb\006proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_proxy_2fvmess_2faccount_2eproto_deps[1] =
    {
        &::descriptor_table_common_2fprotocol_2fheaders_2eproto,
};
static ::absl::once_flag descriptor_table_proxy_2fvmess_2faccount_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_proxy_2fvmess_2faccount_2eproto = {
    false,
    false,
    279,
    descriptor_table_protodef_proxy_2fvmess_2faccount_2eproto,
    "proxy/vmess/account.proto",
    &descriptor_table_proxy_2fvmess_2faccount_2eproto_once,
    descriptor_table_proxy_2fvmess_2faccount_2eproto_deps,
    1,
    1,
    schemas,
    file_default_instances,
    TableStruct_proxy_2fvmess_2faccount_2eproto::offsets,
    file_level_metadata_proxy_2fvmess_2faccount_2eproto,
    file_level_enum_descriptors_proxy_2fvmess_2faccount_2eproto,
    file_level_service_descriptors_proxy_2fvmess_2faccount_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_proxy_2fvmess_2faccount_2eproto_getter() {
  return &descriptor_table_proxy_2fvmess_2faccount_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_proxy_2fvmess_2faccount_2eproto(&descriptor_table_proxy_2fvmess_2faccount_2eproto);
namespace xray {
namespace proxy {
namespace vmess {
// ===================================================================

class Account::_Internal {
 public:
  using HasBits = decltype(std::declval<Account>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(Account, _impl_._has_bits_);
  static const ::xray::common::protocol::SecurityConfig& security_settings(const Account* msg);
  static void set_has_security_settings(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::xray::common::protocol::SecurityConfig& Account::_Internal::security_settings(const Account* msg) {
  return *msg->_impl_.security_settings_;
}
void Account::clear_security_settings() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (_impl_.security_settings_ != nullptr) _impl_.security_settings_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
Account::Account(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:xray.proxy.vmess.Account)
}
inline PROTOBUF_NDEBUG_INLINE Account::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : _has_bits_{from._has_bits_},
        _cached_size_{0},
        id_(arena, from.id_),
        tests_enabled_(arena, from.tests_enabled_) {}

Account::Account(
    ::google::protobuf::Arena* arena,
    const Account& from)
    : ::google::protobuf::Message(arena) {
  Account* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);
  ::uint32_t cached_has_bits = _impl_._has_bits_[0];
  _impl_.security_settings_ = (cached_has_bits & 0x00000001u)
                ? CreateMaybeMessage<::xray::common::protocol::SecurityConfig>(arena, *from._impl_.security_settings_)
                : nullptr;

  // @@protoc_insertion_point(copy_constructor:xray.proxy.vmess.Account)
}
inline PROTOBUF_NDEBUG_INLINE Account::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0},
        id_(arena),
        tests_enabled_(arena) {}

inline void Account::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.security_settings_ = {};
}
Account::~Account() {
  // @@protoc_insertion_point(destructor:xray.proxy.vmess.Account)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void Account::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.id_.Destroy();
  _impl_.tests_enabled_.Destroy();
  delete _impl_.security_settings_;
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void Account::Clear() {
// @@protoc_insertion_point(message_clear_start:xray.proxy.vmess.Account)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.id_.ClearToEmpty();
  _impl_.tests_enabled_.ClearToEmpty();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ABSL_DCHECK(_impl_.security_settings_ != nullptr);
    _impl_.security_settings_->Clear();
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* Account::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<2, 3, 1, 48, 2> Account::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(Account, _impl_._has_bits_),
    0, // no _extensions_
    4, 24,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967282,  // skipmap
    offsetof(decltype(_table_), field_entries),
    3,  // num_field_entries
    1,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    &_Account_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // string tests_enabled = 4;
    {::_pbi::TcParser::FastUS1,
     {34, 63, 0, PROTOBUF_FIELD_OFFSET(Account, _impl_.tests_enabled_)}},
    // string id = 1;
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(Account, _impl_.id_)}},
    {::_pbi::TcParser::MiniParse, {}},
    // .xray.common.protocol.SecurityConfig security_settings = 3;
    {::_pbi::TcParser::FastMtS1,
     {26, 0, 0, PROTOBUF_FIELD_OFFSET(Account, _impl_.security_settings_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string id = 1;
    {PROTOBUF_FIELD_OFFSET(Account, _impl_.id_), -1, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // .xray.common.protocol.SecurityConfig security_settings = 3;
    {PROTOBUF_FIELD_OFFSET(Account, _impl_.security_settings_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
    // string tests_enabled = 4;
    {PROTOBUF_FIELD_OFFSET(Account, _impl_.tests_enabled_), -1, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }}, {{
    {::_pbi::TcParser::GetTable<::xray::common::protocol::SecurityConfig>()},
  }}, {{
    "\30\2\0\15\0\0\0\0"
    "xray.proxy.vmess.Account"
    "id"
    "tests_enabled"
  }},
};

::uint8_t* Account::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:xray.proxy.vmess.Account)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // string id = 1;
  if (!this->_internal_id().empty()) {
    const std::string& _s = this->_internal_id();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "xray.proxy.vmess.Account.id");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  cached_has_bits = _impl_._has_bits_[0];
  // .xray.common.protocol.SecurityConfig security_settings = 3;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
        3, _Internal::security_settings(this),
        _Internal::security_settings(this).GetCachedSize(), target, stream);
  }

  // string tests_enabled = 4;
  if (!this->_internal_tests_enabled().empty()) {
    const std::string& _s = this->_internal_tests_enabled();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "xray.proxy.vmess.Account.tests_enabled");
    target = stream->WriteStringMaybeAliased(4, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:xray.proxy.vmess.Account)
  return target;
}

::size_t Account::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:xray.proxy.vmess.Account)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string id = 1;
  if (!this->_internal_id().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_id());
  }

  // string tests_enabled = 4;
  if (!this->_internal_tests_enabled().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_tests_enabled());
  }

  // .xray.common.protocol.SecurityConfig security_settings = 3;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size +=
        1 + ::google::protobuf::internal::WireFormatLite::MessageSize(*_impl_.security_settings_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData Account::_class_data_ = {
    Account::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* Account::GetClassData() const {
  return &_class_data_;
}

void Account::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<Account*>(&to_msg);
  auto& from = static_cast<const Account&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:xray.proxy.vmess.Account)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_id().empty()) {
    _this->_internal_set_id(from._internal_id());
  }
  if (!from._internal_tests_enabled().empty()) {
    _this->_internal_set_tests_enabled(from._internal_tests_enabled());
  }
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_internal_mutable_security_settings()->::xray::common::protocol::SecurityConfig::MergeFrom(
        from._internal_security_settings());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Account::CopyFrom(const Account& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:xray.proxy.vmess.Account)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool Account::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* Account::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void Account::InternalSwap(Account* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.id_, &other->_impl_.id_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.tests_enabled_, &other->_impl_.tests_enabled_, arena);
  swap(_impl_.security_settings_, other->_impl_.security_settings_);
}

::google::protobuf::Metadata Account::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_proxy_2fvmess_2faccount_2eproto_getter, &descriptor_table_proxy_2fvmess_2faccount_2eproto_once,
      file_level_metadata_proxy_2fvmess_2faccount_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace vmess
}  // namespace proxy
}  // namespace xray
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
