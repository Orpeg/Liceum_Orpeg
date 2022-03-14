# -*- coding: utf-8 -*-
"""
Created on Mon Mar 14 19:17:37 2022

@author: Wojciech
"""
def szyfr(s):
    t=''
    for i in range(0,len(s)-1, 2):
        t=t+s[i+1]+s[i]
    if len(s)%2 != 0:
        t=t+s[len(s)-1]
    return t

s = 'tekst do deszyfrowanie'
print(szyfr(s))

