import turtle
g = turtle.Turtle()
g.color("blue")
g.begin_fill()


r = 10 # number of circles 
n = 10 # loop for printing tangent circles 

for i in range(1, n + 1, 1): 
    g.circle(r * i) 

g.end_fill()
turtle.done()