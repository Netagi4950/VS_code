a=(input("Enter a number: "))
try:
    a=int(a)
    print ("it is not a string  ")
except ValueError:
    print ("ok",a)




#a,b=map(int,input("Enter two numbers: ").split())    
#df.to_csv("students.csv", index=False)