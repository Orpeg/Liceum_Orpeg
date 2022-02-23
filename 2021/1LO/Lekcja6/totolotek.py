# -*- coding: utf-8 -*-
"""
Created on Mon Feb 21 16:25:43 2022

@author: Wojciech
"""
def silnia(n):
    if n == 0: return 1
    if n == 1: return 1
    s = 1
    for i in range(1,n+1):
        s*=i
    return s


def kombinacja(k,l):
    return silnia(l)/(silnia(k)*silnia(l-k))

print('obliczamy prawdopodobienstwo trafienia i liczb z 49')

for i in range(7):
    print('dla i = ', i, ' prawdopodobienstwo wygranej wynosi  ', kombinacja(i, 6)*kombinacja(6-i,43)/kombinacja(6,49))
    
