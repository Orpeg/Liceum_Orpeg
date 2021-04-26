def dodawanie(x,y):
	return x+y

def odejmowanie(x,y):
	return x-y

def mnozenie(x,y):
	return x*y

def dzielenie(x,y):
	try:
		return x/y
	except:
		print('Błąd! Dzielenie przez zero')
