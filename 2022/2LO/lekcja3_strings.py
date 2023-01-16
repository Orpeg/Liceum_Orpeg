# coding: utf-8
#strings
'this is a string'
"this is a string too"
"""
this is a string in a few line
line 2 
"""
input('press any key')

# przy uzyciu trzech cudzyslowow mamy wiele linii oddzielonych znakiem zlamania linii \n
# uzyciei ze zmiennymi
a, b = 2,3
print(f'suma liczb a + b = {a+b}')
name = 'Mateusz'

input('press any key')


print(f'Twoje imię jest {name}')
name = input('Jak się nazywasz?     ')
print(f'Jak sie masz {name} ?')


input('press any key')

suma = a+b
print(f'suma = {suma}')


input('press any key')

f'suma=a+b= {suma}'
"""
a = {a}
b = {b}
suma = {a+b}
"""


input('press any key')

#methods
name = 'mateusz'
print(name)
print(name.title())
print(name.upper())
print(name.lower())

input('press any key')

name = '   ma teus z '
print(name)
print(name.strip())
print(name.replace(' ', ''))
print(name.replace(' ', '').title())

input('press any key')

zdanie = 'Mateusz lubi naleśniki z serem'
print(f'zdanie = {zdanie}')
print(zdanie.startswith('Mateusz'))
print(zdanie.startswith('mateusz'))
print(zdanie.endswith('serem'))
print(zdanie.endswith('serem'))
print(zdanie.endswith('naleśniki'))
przyslowie = 'gdzie jest kucharek 6 tam nie ma co jesc'
print(przyslowie)
input('press any key')

print(przyslowie[::-1])
print(przyslowie[6:18:1])
print(przyslowie.split(' '))
lista = przyslowie.split(' ')
print(lista)   
input('press any key')

for e,v in enumerate(lista):
    print(f'{e+1}. {v}')
    
for e,v in enumerate(lista):
    print(f'{e+1}. {v[::-1]}')
    
    
input('press any key')

for e in ['a','b','c','d']:
    print(ord(e))
    
ord('a')
input('press any key')

print(ord('A'))
chr(32)
chr(31)
