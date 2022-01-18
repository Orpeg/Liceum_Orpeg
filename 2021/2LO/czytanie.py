# -*- coding: utf-8 -*-
"""
Created on Mon Jan 17 16:28:35 2022

@author: Wojciech
"""
# czytamy plik imiona.txt

lista_imion = []
f = open('imiona.txt', mode='r', encoding='utf-8')
for e in f:
    lista_imion.append(e)
f.close()

print(lista_imion)