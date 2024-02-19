# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: app/router/command/command.proto
# Protobuf Python Version: 4.25.0
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
from google.protobuf.internal import builder as _builder
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from common.net import network_pb2 as common_dot_net_dot_network__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n app/router/command/command.proto\x12\x17xray.app.router.command\x1a\x18\x63ommon/net/network.proto\"\x83\x03\n\x0eRoutingContext\x12\x12\n\nInboundTag\x18\x01 \x01(\t\x12)\n\x07Network\x18\x02 \x01(\x0e\x32\x18.xray.common.net.Network\x12\x11\n\tSourceIPs\x18\x03 \x03(\x0c\x12\x11\n\tTargetIPs\x18\x04 \x03(\x0c\x12\x12\n\nSourcePort\x18\x05 \x01(\r\x12\x12\n\nTargetPort\x18\x06 \x01(\r\x12\x14\n\x0cTargetDomain\x18\x07 \x01(\t\x12\x10\n\x08Protocol\x18\x08 \x01(\t\x12\x0c\n\x04User\x18\t \x01(\t\x12K\n\nAttributes\x18\n \x03(\x0b\x32\x37.xray.app.router.command.RoutingContext.AttributesEntry\x12\x19\n\x11OutboundGroupTags\x18\x0b \x03(\t\x12\x13\n\x0bOutboundTag\x18\x0c \x01(\t\x1a\x31\n\x0f\x41ttributesEntry\x12\x0b\n\x03key\x18\x01 \x01(\t\x12\r\n\x05value\x18\x02 \x01(\t:\x02\x38\x01\"6\n\x1cSubscribeRoutingStatsRequest\x12\x16\n\x0e\x46ieldSelectors\x18\x01 \x03(\t\"\x82\x01\n\x10TestRouteRequest\x12?\n\x0eRoutingContext\x18\x01 \x01(\x0b\x32\'.xray.app.router.command.RoutingContext\x12\x16\n\x0e\x46ieldSelectors\x18\x02 \x03(\t\x12\x15\n\rPublishResult\x18\x03 \x01(\x08\"\x08\n\x06\x43onfig2\xf0\x01\n\x0eRoutingService\x12{\n\x15SubscribeRoutingStats\x12\x35.xray.app.router.command.SubscribeRoutingStatsRequest\x1a\'.xray.app.router.command.RoutingContext\"\x00\x30\x01\x12\x61\n\tTestRoute\x12).xray.app.router.command.TestRouteRequest\x1a\'.xray.app.router.command.RoutingContext\"\x00\x42g\n\x1b\x63om.xray.app.router.commandP\x01Z,github.com/xtls/xray-core/app/router/command\xaa\x02\x17Xray.App.Router.Commandb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'app.router.command.command_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:
  _globals['DESCRIPTOR']._options = None
  _globals['DESCRIPTOR']._serialized_options = b'\n\033com.xray.app.router.commandP\001Z,github.com/xtls/xray-core/app/router/command\252\002\027Xray.App.Router.Command'
  _globals['_ROUTINGCONTEXT_ATTRIBUTESENTRY']._options = None
  _globals['_ROUTINGCONTEXT_ATTRIBUTESENTRY']._serialized_options = b'8\001'
  _globals['_ROUTINGCONTEXT']._serialized_start=88
  _globals['_ROUTINGCONTEXT']._serialized_end=475
  _globals['_ROUTINGCONTEXT_ATTRIBUTESENTRY']._serialized_start=426
  _globals['_ROUTINGCONTEXT_ATTRIBUTESENTRY']._serialized_end=475
  _globals['_SUBSCRIBEROUTINGSTATSREQUEST']._serialized_start=477
  _globals['_SUBSCRIBEROUTINGSTATSREQUEST']._serialized_end=531
  _globals['_TESTROUTEREQUEST']._serialized_start=534
  _globals['_TESTROUTEREQUEST']._serialized_end=664
  _globals['_CONFIG']._serialized_start=666
  _globals['_CONFIG']._serialized_end=674
  _globals['_ROUTINGSERVICE']._serialized_start=677
  _globals['_ROUTINGSERVICE']._serialized_end=917
# @@protoc_insertion_point(module_scope)
