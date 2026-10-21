import numpy as np

array = np.array([1,2,3,4,5,6,7,8,9])
array1 = np.array([10,20,30,40,50,60,70,80,90])
combined = np.concatenate([array, array1])  # flattens to 1D: [1 2 3...90]

odds = combined[combined % 2 == 1] # remainder 1
evens = combined[combined % 2 == 0] # remainder 0

print("Odd numbers:", odds)   # [1 3 5 7 9]
print("Even numbers:", evens) # [2 4 6 8 10 20 30 40 50 60 70 80 90]

#print("Count of odds:", odds.size)   # 5
#print("Count of evens:", evens.size) # 13