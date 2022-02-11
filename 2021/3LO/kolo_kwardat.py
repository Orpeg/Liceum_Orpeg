# -*- coding: utf-8 -*-
"""
Created on Wed Jan 19 13:59:48 2022

@author: WojciechBalcerzak
"""


import turtle
t = turtle
t.penup()
t.setpos(-100,0)
t.pendown()
t.circle(100)
t.penup()

t.goto(-100,100)
t.right(45)
t.fd(100)
t.left(135)
t.pendown()
for e in range(4):
    t.forward(141)
    t.left(90)
t.penup()
turtle.done()



# lst = [1, 1, 1, 1, 2, 1, 2, 1, 1, 1, 2, 2, 1, 2, 1]

# print(sum(lst))