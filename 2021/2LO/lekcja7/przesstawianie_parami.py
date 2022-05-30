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

s = 'Stoi na stacji lokomotywa'
print('Przestawienie', szyfr(s))

def wyv(s):
    t=''
    for i in range(len(s)):
        if s[i] == 'w':
            t+= 'f'
            continue
        if s[i] =='W':
            t+= 'F'
            continue
        if s[i] == 'U':
            t+= 'v'
            continue
        if s[i] == 'u':
            t+= 'v'
            continue
        t+=s[i]
    return t
        
print('zamiana', wyv(s))
