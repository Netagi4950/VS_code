import colorama
from colorama import Fore, Back, Style
colorama.init(autoreset=True)
import pandas as pd
student=pd.read_csv("vc_code_py/pandas_py/Student Id2345.csv",index_col="Name")
#print(Fore.MAGENTA + student.to_string())
def fil3():    
    inp4=str(input(Fore.BLUE + "enter the sub\t:"))
    inp2=int(input(Fore.BLUE + "Enter the marks\t:"))

    inp3=str(input(Fore.BLUE + "will that be grater than or less than\t:"))
    if(inp3=="grater than"):
        filter2=student[student[inp4]>=inp2]
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
        filter4=student[student[inp4]<=inp2]
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