import pandas as pd
#import find_student1done
student=pd.read_csv("vc_code_py/python/python/pand bunch/Student Id2345.csv")
student=student.drop(columns=["Student ID"])
print (student.to_string())
student=student.fillna("Not")

def passfail():    
    inp1,inp2=(map(str,input("Enter the sub(Math,Science,English,History,Computer) and Pass or Fail \t:").split()))
    try:
        inp1=int(inp1)

        print("You have done some-thing wrong...")
        try:
            inp2=int(inp2)
            print("You have done some-thing wrong...")
        except ValueError:
            print("OK")
        return passfail()
    except ValueError:
        print("OK")
    student[inp1] = pd.to_numeric(student[inp1], errors="coerce")

    
    if((inp2[0]=="P")or(inp2[0]=="p")and(inp2[2]=="s")):
        filter=student[student[inp1] >= 40]
        print(filter)
            
    elif((inp2[0]=="F")or(inp2[0]=="f")and(inp2[1]=="a")and(inp2[3]=="l")):
        filter=student[student[inp1] <= 40]
        print(filter)
        
    elif(inp2.startswith("T")and inp2.endswith("l")):
        print("Typing Error")
    elif(inp2.startswith("A")and inp2.endswith("e")):
        print("Typing Error")
    elif(inp2.startswith("G")and inp2.endswith("e")):
        print("Typing Error")
    elif(inp2.startswith("N")and inp2.endswith("e")):
        print("Typing Error")
    else:
        print("Typing ERROR")
        return passfail()
    
passfail()
