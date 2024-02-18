import subprocess
import os


CURRENT_DIRECTORY = os.getcwd()
XRAY_API_PATH = CURRENT_DIRECTORY + '/xray_api/'
DIST_PATH = CURRENT_DIRECTORY + '/dist/'

PYTHON_OUTPUT_PATH = DIST_PATH + "python/"


def find_proto_folders():
    proto_folders = []
    for root, dirs, files in os.walk(XRAY_API_PATH):
        if any(file.endswith('.proto') for file in files):
            proto_folders.append(root)
    relative_proto_folders = []
    for folder in proto_folders:
        relative_proto_folders.append(os.path.relpath(folder, CURRENT_DIRECTORY))
    return relative_proto_folders


def convert_to_proto_path(paths):
    proto_paths = []
    for path in paths:
        proto_paths.append(f"--proto_path={path}")
    return proto_paths


def convert_to_all_proto(paths):
    all_protos = []
    for path in paths:
        all_protos.append(f"{path}/*.proto")
    return all_protos


proto_relative_folders = find_proto_folders()
for_command = convert_to_proto_path(proto_relative_folders)
for_command2 = convert_to_all_proto(proto_relative_folders)

command = ["protoc", for_command, f"--python_out={PYTHON_OUTPUT_PATH}", for_command2]

try:
    subprocess.check_output(command)
except subprocess.CalledProcessError as e:
    print(f"Error: {e}")
