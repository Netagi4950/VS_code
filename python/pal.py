num=input("Enter the name")
num_1=num
k=""
for i in num:
    k=i+k
print("your palindrome no is",k)
    
if num_1==k:
    print("it is a palindrome")
else:
    print("it is noy")
