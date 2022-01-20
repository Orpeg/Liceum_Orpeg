# -*- coding: utf-8 -*-
"""
Created on Wed Jan 19 11:53:29 2022

@author: WojciechBalcerzak
"""
import turtle

t = turtle

def figura(s, n):
    t.color('black', 'green')
    t.pendown()
    t.begin_fill()
    for e in range(n):
        t.forward(s)
        t.left(360/n)
    t.end_fill()
    t.penup()

figura(100,6)

turtle.done()