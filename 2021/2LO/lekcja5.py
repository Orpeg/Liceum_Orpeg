# -*- coding: utf-8 -*-
"""
Created on Mon Jan 17 09:54:56 2022

@author: Wojciech
"""
import random
import numpy as np

lst = ['Małgosia\n', 'Jurek\n', 'Andrzej\n', 'Stefan\n', 'Zosia\n', 'Bożena\n', 'Marta\n']

f=open('imiona.txt', mode='w', encoding='utf-8')

for e in lst:
    f.writelines(e)
f.close()

print(f.closed)

f= open('imiona.txt', mode='r', encoding='utf-8')
for e in f:
    print(e)
f.close()

numbers = []
for e in range(30):
    x = int(random.randint(1, 100))
    numbers.append(x)
print(numbers)
# print(numbers)

f = open('numbers.txt', mode='w')
for e in numbers:
    f.writelines(str(e)+"\n")
f.close()

print('czytamy plik')

licz =[]
f = open('numbers.txt', mode='r')
for e in f:
    licz.append(int(e))
f.close()
print(licz)

print('suma liczb suma = ', sum(licz))

print('wartoć max ', max(licz))
print('wartosc min ', min(licz))

print('srednia = ', sum(licz)/len(licz))

print('wartosc srednia', np.mean(licz))
