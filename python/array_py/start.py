import numpy as np
#let's tack some marks of students and
# and then make ave of thenm 
# and then make grats of that

marks1=np.array([50,30,60,10,47,89,99,90])
marks2=np.array([59,20,40,80,40,89,89,50])
marks3=np.array([59,38,55,89,98,56,100,100])

ave=(marks1+marks2+marks3)/3
ave1=np.round(ave,3)
ave1[ave1 < 50] = 0

print(ave1)