# -*- coding: utf-8 -*-
"""
Created on Mon Mar  7 16:31:25 2022

@author: Wojciech
"""

# LIczymy ciąg fibonacciego meetodą rekurencyjna

n = int(input(' Podaj liczbę dodatnią  '))

def fibonacci(n):
    if n == 1: return 1
    if n == 2: return 1
    return fibonacci(n-2)+fibonacci(n-1)

print('liczba fibonacciego dla n = ', n, ' wynosi ', fibonacci(n))
