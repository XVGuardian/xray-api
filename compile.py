import os
import glob
import sys

CURRENT_DIRECTORY = os.getcwd()
XRAY_API_PATH = os.path.join(CURRENT_DIRECTORY, 'xray_api')
DIST_PATH = os.path.join(CURRENT_DIRECTORY, 'dist')

PYTHON_OUTPUT_PATH = os.path.join(DIST_PATH, "python")
CPP_OUTPUT_PATH = os.path.join(DIST_PATH, "cpp")
CSHARP_OUTPUT_PATH = os.path.join(DIST_PATH, "csharp")


def find_proto_files():
    return glob.glob(os.path.join(XRAY_API_PATH, '**', '*.proto'), recursive=True)


proto_files = find_proto_files()

if not len(sys.argv) > 2:
    print("arguments are not enough")

match sys.argv[1]:
    case "python":
        command = (
            f"python -m grpc_tools.protoc "
            f"--proto_path={XRAY_API_PATH} "
            f"--python_out={PYTHON_OUTPUT_PATH} "
            f"--grpc_python_out={PYTHON_OUTPUT_PATH} "
            f"{' '.join(proto_files)}"
        )
    case "cpp":
        command = (
            f"protoc "
            f"--proto_path={XRAY_API_PATH} "
            f"--cpp_out={CPP_OUTPUT_PATH} "
            f"--grpc_out={CPP_OUTPUT_PATH} "
            "--plugin=protoc-gen-grpc=$(which grpc_cpp_plugin) "
            f"{' '.join(proto_files)}"
        )
    case "c#":
        command = (
            f"protoc "
            f"--proto_path={XRAY_API_PATH} "
            f"--csharp_out={CSHARP_OUTPUT_PATH} "
            f"--grpc_out={CSHARP_OUTPUT_PATH} "
            "--plugin=protoc-gen-grpc=$(which grpc_csharp_plugin) "
            f"{' '.join(proto_files)}"
        )
    case _:
        print("warning: not valid input! we will compile for python")
        command = (
            f"python -m grpc_tools.protoc "
            f"--proto_path={XRAY_API_PATH} "
            f"--python_out={PYTHON_OUTPUT_PATH} "
            f"--grpc_python_out={PYTHON_OUTPUT_PATH} "
            f"{' '.join(proto_files)}"
        )

exit_code = os.system(command)

if exit_code == 0:
    print("Proto files compiled successfully.")
else:
    print("Error: Proto files compilation failed.")
