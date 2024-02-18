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

command = [
    "protoc",
    *[f"--proto_path={XRAY_API_PATH}"],
    f"--python_out={PYTHON_OUTPUT_PATH}",
    *proto_files
]

try:
    subprocess.check_output(command)
    print("Proto files compiled successfully.")
except subprocess.CalledProcessError as e:
    print(f"Error: {e}")
