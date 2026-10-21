import pandas as pd
student=pd.read_csv("vc_code_py/pandas_py/Student Id2345.csv")
def passfail():    
    inp1=str(input("Enter the sub\t:"))
    inp2=str(input("Pass or Fail\t:"))
    if(inp2=="Pass")or(inp2=="pass"):
        filter=student[student[inp1]>=40]
        print(filter.to_string())
        
    elif(inp2=="Fail")or(inp2=="fail"):
        filter2=student[student[inp1]<=40]
        print(filter2.to_string())
        
    else:
        print("Typing ERROR")
        return passfail()
passfail()