import matplotlib.pyplot as plt

X, Y = [], []

for line in open('model_problem_results1.dat', 'r'):

	values = [float(s) for s in line.split()]
	X.append(values[0])
	Y.append(values[1])
	
plt.xlabel('x')
plt.ylabel('u(x)')
plt.title('Sollution to Model')
plt.plot(X,Y)
plt.show()



