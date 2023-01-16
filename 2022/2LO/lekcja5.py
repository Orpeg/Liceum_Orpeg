# coding: utf-8
lista = ['Jacek', 'Gosia', 'Stasia']
lista
for e in lista:
    print(e, end='')
    
for e in lista:
    print(e, end=', ')
    
lista.append('Magda')
lista
a = 'Martyna'
b = 'Bartek'
a
b
(a,b)
lista + a
lista + [a]
lista + [a] + [b]
dod = [a,b]
dod
lista
dod
lista.append(dod)
lista
lista.pop()
lista
dir(lista)
lista.extend(dod)
lista
file = open('imiona.txt', mode = 'w', encoding='utf-8')
for e in lista:
    file.write(e+'\n')
file.close()
lista
lista.clear()
lista
file = open('imiona.txt', mode = 'r', encoding='utf-8')
for e in file:
    lista.append(e)
file.close()
lista
for e in lista:
    priint(e)
    
for e in lista:
    print(e)
    
napis = 'Jedzie pociąg z daleka'
napis
napis.lower()
napis.upper()
napis.title()
napis.replace('pociąg', 'lokomotywa')
napis
#inplace
lista
lista.sort()
lista
napis
napis[::-1}
napis[::-1]
napis[5:10:1]
napis[10:3:-1]
napis
napis[-1]
napis[0]
napis[-2]
napis[1]
napis
napis.split(' ')[-1]
napis.split(' ')
napis
napis.split(' ')[-2]
lista
lista.clear()
lista
file = open('imiona.txt', mode = 'r', encoding='utf-8')
for e in file:
    lista.append(e)
    
file.closed
file.close()
file.closed
lista
file = open('imiona.txt', mode = 'r', encoding='utf-8')
lista.clear()
for e in file:
    print(e)
    
for e in file:
    print(e)
    
file.seek(0)
for e in file:
    print(e)
    
file.seek(0)
for e in file:
    lista.append(e)
file.close()
lista
import randomo
import random
numbers.clear()
numbers = []
for e in range(20):
    numbers.append(random.randint(1,100))
    
numbers
file = open('numbers.txt', mode = 'w')
for e in numbers:
    file.write(e)
    
for e in numbers:
    file.write(str(e))
    
file.close()
file = open('numbers.txt', mode = 'w')
for e in numbers:
    file.write(str(e)+',')
    
file.close()
numbers
numbers.clear()
numbers
file = open('numbers.txt', mode = 'r')
for e in file:
    numbers.append(e)
    
numbers
numbers.clear()
file.seek(0)
for e in file:
    numbers.append(int(e))
    
for e in file:
    numbers.append(e)
    
numbers
file.seek(0)
for e in file:
    numbers.append(e)
    
numbers
file.close()
numbers
numbers.split(',')
numbers - [15,63,24,37,48,4,26,7,83,15,40,3,47,67,81,77,81,10,77,86]
numbers = [15,63,24,37,48,4,26,7,83,15,40,3,47,67,81,77,81,10,77,86]
numbers
sum(numbers)
min(numbers)
max(numbers)
import numpy as np
np.std(numbers)
np.mean(numbers)
file.clossed
file.closed
