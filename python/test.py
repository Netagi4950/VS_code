import numpy as np
# let's find out odd and even one from two array

array=np.array([1,2,3,4,5,6,7,8,9])
array1=np.array([10,20,30,40,50,60,70,80,90])
array2=np.array([array,array1])
print(array2)
if (array2%2==0):
    print("even")
else:
    print("odd")

