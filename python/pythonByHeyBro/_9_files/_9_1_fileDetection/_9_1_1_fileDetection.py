# Python file detection
# File path:
#       1. Relative File Path (folder/test.txt)
#       2. Absolute File Path (C:User/Documents/...)
import os

file_path = "_9_1_0_stuffFolder/_9_1_2_testFile.txt"
if os.path.exists(file_path):
    print(f"The location '{file_path}' exist ")
    if os.path.isfile(file_path):
        print("This is a file")
    elif os.path.isdir(file_path):
        print("This is a directory")
else:
    print("Location doesn't exist")
