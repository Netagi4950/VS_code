import pandas as pd
import colorama
from colorama import Fore,Back
colorama.init(autoreset=True)


# section no1
list=pd.read_csv("vc_code_py/pandas_py/show_id1.csv",index_col="title")

# Create 2 new columns for int and str
list['duration_min'] = list['duration'].str.extract(r'(\d+)\s*min').astype('float')
list['seasons'] = list['duration'].str.extract(r'(\d+)\s*Season').astype('float')


# Now separate the rows
# exstublish the data

movies = list[list['duration_min'].notna()]   # rows with int/minutes
series = list[list['seasons'].notna()]        # rows with seasons/str



# to identify NaN as i wish



list=list.fillna({"type":"Note Found",
                  "title":"Note Found",
                  "director":"Note Found",
                  "cast":"Note Found",
                  "country":"Note Found",
                  "date_added":"Note Found",
                  "duration":"Note Found"})
list=list.drop(columns=["description","SerialNo","duration"])



print(list)
#to show what i want 
list=list[["type","director","cast","country","date_added","release_year","duration_min","seasons"]]
def re():
    # it is to make verious decition as per your wish
    inp_wish=input(Fore.BLUE + "Enter what do you want(Movie,Director,Country,Year,Math,Type)\t:")
    print(Fore.GREEN+"OK...")
    if (((inp_wish[0]=="m")or(inp_wish[0]=="M"))and((inp_wish[2]=="v" ) or (inp_wish[2]=="V")) and ((inp_wish[4]=="e")or (inp_wish[4]=="E"))) : #movie
        #section no2
        #to find out any single data for or about a movie using the name
        print(Fore.GREEN+"OK...")
        inp_m=str(input(Fore.BLUE+"Enter the name which do you want\t:"))
        try:
            print(Fore.GREEN+"OK")
            print(list.loc[inp_m])
        except:
            print(Fore.RED + "ERROR")
            return re()
    elif(((inp_wish[0]=="d")or(inp_wish[0]=="D"))and ((inp_wish[2]=="r")or(inp_wish[2]=="R"))and((inp_wish[5]=="t")or (inp_wish[5]=="T"))and((inp_wish[7]=="r")or(inp_wish[7]=="R"))): #director
        print(Fore.GREEN+"OK...")
        #section no2 sub1 director
        inp_director=input(Fore.BLUE+"Enter the name of the diretor\t:")
        print(Fore.GREEN+"OK")
        filter3=list[list["director"]==inp_director]
        print(filter3)
    elif(((inp_wish[0]=="C")or(inp_wish[0]=="c"))and((inp_wish[3]=="n")or(inp_wish[3]=="N"))and((inp_wish[5]=="r")or (inp_wish[5]=="R"))and((inp_wish[6]=="y")or(inp_wish[6]=="Y"))):#country
        #section no2 sub2 country
        print(Fore.GREEN+"OK...")
        inp_country=input(Fore.BLUE+"Enter the name of the country\t:")
        try:
            print(Fore.GREEN+"OK")
            filter4=list[list["country"]==inp_country]
            print(filter4.to_string)
        except ValueError:
            print(Fore.RED+"Error")
            return re()
    elif(((inp_wish[0]=="Y")or (inp_wish[0]=="y"))and ((inp_wish[2]=="r")or (inp_wish[2]=="R")or(inp_wish[3]=="r")or(inp_wish[3]=="R"))):#YEAR
        #section no2 sub3 year
        print(Fore.GREEN+"OK...")
        def filter_y():
            inp5=int(input(Fore.BLUE+"Enter the year you want \t:"))
            try:
                print(Fore.GREEN+"OK")
                filter1=list[list["release_year"]==inp5]
                print(filter1)
            except ValueError:
                print(Fore.RED+"Error")
                return filter_y()
        filter_y()
    elif(((inp_wish[0]=="m")or(inp_wish[0]=="M"))and ((inp_wish[2]=="t")or(inp_wish[2]=="T"))and ((inp_wish[3]=="h"))):#math
        #Section no3
        #to show some info like cound min max etc
        print(Fore.GREEN+"OK...")
        inp4=input(Fore.BLUE+"Enter what you want\t:")
        if(inp4=="count")or(inp_wish[0]=="c")or(inp_wish[0]=="C"):
            print(Fore.GREEN+"OK")
            print(list.count())
        elif(inp4=="mean")or(inp_wish[0]=="m")or(inp_wish[0]=="M")and ((inp_wish[3]=="n")):
            print(Fore.GREEN+"OK")
            print("For time only",list["duration_min"].mean())
            print("For seasons only",list["seasons"].mean())
        elif(inp4=="max")or(inp_wish[0]=="m")or(inp_wish[0]=="M")and (inp_wish[2]=="x"):
            print(Fore.GREEN+"OK")
            print("For time only",list["duration_min"].max())
            print("For seasons only",list["seasons"].max())
        elif(inp4=="min")or(inp_wish[0]=="M")or(inp_wish[0]=="m")and (inp_wish[2]=="n"):
            print(Fore.GREEN+"OK")
            print("For time only",list["duration_min"].min())
            print("For seasons only",list["seasons"].min())
        else:
            print(Fore.RED+"Error")
            return re()
    elif(inp_wish=="type")or(inp_wish=="Type")or(inp_wish[0]=="t")or(inp_wish[0]=="T")and (inp_wish[2]=="p") and (inp_wish[3]=="e"):
        #section no4
        #to identify move and tv show diffarently
        #filter1=list[list["type"]=="Movie"]
        #print(filter1)
        print(Fore.GREEN+"OK...")
        def filter():
            inp5=input(Fore.BLUE+"Enter what do you want Movie or TV Show\t:")
            print(Fore.GREEN+"OK...")
            if (inp5=="Movie")or(inp5=="movie")or(inp_wish[0]=="m")or(inp_wish[0]=="M"):
                print(Fore.GREEN+"OK")
                filter1=list[list["type"]=="Movie"]
                print(filter1)
            elif(inp5=="TV Show") or(inp5=="tv show") or(inp5=="tvshow") or(inp5=="tv")or(inp5=="TV show"):
                print(Fore.GREEN+"OK")
                filter2=list[list["type"]=="TV Show"]
                print(filter2)
            else:
                print(Fore.RED+"Error")
                return filter()
        filter()
        #section no5

    else:
        print(Fore.RED+"Error")
        return re()
        
    def re2():
        inp_m=input(Fore.BLUE+"What do you want more???\t:")
        if(inp_m=="More")or(inp_m=="more")or(inp_wish[0]=="m")or(inp_wish[0]=="M"):
            print(Fore.GREEN+"OK")
            return re()
        elif(inp_m=="no"):
            print(Fore.GREEN+"OK")
        else:
            print (Fore.RED+"Error")
            return re2()
            
    re2()        
re() 