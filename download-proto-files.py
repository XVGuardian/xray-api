import os
import shutil
from git import Repo


CURRENT_DIRECTORY = os.getcwd()
XRAY_API_PATH = CURRENT_DIRECTORY + '/xray_api/'

if os.path.exists(XRAY_API_PATH):
    try:
        shutil.rmtree(XRAY_API_PATH)
    except OSError as e:
        print(f"Error: {e}")


def delete_non_proto_files(folder_path):
    for root, dirs, files in os.walk(folder_path, topdown=False):
        for name in files:
            if not name.endswith('.proto'):
                os.remove(os.path.join(root, name))
        for name in dirs:
            dir_path = os.path.join(root, name)
            if not os.listdir(dir_path):
                os.rmdir(dir_path)


def download_xray_api():
    xray_git = 'https://github.com/XTLS/Xray-core.git'
    Repo.clone_from(xray_git, XRAY_API_PATH)


download_xray_api()
delete_non_proto_files(XRAY_API_PATH)
