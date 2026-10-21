import pandas as pd
#import test
student=pd.read_csv("vc_code_py/python/python/pand bunch/Student Id2345.csv")
#student["Science"]=student["Science"].replace({64:"Fail"})
#print(student.to_string())

#inp_student=str(input("Name Whome you want infront of you\t:"))
#print(student.loc[inp_student])

def find():
    inp1=str(input("Name whose math you want\t:"))
    if(inp1=="Student ID")or(inp1=="Name")or(inp1=="Math")or(inp1=="Science")or(inp1=="English")or(inp1=="History")or(inp1=="Computer")or(inp1=="Total")or(inp1=="Average")or(inp1=="Grade"):
        
        inp2=str(input("Enter what you want--Mean,sum,count,max,min\t:"))
        if(inp2=="Mean")or(inp2=="mean"):
            if (inp1=="Student ID")or(inp1=="Name")or(inp1=="Average"):
                print("Student ID,Name,Average are not aplicabale for it...")
                return find()
            elif (inp1=="Math")or(inp1=="Science")or(inp1=="English")or(inp1=="Computer")or(inp1=="Total")or(inp1=="History")or(inp1=="Grade"):
                print(student[inp1].mean())
            else:
                print("May you have done something wrong...")
                return find()
        elif(inp2=="Sum")or(inp2=="sum"):
            if (inp1=="Student ID")or(inp1=="Name"):
                print("May you have done something wrong...")
                return find()
            elif (inp1=="Math")or(inp1=="Science")or(inp1=="Average")or(inp1=="English")or(inp1=="Computer")or(inp1=="Total")or(inp1=="History")or(inp1=="Grade"):
                print(student[inp1].sum())
            else:
                print("May you have done something wrong...")
                return find()
        elif(inp2=="Count")or(inp2=="count"):
            print(student[inp1].count())
        elif(inp2=="Max")or(inp2=="max"):
            if (inp1=="Student ID")or(inp1=="Name"):
                print("May you have done something wrong...")
                return find()
            elif (inp1=="Math")or(inp1=="Science")or(inp1=="Average")or(inp1=="English")or(inp1=="Computer")or(inp1=="Total")or(inp1=="History")or(inp1=="Grade"):
                print(student[inp1].max())
            else:
                print("May you have done something wrong...")
                return find()
        elif(inp2=="Min")or(inp2=="min"):
            if (inp1=="Student ID")or(inp1=="Name"):
                print("May you have done something wrong...")
                return find()
            elif (inp1=="Math")or(inp1=="Science")or(inp1=="Average")or(inp1=="English")or(inp1=="Computer")or(inp1=="Total")or(inp1=="History")or(inp1=="Grade"):
                print(student[inp1].min())
            else:
                print("May you have done something wrong...")
                return find()
        else:
            print("May you have done something wrong...")
            return find()   
    else:
        print("May you have done something wrong...")
        return find()        
        
find()



