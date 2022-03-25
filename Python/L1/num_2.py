# accessing specific row, col etc

import numpy as np

a = np.array([[1,2,3,4,5], [8,7,6,5,4]])


print("Get specific element ")
print(a[0,-2])
print()

print("Get specific row ")
print(a[0, :])
print()

print("Get specific col ")
print(a[ :, 4])
print()

print("little fancy||start index: end index:stepsize")
print(a[ 1:, 0:4:2]) #start index jtate dibo oitar por theke strat hobe
print()

print("change any elements")
a[1,4] = 20
print(a) 
print()

print("change any elements")
a[:,1] = 5
print(a) 
print()


print("3d examples")
c= np.array([ [[1,2], [2,3]], [[4,5], [6,7]] ])
print(c) 
print()

print("3d examples || get specific element")
print(c[0,1,1]) 
print(c[1,1,1]) 
print()

print("3d examples || replacement")
c[:,0,:] = [[10,10], [20,20]]
print(c) 
print()
