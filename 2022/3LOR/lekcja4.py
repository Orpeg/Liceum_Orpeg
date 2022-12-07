# coding: utf-8
file = open('file.txt', mode='r', encoding='utf-8')
for line in file:
    print(line)
file.close()
for line in file:
    print(line, end='')
file.close()
for line in file:
    print(line, end='\n')
file.close()
file.closed
lst = ['Stanisław', 'Judyta']
lst
file = open('file.txt', mode='a', encoding='utf-8')
for line in lst:
    file.write(line)
    
file.close()
lst = ['Stanisław\n', 'Judyta\n']
file = open('file.txt', mode='a', encoding='utf-8')
for line in lst:
    file.write(line)
file.close()
file = open('file.txt', mode='a', encoding='utf-8')
file.tell()
file.seek(0)
file.tell()
file = open('file.txt', mode='a', encoding='utf-8')
for line in lst:
    file.write(line)
file.close()
a = []
file = open('liczby_nat.txt', mode='r', encoding = 'utf-8')
for line in file:
    a.append(line)
file.close()
file.closed
a
file = open('liczby_nat.txt', mode='r', encoding = 'utf-8')
a =[]
for line in file:
    a.append(int(line))
file.close()
file.closed
a
for e in a:
    print(a, end=', ')
    
len(a)
a.max()
max(a)
max(a)
min(a)
print(sum(a))
lst
b
b = []
for i in a:
    a.append(i+3)
    
a
len(a)
file = open('liczby_nat.txt', mode='r', encoding = 'utf-8')
a = []
for line in file:
    a.append(int(line))
file.close()
a
len(a)
b
for e in a:
    b.append(e+3)
    
b
max(b)
min(b)
file = open('liczby_nat_plus3.txt', mode='w', encoding = 'utf-8')
for e in b:
    file.write(str(e)+'\n')
file.close()
max(b)
min(b)
import numpy as np
np.mean(b)
avg(b)
np.std(b)
np.std(a)
np.mean(a)
np.mean(b)
d = np.array(a)
d
d-3
d
d*2
map(lambda x: x+2, d)
g = map(lambda x: x+2, d)
print(g)
g = map(lambda x: x+2, a)
print(g)
map(lambda x: x+2, [2,3,4])
file = open('text.txt', mode='r', encoding = 'utf-8')
text = []
for line in file:
    text.append(line)
file.close()
text
len(text)
text
lista = text
lista
text = lista[0]
text
type(text)
text.count('all')
text.count('the')
text.count('human')
print('\n')
print('\\n')
print('a = 5 \n b = 3')
print('a = 5 \nb = 3')
