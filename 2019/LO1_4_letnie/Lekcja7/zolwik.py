import turtle
import math
# pełny obót wynosi 360 stopni
t = turtle.Turtle()
t.color("blue")
t.begin_fill()
for i in range(11):
    t.forward(80)
    t.left(36)
t.end_fill()
turtle.done()

# narysujemy teraz koło

t.circle(150)

