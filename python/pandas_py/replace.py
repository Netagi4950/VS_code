import pandas as pd
#"""
# it is not a experimental program 
# you can test it as it should be 
# read the output(the one in terminal) and step the next
# thanks"



#it is not compleated yet
student =pd.read_csv("vc_code_py/pandas_py/Student Id2345.csv")
inp=str(input("Which column is you target to replace(Student ID,Name,Math,Science,English,History,Computer,Total,Average,Grade)\t:"))
inp2=float(input("What you want to replace\t:"))
inp3=str(input("And replace to what\t:"))
student=student[inp].replace({inp2:inp3})
print(student.to_string())