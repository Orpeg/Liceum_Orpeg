# coding: utf-8
#rzutowanie
a = '3'
a
b = '4'
b
a+b
suma = int(a) + int(b)
suma
pi ='3,1415'
float(pi)
3.14
3,14
10_0000
pi.replace(',', '.')
float(pi.replace(',', '.'))
p = float(pi.replace(',', '.'))
2*p
pesel = '0411354989'
len(pesel)
int(pesel)
pesel
pesel.zfill(11)
bool(1)
bool(0)
#petla for
#range(poczatek, koniec, skok)
list(range(1,10,1))
list(range(10,1,-1))
#petla for
for e in range(1, 10+1):
    print(e, end = ',')
    
#petla while
i = 0
while i<10:
    print(i, end=', ')
    i+=1
    
i = 0
while i<=10:
    print(i, end=', ')
    i+=1
    
#petla nieskonczona
while True:
    x = int(input('wpisz liczbę parzystą '))
    if x%2 == 0:
        print(f'wpisałeś poprawnie liczbę {x}')
        break
    else:
        print(f'spróbuj jeszcze raz  ')
        
while True:
    x = int(input('wpisz liczbę parzystą '))
    if x%2 == 0:
        print(f'wpisałeś poprawnie liczbę {x}')
        break
    else:
        print(f'spróbuj jeszcze raz  ')
        
ord('a')
ord('1')
ord('0')
chr(48)
chr(47)
while True:
    x = int(input('wpisz dowolną liczbę jednocyfrową '))
    if ord(x) > 48:
        print(f'wpisałeś poprawnie liczbę {x}')
        break
    else:
        print(f'spróbuj jeszcze raz  ')
        
while True:
    x = str(input('wpisz dowolną liczbę jednocyfrową '))
    if ord(x) > 48:
        print(f'wpisałeś poprawnie liczbę {x}')
        break
    else:
        print(f'spróbuj jeszcze raz  ')
        
while True:
    x = str(input('wpisz dowolną liczbę jednocyfrową '))
    if ord(x) > 48:
        print(f'wpisałeś poprawnie liczbę {x}')
        break
    else:
        print(f'spróbuj jeszcze raz  ')
        
chr(9)
ord('9')
ord('8')
while True:
    x = str(input('wpisz dowolną liczbę jednocyfrową '))
    if (ord(x) > 48) & (ord(x) < 58):
        print(f'wpisałeś poprawnie liczbę {x}')
        break
    else:
        print(f'spróbuj jeszcze raz  ')
        
while True:
    x = str(input('wpisz dowolną liczbę jednocyfrową '))
    if (ord(x) > 48) & (ord(x) < 58):
        print(f'wpisałeś poprawnie liczbę {x}')
        break
    else:
        print(f'spróbuj jeszcze raz  ')
        
#def
def silnia(x):
    silnia = 1
    for i in range(1,x+1):
        silnia = silnia * i
    return silnia
    
silnia(5)
#argumenty funkcji args, kwargs
silnia(x = 5)
silnia(5)
x = 10
silnia(x)
silnia(x=5)
x
silnia(x)
#bezargumentowe
def druk():
    print('blablabla')
    
druk()
#błędy
10/0
10/str(3)
str(3)
x = '10'
try:
    35/x
except:
    print('ciemność widszę, ciemność!')
pass: 
    35/x
try:
    35/x
except:
    print('ciemność widszę, ciemność!')
x = 10
try:
    35/x
except:
    print('ciemność widszę, ciemność!')
    
try:
    35/x
except:
    print('ciemność widszę, ciemność!')
pass:
    35/x
try:
    35/x
except:
    pass
    
movies = ['Garden', 'Oasis', 'Pennypacker', 'Vangelis', 'Sumatra_plan']
movies[0]+'.mkv'
def convert(x):
    return x+'.mkv'
    
list(map(convert, movies))
filmy = list(map(convert, movies))
filmy
def conv_mp4(x):
    x.split('.')[0]+'.mp4'
    
filmy[0]
conv_mp4(filmy[0])
def conv_mp4(x):
    return x.split('.')[0]+'.mp4'
    
conv_mp4(filmy[0])
map(conv_mp4, filmy)
list(map(conv_mp4, filmy))
for e in filmy:
    print(conv_mp4(e))
    
lista.filmow = list()
x = list()
x
for e in filmy:
    print(conv_mp4(e))
    x.append(conv_mp4(e))
    
x
x
get_ipython().run_line_magic('save', 'lekcja7_roz.py 90-185')
