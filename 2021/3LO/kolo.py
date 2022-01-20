# -*- coding: utf-8 -*-
"""
Created on Wed Jan 19 12:43:52 2022

@author: WojciechBalcerzak
"""
import turtle

t = turtle
t.penup()
t.setpos(-200,0)
t.left(45)


def tooth():
    for k in range(1,10):
        if k%2==0:
            t.left(90)
        else:
            t.right(90)
        t.forward(k*20)
    
t.pendown()
tooth()
t.penup()
turtle.done()