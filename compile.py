import subprocess
import os
import glob


CURRENT_DIRECTORY = os.getcwd()
XRAY_API_PATH = os.path.join(CURRENT_DIRECTORY, 'xray_api')
DIST_PATH = os.path.join(CURRENT_DIRECTORY, 'dist')

PYTHON_OUTPUT_PATH = os.path.join(DIST_PATH, "python")


def find_proto_files():
    return glob.glob(os.path.join(XRAY_API_PATH, '**', '*.proto'), recursive=True)


proto_files = find_proto_files()

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
