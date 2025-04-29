# Python writing files (.txt, .json. .csv)
# csv means comma separate values
# import os
import csv
import json

txt_data = "I Like Pizza! "
file_path = "_9_2_2_outputFile.txt"

# at the place of w: w(write), r(read), a(append),  x(write, if doesn't exist)
# by using 'with' after execute file will be automatically closed
try:
    with open(file_path, "x") as file:
        file.write(txt_data)
        print("txt file has been created")
except FileExistsError:
    print("That file is already exists")

txt_data = "As well as burger"
with open(file_path, "a") as file:
    file.write("\n" + txt_data)

employee = {
    "name ": "Spark",
    "age ": 21,
    "Job ": "owner"
}

file_path = "_9_2_3_outputFile2.json"

with open(file_path, "w") as file:
    json.dump(employee, file, indent=4)  # indent use for tab space
    print("json file has been created")

new_employees = [
    ["Name", "age", "Job"],
    ["Tamim", 45, "Cricketer"],
    ["Sakib", 34, "Juary"],
    ["Mashrafee", 24, "Captain"]
]
file_path = "_9_2_4_outputFile3.csv"
with open(file_path, "w", newline="") as file:  # here newline preventing from adding new line
    writer = csv.writer(file)
    for row in new_employees:
        writer.writerow(row)
    print("Csv file has been created")
