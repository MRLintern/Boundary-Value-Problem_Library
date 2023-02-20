## Plotting Script

Python scripts for plotting results after using the library

## General Structure

    import matplotlib.pyplot as plt
    
    x, u = [], []
    
    for line in open('NAME-OF-RESULTS-FILE.dat', 'r'):
    
          values = [float(s) for s in line.split()]
          x.append(values[0])
          u.append(values[1])
    
    plt.xlabel('x')
    plt.ylabel('u(x)')
    plt.title('Solution to Model')
    plt.plot(x,u)
    plt.show()
    
          

    
    
