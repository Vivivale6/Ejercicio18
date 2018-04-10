import numpy as np
import matplotlib.pyplot as plt

dato= np.loadtxt("datos2.txt")
x=dato[:,0]
y=dato[:,1]
z=dato[:,2]

plt.scatter(x,y)
plt.savefig("graxy.png")
plt.figure()


plt.scatter(y,z)
plt.savefig("grayz.png")
