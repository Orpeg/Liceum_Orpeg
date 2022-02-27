# -*- coding: utf-8 -*-
"""
Created on Fri Feb 11 11:37:07 2022

@author: WojciechBalcerzak
"""
# import turtle
# t = turtle.Turtle()
# t.begin_fill()
# def figura(bok,kat):
#     t.color('green')
#     for e in range(bok):
#         t.forward(80)
#         t.left(kat)
# figura(4,90)
# t.penup()
# t.forward(100)
# figura(3, 120)
# t.end_fill()
# turtle.done()


# import turtle
# import math
# t = turtle.Turtle()
# t.begin_fill()
# t.color('#1010ff')
# t.forward(100)
# t.left(90)
# t.forward(100)
# t.left(135)
# t.forward(math.sqrt(20000))
# t.end_fill()
# turtle.done()

print(2**3.0)
print(2*3**2)

# x =1
# x*=x+1
# print(x)

count = 0
while count < 10:
    print(count+1, " welcome")
    count +=1
    
x = 0
while x < 4:
    x=x+1
print("x is ", x)

number = 6
while number > 0:
    number -=3
    print(number, end=' ')