import colorama
from colorama import Fore, Back, Style
colorama.init(autoreset=True)
import pandas as pd
www=pd.read_csv("vc_code_py/python/python/pandas_py/Student Id2345.csv",index_col="Name")
print(www.to_string)
print(www.drop(columns=["Student ID"]))

"""
www=www.fillna({"Math":"Not Found",
                "Science":"Not Found",
                "English":"Not Found",
                "History":"Not Found",
                "Computer":"Not Found",
                "Total":"Not Found",
                "Average":"Not Found",
                "Grade":"Not Found"})
"""
#print(www[["Science","Math"]].head())
#print(www.loc["krishna2":"Vivaan Verma"])
#inp=input("Enter the sub\t:")
#inp=input("enter your critaria\t:")
#print(www[inp].to_string())
#filter=www[www[inp]>=80]
#print(filter.to_string())
#print(www.sum(numeric_only=True))
#print(www.mean(numeric_only=True))
#print(www.max(numeric_only=True))
#print(www.count())
#group=www.groupby("Name")
#print(www["History"].mean())

"""
def fil3():    
    inp4=str(input(Fore.BLUE + "enter the sub\t:"))
    inp2=int(input(Fore.BLUE + "Enter the marks\t:"))

    inp3=str(input(Fore.BLUE + "will that be grater than or less than\t:"))
    if(inp3=="grater than"):
        filter2=www[www[inp4]>=inp2]
        print(Fore.GREEN + str(filter2))
        def fil():
            inp4=str(input(Fore.BLUE + "You want more???\t:"))
            if (inp4=="yes")or(inp4=="Yes"):
                print(Fore.GREEN + filter2.to_string())
            elif(inp4=="no")or(inp4=="No"):
                print()
            else:
                print(Fore.GREEN + "Error")
                return fil()
        fil()
    elif(inp3=="less than"):
        filter4=www[www[inp4]<=inp2]
        print(Fore.RED + str(filter4))
        def fil1():    
            inp4=str(input(Fore.BLUE + "You want more???\t:"))
            if (inp4=="yes")or(inp4=="Yes"):
                print(Fore.GREEN + filter4.to_string())
            elif(inp4=="no")or(inp4=="No"):
                print()
            else:
                print(Fore.RED + "Error")
                return fil1()
        fil1()
    else:
        print(Fore.RED + "Error")
        return fil3()
fil3()

"""
"""
www=www.fillna({"History":"None",
                "Math":"None2",
                "Science":"None3",
                "English":"None4",
                "Computer":"None5",
                "Total":"None6",
                "Average":"None7",
                "Grade":"None8"
                })
print(www.to_string())
"""
"""
inp6=input("Enter some thing\t:")
lop1=type(inp6)
print (lop1)
if(lop1==int):
    print("OK")
else:
    print("NO")
"""


"""
def re():  
    inp_wish=input("Enter anything:")
    if (((inp_wish[0]=="m")or(inp_wish[0]=="M"))and((inp_wish[2]=="v" ) or (inp_wish[2]=="V")) and ((inp_wish[4]=="e")or (inp_wish[4]=="E"))) :
        print("ok")
        return re()
    else:
        print("no")
        return re()
re()
"""   
"""    
inp=input("Enter your name\t:")
if (inp.startswith("s") and inp.endswith("n")):
    print ("Sayantan")
else:
    print("Noop")
""" 

    
    