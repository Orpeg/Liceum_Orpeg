import turtle
import math

t = turtle.Turtle()
t.color("blue")
t.begin_fill()
for i in range(30):
    t.forward(50)
    t.left(12)
t.end_fill()
turtle.done()

