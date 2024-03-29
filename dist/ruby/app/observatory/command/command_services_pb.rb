# Generated by the protocol buffer compiler.  DO NOT EDIT!
# Source: app/observatory/command/command.proto for package 'xray.core.app.observatory.command'

require 'grpc'
require 'app/observatory/command/command_pb'

module Xray
  module Core
    module App
      module Observatory
        module Command
          module ObservatoryService
            class Service

              include ::GRPC::GenericService

              self.marshal_class_method = :encode
              self.unmarshal_class_method = :decode
              self.service_name = 'xray.core.app.observatory.command.ObservatoryService'

              rpc :GetOutboundStatus, ::Xray::Core::App::Observatory::Command::GetOutboundStatusRequest, ::Xray::Core::App::Observatory::Command::GetOutboundStatusResponse
            end

            Stub = Service.rpc_stub_class
          end
        end
      end
    end
  end
end
