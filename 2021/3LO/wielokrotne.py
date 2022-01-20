# -*- coding: utf-8 -*-
"""
Created on Wed Jan 19 12:20:57 2022

@author: WojciechBalcerzak
"""
import turtle

t = turtle
# k wspolczynnik skrocenia
def figura(s, n):
    # t.color('black', 'green')
    t.pendown()
    # t.begin_fill()
    for e in range(n):
        t.forward(s)
        t.left(360/n)
    # t.end_fill()
    t.penup()


t.setpos(-200,0)
for k in range(1,10):
    figura(100/k, 4)
    forward(10*k)

turtle.done()