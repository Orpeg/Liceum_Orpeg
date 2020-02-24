a = 2
b =3 
print('\n')
print('suma liczb a + b = ', a+b, '\n')

y = int(input ('podaj drugą liczbe calkowitą y = '))
x = int(input('podaj liczbe calkowita x = '))
print('podales liczby x = ', x, ',  y = ', y)
print('zbadamy czy liczba y jest podzielna przez x')
while(x == 0):
	print('x nie może być zerem')
	x = int(input('podaj jeszcze raz liczbe rozna od zera'))
if(y%x == 0):
		print("y jest podzielne przez x")
else:
		print('y nie jest podzielne przez x')