# coding: utf-8
for e in range(10, 100, 10):
    print(bin(e))

input('Press any key')

for e in range(10, 100, 10):
    print(oct(e))
    
input('Press any key')

for e in range(10, 100, 10):
    print(hex(e))
    
input('Press any key')

x = 0.0
i = 0
while x != 1.0:
    x += 0.1
    i+=1
    print(i, '. ', x)
    if x > 1.5:#to jest założony break gdyż pętla nieskończona
        break
        
def f(x):
    return 2*x**2 -10*x+5
    
import matplotlib.pyplot as plt
import pandas as pd
fig, ax = plt.subplots(figsize = (14,5));
ax.plot(range(-2,7), [f(x) for x in range(-2,7)])
plt.show()


input('Press any key')

def funkcja():
    ax.plot(range(-2,8), [f(x) for x in range(-2,8)], color = 'red', marker ='+')
    ax.set_xlabel('os X')
    ax.set_ylabel('os Y')
    ax.set_title('funkcja kwadratowa')
    
fig, ax = plt.subplots(figsize = (14,5));
funkcja()
plt.show()


input('Press any key')

#metoda połowienia
def zerowe(eps):
    a,b = 0,1
    while abs(b-a) > eps:
        c = (a+b)/2
        if f(c) < 0:
            b=c
        else:
            a = c
    return c
    
print(zerowe(0.001))
def zerowe(eps):
    a,b = 4,5
    while abs(b-a) > eps:
        c = (a+b)/2
        if f(c) > 0:
            b=c
        else:
            a = c
    return c
    
zerowe(0.001)
