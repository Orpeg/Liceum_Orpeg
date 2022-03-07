# -*- coding: utf-8 -*-
"""
Created on Mon Mar  7 15:54:19 2022

@author: Wojciech
"""
# metoda iteracyjna liczenia silni
silnia = 1
n = int(input('Podaj liczbę całkowitą dodatnia    '))

for i in range(1,n+1):
    silnia = silnia * i

print('Silnia liczby n = ', n , ' wynosi ', silnia)

