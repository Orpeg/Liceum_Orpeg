# kod źródłowy Pythona
import turtle
g = turtle.Turtle()
g.color('red', 'blue')
g.begin_fill()
for i in range(4):
	g.forward(100)
	g.left(90)

g.penup()
g.right(90)
g.forward(200)
g.left(90)
g.pendown()
for e in range(3):
	g.forward(100)
	g.left(120)

g.end_fill()
turtle.done()