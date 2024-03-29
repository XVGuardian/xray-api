// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common/log/log.proto

#include "common/log/log.pb.h"

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
namespace common {
namespace log {
}  // namespace log
}  // namespace common
}  // namespace xray
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_common_2flog_2flog_2eproto[1];
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_common_2flog_2flog_2eproto = nullptr;
const ::uint32_t TableStruct_common_2flog_2flog_2eproto::offsets[1] = {};
static constexpr ::_pbi::MigrationSchema* schemas = nullptr;
static constexpr ::_pb::Message* const* file_default_instances = nullptr;
const char descriptor_table_protodef_common_2flog_2flog_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\024common/log/log.proto\022\017xray.common.log*"
    "D\n\010Severity\022\013\n\007Unknown\020\000\022\t\n\005Error\020\001\022\013\n\007W"
    "arning\020\002\022\010\n\004Info\020\003\022\t\n\005Debug\020\004BO\n\023com.xra"
    "y.common.logP\001Z$github.com/xtls/xray-cor"
    "e/common/log\252\002\017Xray.Common.Logb\006proto3"
};
static ::absl::once_flag descriptor_table_common_2flog_2flog_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_common_2flog_2flog_2eproto = {
    false,
    false,
    198,
    descriptor_table_protodef_common_2flog_2flog_2eproto,
    "common/log/log.proto",
    &descriptor_table_common_2flog_2flog_2eproto_once,
    nullptr,
    0,
    0,
    schemas,
    file_default_instances,
    TableStruct_common_2flog_2flog_2eproto::offsets,
    nullptr,
    file_level_enum_descriptors_common_2flog_2flog_2eproto,
    file_level_service_descriptors_common_2flog_2flog_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_common_2flog_2flog_2eproto_getter() {
  return &descriptor_table_common_2flog_2flog_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_common_2flog_2flog_2eproto(&descriptor_table_common_2flog_2flog_2eproto);
namespace xray {
namespace common {
namespace log {
const ::google::protobuf::EnumDescriptor* Severity_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&descriptor_table_common_2flog_2flog_2eproto);
  return file_level_enum_descriptors_common_2flog_2flog_2eproto[0];
}
PROTOBUF_CONSTINIT const uint32_t Severity_internal_data_[] = {
    327680u, 0u, };
bool Severity_IsValid(int value) {
  return 0 <= value && value <= 4;
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace log
}  // namespace common
}  // namespace xray
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
