import matplotlib.pyplot as plt

x, u = [], []

for line in open('model_problem_results1.dat', 'r'):

	values = [float(s) for s in line.split()]
	x.append(values[0])
	u.append(values[1])
	
plt.xlabel('x')
plt.ylabel('u(x)')
plt.title('Sollution to Model')
plt.plot(x,u)
plt.show()



