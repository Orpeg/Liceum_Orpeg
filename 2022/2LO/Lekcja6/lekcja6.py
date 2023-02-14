# coding: utf-8
#importowanie modulow
2*2
2**2
2*3
2**3
pow(2,3)
2**(.5)
sqrt(2)
pi
import math
math.sqrt(2)
sqrt(2)
#dwa spsoby importu bibliotek w pythonie
#1. imort nazwa_modulu
import math
from math import sqrt
sqrt(2)
#2. from nazwa_biblioteki import modul
from math import pi tau
from math import pi
from math import tau
pi
tau
tau/pi
# zadanie: oblicz pole kola o promieniu r = 5cm oraz obwód tego kola
r = 5
tau * r # obwod
B = tau * r # obwod
pi*r**2 # pole kola
P = pi*r**2 # pole kola
print(f'Obwód kola o promieniu {r} wynosi {B} a pole tego koła wynosi {P}')
print(f'Obwód kola o promieniu r= {r} wynosi B ={B} a pole tego koła wynosi P = {P}')
# zadanie 2 jak jest długość przekątnej kwadratu o boku 3?
3*sqrt(2)
d = 3*sqrt(2)
3**2 + 3**2 == d
d
3**2 + 3**2
sqrt(3**2 + 3**2)
sqrt(3**2 + 3**2) == d
x = 0
for i in range(20):
    x+=0.1
    print(f'{i+1}. wartość x {x}')
    
x = 0
while x !=10:
    x+=1
    print(x)
    
x = 0.0
#funkcja x**(1/x)
def funkcja(x):
    if x != 0:
        return x**(1/x)
    else:
        print(f'dzielanie niedozwolone')
        
funkcja(2)
funkcja(3)
funkcja(1)
import numpy as np
for x in arange(1,2,0.125):
    print(x)
    
for x in np.arange(1,2,0.125):
    print(x)
    
for x in np.arange(1,3,0.125):
    print(f'dla x ={x} funkcja ma wartość f(x) = {funkcja(x)}')
    
for x in np.arange(1,4,0.125):
    print(f'dla x ={x} funkcja ma wartość f(x) = {funkcja(x)}')
    
import pandas as pd
x = list()
x
y=list()
y
df=pd.DataFrame()
for v in np.arange(1,4,0.125):
    x.append(v)
    y.aapend(funkcja(v))
    
for v in np.arange(1,4,0.125):
    x.append(v)
    y.apend(funkcja(v))
    
x
y
x=list()
for v in np.arange(1,4,0.125):
    x.append(v)
    y.append(funkcja(v))
    
x
y
df = pd.DateFrame({'X' : x, 'Y':y})
df = pd.DateFrame({'X':x, 'Y':y})
df = pd.DateFrame('X':x, 'Y':y)
df = pd.DataFrame({'X':x, 'Y':y})
df
import mpatplotlib.pyplot as plt
import matplotlib.pyplot as plt
df
df.plot(kind = 'bar', legend = True, grid = True, alpha =0.5)
plt.show()
df['Y'].plot(kind = 'line', legend=True, grid = True, alpha = 0.5)
plt.show()
