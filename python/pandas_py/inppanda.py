import pandas as pd
file=pd.read_csv("vc_code_py/pandas_py/Student Id2345.csv")
print(file.head())
inp8=str(input("Enter the name of the student\t:"))
print(file[inp8])
def search():
    inp=input("Ask your need(Student ID,Name,Math,Science,English,History,Computer,Total,Average,Grade)\t:")
    try:
        print(file[inp])
    except KeyError:
        print(inp,"not found in the data ")
        return search()
search()