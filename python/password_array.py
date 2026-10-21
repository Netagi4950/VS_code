import numpy as np
pas=int(input("enter the password(only one no)\t"))

    #in this we will creat a password genator 
    #data will be defined
def password():
    reg=np.random.default_rng()
    array=([1,2,3,4,5,6,7,8,9,0])
    array2=reg.choice(array)
    #array3=(reg.integers(0,11,(1)))
    print(array2)
    if(pas==int(array2)):
        print("you are logged in")
        
    else:
        print('your are wrong')
        return password()
password()    
   