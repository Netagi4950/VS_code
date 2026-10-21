import pandas as pd
#"""
# it is not a experimental program 
# you can test it as it should be 
# read the output(the one in terminal) and step the next
# thanks"



#it is not compleated yet
student =pd.read_csv("vc_code_py/python/python/pand bunch/Student Id2345.csv")
inp=str(input("Which column is you target to replace(Student ID,Name,Math,Science,English,History,Computer,Total,Average,Grade)\t:"))
inp1,inp2=map(str,input("Enter the word you want to replace and to what\t:").split())
student=student[inp].replace({inp1:inp2})
print (student.to_string())
