# frozen_string_literal: true
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: app/observatory/config.proto

require 'google/protobuf'


descriptor_data = "\n\x1c\x61pp/observatory/config.proto\x12\x19xray.core.app.observatory\"N\n\x11ObservationResult\x12\x39\n\x06status\x18\x01 \x03(\x0b\x32).xray.core.app.observatory.OutboundStatus\"v\n\x1bHealthPingMeasurementResult\x12\x0b\n\x03\x61ll\x18\x01 \x01(\x03\x12\x0c\n\x04\x66\x61il\x18\x02 \x01(\x03\x12\x11\n\tdeviation\x18\x03 \x01(\x03\x12\x0f\n\x07\x61verage\x18\x04 \x01(\x03\x12\x0b\n\x03max\x18\x05 \x01(\x03\x12\x0b\n\x03min\x18\x06 \x01(\x03\"\xdb\x01\n\x0eOutboundStatus\x12\r\n\x05\x61live\x18\x01 \x01(\x08\x12\r\n\x05\x64\x65lay\x18\x02 \x01(\x03\x12\x19\n\x11last_error_reason\x18\x03 \x01(\t\x12\x14\n\x0coutbound_tag\x18\x04 \x01(\t\x12\x16\n\x0elast_seen_time\x18\x05 \x01(\x03\x12\x15\n\rlast_try_time\x18\x06 \x01(\x03\x12K\n\x0bhealth_ping\x18\x07 \x01(\x0b\x32\x36.xray.core.app.observatory.HealthPingMeasurementResult\"F\n\x0bProbeResult\x12\r\n\x05\x61live\x18\x01 \x01(\x08\x12\r\n\x05\x64\x65lay\x18\x02 \x01(\x03\x12\x19\n\x11last_error_reason\x18\x03 \x01(\t\"#\n\tIntensity\x12\x16\n\x0eprobe_interval\x18\x01 \x01(\r\"i\n\x06\x43onfig\x12\x18\n\x10subject_selector\x18\x02 \x03(\t\x12\x11\n\tprobe_url\x18\x03 \x01(\t\x12\x16\n\x0eprobe_interval\x18\x04 \x01(\x03\x12\x1a\n\x12\x65nable_concurrency\x18\x05 \x01(\x08\x42^\n\x18\x63om.xray.app.observatoryP\x01Z)github.com/xtls/xray-core/app/observatory\xaa\x02\x14Xray.App.Observatoryb\x06proto3"

pool = Google::Protobuf::DescriptorPool.generated_pool

begin
  pool.add_serialized_file(descriptor_data)
rescue TypeError
  # Compatibility code: will be removed in the next major version.
  require 'google/protobuf/descriptor_pb'
  parsed = Google::Protobuf::FileDescriptorProto.decode(descriptor_data)
  parsed.clear_dependency
  serialized = parsed.class.encode(parsed)
  file = pool.add_serialized_file(serialized)
  warn "Warning: Protobuf detected an import path issue while loading generated file #{__FILE__}"
  imports = [
  ]
  imports.each do |type_name, expected_filename|
    import_file = pool.lookup(type_name).file_descriptor
    if import_file.name != expected_filename
      warn "- #{file.name} imports #{expected_filename}, but that import was loaded as #{import_file.name}"
    end
  end
  warn "Each proto file must use a consistent fully-qualified name."
  warn "This will become an error in the next major version."
end

module Xray
  module Core
    module App
      module Observatory
        ObservationResult = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("xray.core.app.observatory.ObservationResult").msgclass
        HealthPingMeasurementResult = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("xray.core.app.observatory.HealthPingMeasurementResult").msgclass
        OutboundStatus = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("xray.core.app.observatory.OutboundStatus").msgclass
        ProbeResult = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("xray.core.app.observatory.ProbeResult").msgclass
        Intensity = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("xray.core.app.observatory.Intensity").msgclass
        Config = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("xray.core.app.observatory.Config").msgclass
      end
    end
  end
end
