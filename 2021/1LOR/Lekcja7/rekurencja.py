# -*- coding: utf-8 -*-
"""
Created on Mon Mar  7 16:16:43 2022

@author: Wojciech
"""

# n = int(input(' Podaj liczbę całkowita dodatnią  '))

def rek(n):
    if (n == 0): return 1
    if (n == 1): return 1
    
    return rek(n-1)*n


# print('Silnia liczona rekurencyjnie dla n = ', n, 'wynosi ', rek(n))


def kombinacja(m,k):
    return rek(m)/rek(k)/rek(m-k)

m = int(input('Ile elementów ma zbior  '))
k = int(input('ile elementow wybierasz'))

print('dla m= ', m , 'zbioru i dla k = ', k , 'elemtow kombinacja wynosi ', kombinacja(m, k))