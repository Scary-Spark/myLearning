# Python reading file (.txt, .csv, .json)
file_path = "_9_3_2_outputFile.txt"
import csv
import json

try:
    with open(file_path, "r") as file:
        content = file.read()
        print(content)
except FileNotFoundError:
    print("File not found")
except PermissionError:
    print("You do not have the permission")

file_path = "_9_3_3_outputFile2.json"
try:
    with open(file_path, "r") as file:
        content = json.load(file)
        print(content)
except FileNotFoundError:
    print("File not found")
except PermissionError:
    print("You do not have the permission")

file_path = "_9_3_4_outputFile3.csv"
try:
    with open(file_path, "r", newline="") as file:
        content = csv.reader(file)
        for line in content:
            print(line)
except FileNotFoundError:
    print("File not found")
except PermissionError:
    print("You do not have the permission")
