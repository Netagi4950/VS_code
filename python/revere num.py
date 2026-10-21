num=int(input("Enter the num\t"))
num_1=num
k=0
while num>0:
    h=num%10
    k=(k*10)+h
    num=num//10
print("the num is-",k)
if ( num_1==k):
    
     print("it is a palindrome no")
else:
    print("it is not")
