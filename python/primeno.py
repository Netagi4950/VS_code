s=int(input("Enter the starting no"))
e=int(input("Enter the ending no"))

for i in range(s,e+1):
    if i<=1:
        continue
    for j in range (2,i):
        if i%j==0:
            break
    else:
        print(i)
