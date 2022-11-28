# coding: utf-8
napis = 'Małgosia'
napis1 = 'dziewczyna'
print(napis + ' to piękna ' + napis1)
text = napis + ' to inteligentna ' + napis1
print(text)
text.upper()
text.lower()
text.title()
text.startswith('Małgosia')
text.endswith('dziewczyna')
bool(1)
bool(0)
bool('Martyna')
'Martyna' or 0
'Martyna' and 1
'Martyna' and 0
napis[::1]
text[::-1]
text[10:1:-1]
a,b = 20,44
print(a+b)
print('a+b')
print('21'+'\32')
print('21'+'\n32')
plik = open('file.txt', mode = 'r', encoding = 'utf-8')
get_ipython().run_line_magic('ls', '')
file = open('plik.txt', mode='r', encoding='utf-8')
print(file.read())
file.close()
file.closed
file = open('plik.txt', mode='r', encoding='utf-8')
for line in file:
    print(line)
file.close()
file.closed
fruits = ['Jabłko\n',
'Mango\n',
'Pomarańcza\n',
'Cytryna\n',
'Banan\n',
'Gruszka\n',
'Arbuz\n',
'Śliwka\n']
new_file = open('owoce.txt', mode='w', encoding='utf-8')
new_file.writelines(fruits)
new_file.close()
new_file = open('owoce.txt', mode='r', encoding='utf-8')
for line in new_file:
    print(line)
new_file.close()
warzywa = ['Marchewka\n', 'Buraczek\n', 'Ziemniak\n']
new_file = open('owoce.txt', mode='a+', encoding='utf-8')
for line in warzywa:
    new_file.write(line)
print('miejsce kursora  ', new_file.tell())
new_file.closed
new_file.close()
