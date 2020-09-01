import numpy as np
import matplotlib.pyplot as plt

positions = np.loadtxt("test-positions.txt")

plt.plot(positions[:, 0], positions[:, 1])
plt.show()
