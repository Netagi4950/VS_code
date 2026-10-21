import numpy as np
array=np.array([1,2,3,4,5,6,7,8,9,10])
array2=np.array([10,20,30,40,50,60,70,80,90,10])
array3=np.array([array, array2])
#print(array3)
array3[array3 < 20]=0
print (array3)
