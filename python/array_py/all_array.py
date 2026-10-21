import numpy as np
roll=np.array([10,23,25,14,56,78,89,50])
roll2=np.array([3,5,80,40,70,90,50,65])
print(np.array([roll+roll2]))
print(np.sum([roll]))
print(np.shape([roll]))
print(np.min([roll]))
print(np.max([roll]))
array3=np.array([roll,roll2])
print(array3)
print(np.min([array3]))
array3[array3>50]=0
print(array3)
print(roll**roll2)

