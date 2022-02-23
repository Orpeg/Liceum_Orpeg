# -*- coding: utf-8 -*-
"""
Created on Mon Feb 21 16:39:27 2022

@author: Wojciech
"""
#liczymy metodą rekurencyjną

n = int(input('Podaj liczbę całkowitą dodatnią n   '))

def sil(k):
    if k == 0: return 1
    if k == 1: return 1
    return k * sil(k-1)

print(sil(n))