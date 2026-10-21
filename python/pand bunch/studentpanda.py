import pandas as pd

def student():
#import find_student1done
    student=pd.read_csv("vc_code_py/python/python/pand bunch/Student Id2345.csv")
    student=student.drop(columns=["Student ID"])
    student=student.fillna("Not")
    print (student.to_string())
    student.to_csv("vc_code_py/python/python/pand bunch/Student Id2345.csv", index=False)
student()


#section no 1 pass&fail
"""
inp_pf=input("Do you wnat to see the pass&fail\t:")
if (inp_pf[0]=="y")and (inp_pf[2=="s"]):
    import passfailpanda1done
    print(passfailpanda1 )
elif(inp_pf=="no"):
    print("ok")
else:
    print("Error")
""" 
    
#section no2 drope funtion
 
""" 
inp_drope=input("Do you want to drop some column\t:")

try:
    inp_drope=int(inp_drope)
    print("You have done some-thing wrong...")
except ValueError:
    print("ok")
    if (inp_drope[0]=="y")and (inp_drope[2=="s"]):
        import drop_student1done
        print(drop_student1 )
    elif(inp_drope=="no"):
        print("ok")
    else:
        print("Error")   
 
"""
 

#section no3 to find out a special groub of student 

"""
inp_findout=input("do you want to separate some special student form a bunch of student\n:")
if(inp_findout[0]=="y")and (inp_findout[2=="s"]):
        import filter_student1done
        print(filter_student1 )
elif(inp_findout=="no"):
        print("ok")
else:
        print("Error")
"""
 
#section no4 redy to find our some summary of your students
"""
inp_findout=input("do you want to make some summary of your students\n:")
if(inp_findout[0]=="y")and (inp_findout[2=="s"]):
        import find_student1done
        print(find_student1done )
elif(inp_findout=="no"):
        print("ok")
else:
        print("Error")

""" 
#section no 5 not yet defined
 
 
inp_findout=input("do you want to replace anything\n:")
if(inp_findout.startswith=="y")and (inp_findout.endswith=="s"):
        import replace1done
        print(replace1done )
elif(inp_findout=="no"):
        print("ok")
else:
        print("Error")
        
        
        