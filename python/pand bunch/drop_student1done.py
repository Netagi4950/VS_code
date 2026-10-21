import pandas as pd
def drope1():
    student=pd.read_csv("vc_code_py/python/python/pand bunch/Student Id2345.csv")
    student=student.drop(columns=["Student ID"])

    inp_studropna=(input("Name waht you want to drop to clean(Math,Science,English,History,Computer,Total,Average,Grade)\t:"))
    try:
        inp_studropna=int(inp_studropna)
        print("You have done some-thing wrong...")
        return drope1()
    except ValueError:
        if((inp_studropna=="Math")or(inp_studropna=="Science")or(inp_studropna=="English")or(inp_studropna=="History")or(inp_studropna=="Computer")or(inp_studropna=="Total")or(inp_studropna=="Average")or(inp_studropna=="Grade")):
            student=student.drop(columns=[inp_studropna])
            print(student.to_string())
        else:
            print("You have entered wrong thing...please try again")
            return drope1()
        
drope1()        
