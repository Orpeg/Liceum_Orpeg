# -*- coding: utf-8 -*-
"""
Created on Mon Mar  7 15:54:19 2022

@author: Wojciech
"""
# metoda iteracyjna liczenia silni

def silnia(n):
    silnia = 1
       
    for i in range(1,n+1):
        silnia = silnia * i
    
    return silnia

