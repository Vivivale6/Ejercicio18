import numpy as np
import matplotlib.pyplot as plt

dato= np.loadtxt("datos.txt")
x=dato[:,0]
y=dato[:,1]

plt.scatter(x,y)
plt.savefig("graficadev.png")
