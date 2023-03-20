# coding: utf-8
b= '4'
a
b
a+b
a+'\n'+b
int(a)
int(a) + int(b)
c = '3,14'
c
float(c)
float(c.replace(',','.'))
pesel = 0411354989
pesel = '0411354989'
pesel
len(pesel)
pesel.zfill(11)
#petla for
range(10)
list(range(10))
suma = 0
for x in range(10+1):
    suma +=x
print(suma)
suma = 0
for x in range(0, 10+1, 2):
    suma = suma +x
print(suma)
#pętla while
i = 0
while i < 10:
    print(i)
    i += 1
    
while i =< 10:
    print(i)
    i += 1
while i <= 10:
    print(i)
    i += 1
    
i =  0
while i <= 10:
    print(i)
    i += 1
    
# petla niesksonczona
while True:
    x = int(input('wpisz liczbę parzysta '))
    if x%2 == 0:
        print(f'wpisałeś poprawnie liczbę {x}')
        break
    else:
        print(f'spróbuj jeszcze raz  ')
        
while True:
    x = int(input('wpisz liczbę parzysta '))
    if x%2 == 0:
        print(f'wpisałeś poprawnie liczbę {x}')
        break
    else:
        print(f'spróbuj jeszcze raz  ')
        
movies = ['Garden', 'Oasis', 'Pennypacker', 'Vangelis', 'Sumatra_plan']
movie[0]
movies[0]
movies[-1]
movies[0]+'.mkv'
[x+'mkv' for x in movies]
[x+'.mkv' for x in movies]
movies
filmy = [x+'.mkv' for x in movies]
filmy
film[0]
filmy[0]
filmy[0].split('.')[0]
filmy[0].split('.')[0]+
filmy[0].split('.')[0]+'.mp4'
def druk():
    print('23 jas i malgosia')
        
druk
druk()
def zamiana(x):
    return x.split('.')[0]+'.mp4'
    
x = filmy[0]
x
zmiana(x)
for e in filmy:
    print(e)
    
for e in filmy:
    print(zmiana(e))
    
list(map(zmiana, filmy))
10/0
try:
    10/0
except:
    print('ciemnosc widze')
    
