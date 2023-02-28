# coding: utf-8
2
a = 2
print(a)
#casting
float(2)
a
float(a)
#krotka
(2,5,-1,4,9)
a,b,c,d,e =(2,5,-1,4,9)
a
b
c
kr = (2,5,-1,4,9)
list(kr)
lst = list(kr)
lst
lst[0]
lst[2]
print(lst)
for e in lst:
    print(e)
    
lsst
lst
lst.append(10)
lst
lst.pop()
lst
bin(1.5)
bin('1.1')
bin(10)
x = 0.0
x+=0.1
x
x+=0.1
x
x+=0.1
x
x = 0.0
x+=0.125
x
x+=0.125
x
x+=0.125
x+=0.125
x
x = 0.0
x+=0.1
x+=0.1
x+=0.1
x+=0.1
x
x+=0.1
x
x+=0.1
x
x+=0.1
x
x+=0.1
x
x == 0.8
bool(1)
bool(0)
2**2
2**3
2**0.5
#pierwiastek kwawdratowy
sqrt(2)
import math
math.sqrt(2)
from math import sqrt
sqrt(2)
#zadanie: oblicz pole trójkąta prostokątnego o bokach a, b
# definicje podprogram
def pole_tr(a,b):
    a = float(input(' podaj bok a '))
    b = float(input(' podaj bok b '))
    print(f'pole trójkąta prostokątnego o przyprostokątnych a = {a} oraz b = {b} wynosi {a*b/2}')
    
pole_tr(10,20)
def pole_tr(a,b):
    print(f'pole trójkąta prostokątnego o przyprostokątnych a = {a} oraz b = {b} wynosi {a*b/2}')
    
pole_tr(10,20)
#dowolny trójkąt
def heron(a,b,c):
    #polowa obwodu
    p = (a+b+c)/2
    s = sqrt(p*(p-a)*(p-b)*(p-c))
    print(f'pole trojkata dowolnego o bokacch a={a}, b={b}, c={c} wynosi {s}')
    
heron(10,20,25)
heron(10.0,20.0,25.0)
#zipowanie
a = [2,3,4,-5,10]
b = ['janek', 'zosia', 'magda', 'amelia', 'ania']
dict(zip(a,b))
slownik = dict(zip(a,b))
slownik
slownik[2]
slownik[3]
for i, x, y in enumerate(slownik):
    print(f' {i+1}, indeks {x}, wartość {y}')
    
for x, y in enumerate(slownik):
    print(f' indeks {x}, wartość {y}')
    
def kwadrat(x):
    print(x**2)
    
kwadrat(2)
kwadrat(3)
lambda x: x**2
kwadrat = lambda x: x**2
kwadrat(2)
kwadrat(3)
s = '     to jest napis za spacjami   '
s.strip()
lambda s: s.strip()
spacje = lambda s: s.strip()
spacje(s)
s
def spacja(s):
    s = s.strip()
    returnn s
def spacja(s):
    s = s.strip()
    return s
    
s
spacja(s)
