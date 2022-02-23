# -*- coding: utf-8 -*-
"""
Created on Mon Feb 21 16:09:38 2022

@author: Wojciech
"""
#obliczenia interacyjne silni

def silnia(n):
    if n == 0: return 1
    if n == 1: return 1
    s = 1
    for i in range(1,n+1):
        s*=i
    return s


def kombinacja(k,l):
    return silnia(l)/(silnia(k)*silnia(l-k))

print('Liczymy kombinację 2 z 3', kombinacja(2, 3))

    

print('liczymy ilosc kombinacji y liczb w zbiorze 10 elementowym')

for y in range(1,11):
    print('dla y = ', y, 'iloc kombinacji wynosi ', kombinacja(y,10))
    
