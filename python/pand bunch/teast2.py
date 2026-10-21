import pandas as pd
student=pd.read_csv("vc_code_py/python/python/pand bunch/Student Id2345.csv")
print(student)
try:    
    print(student.iloc[10])
except ValueError:
    print("ok")







