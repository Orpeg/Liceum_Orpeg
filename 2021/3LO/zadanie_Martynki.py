# -*- coding: utf-8 -*-
"""
Created on Fri Jul  8 20:41:31 2022

@author: Wojciech
"""
# wprowadzsamy dane
# tworzymy dwie listy do obliczen

datain = ['A', 'E', 'G', 'H', 'J', 'M']
inasci = []
dataout = []

for e in datain:
    inasci.append(ord(e))

for e in range(inasci[0], inasci[len(inasci)-1]):
    if e not in inasci: dataout.append(chr(e))

print('zbior wejsciowy  ',datain )
print('zbior wyjsciowy  ',dataout)