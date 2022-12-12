# coding: utf-8
2+2
#praca ze zmiennymi typu string
napis= 'Małgosia'
napis1 = 'dziewczyna'
a = 17
print(f'{napis} ma {a} lat')
print(napis + ' to piękna ' + napis1)
print(napis + ' to piękna ' + napis1)
print(napis, ' to piękna ', napis1)
tekst = napis, ' to piękna ', napis1
tekst
print(tekst)
text = napis + ' to piękna ' + napis1
text
print(text)
#metody
text
text.upper()
text.lower()
text.title()
text.startswith('Małgosia')
text.startswith('Kacper')
text.endswith('dziewczyna')
text.endswith('false')
text.endswith('chłopak')
'piękn' in text
text
text = '    Małgosia to piękna dziewczyna     '
text
text.strip()
text
text = text.strip()
text
text = ' Małgosia     to      piękna       dziewczyna    '
text
text
text.strip()
text.strip().replace('  ',' ')
text.strip().replace('  ',' ').replace('  ',' ')
text
text = text.strip().replace('  ',' ').replace('  ',' ')
text
text[::1]
text[::2]
text[::-1]
s = list(text[::-1])
s
s = text[::-1].split(' ')
s
for index, value in enumerate(s):
    print(f'{index +1}, guest what you....{value})
for index, value in enumerate(s):
    print(f'{index +1}, guest what you....{value}')
    
for index, value in enumerate(s):
    print(f'{index +1}. guest what you....{value}')
    
for index, value in enumerate(s.stip()):
    print(f'{index +1}. guest what you....{value}')
    
s = text[::-1].strip()
s
s = text[::-1].replace('  ', ' ').replace('  ', ' ')
s
for index, value in enumerate(s):
    print(f'{index +1}. guest what you....{value}')
    
s
a = list(s.split(' '))
a
for index, value in enumerate(a):
    print(f'{index +1}. guest what you....{value}')
    
for index, value in enumerate(a):
    print(f'{index}. guest what you....{value}')
    
for index, value in enumerate(a):
    print(f'{index +1}. guest what you....{value}')
    
a > b
'a'>'b'
'a'>'b'
'a'<'b'
a = 3
b = 10
a,b
a>b
a<b
'a' < 'b'
chr('a')
ord('a')
ord('A')
ord('b')
ord('B')
ord('a') - ord('A')
for e in range(65, 92):
    print(chr(e),end =', ')
    
for e in range(65, 91):
    print(chr(e),end =', ')
    
ord('a')
for e in range(97, 123):
    print(chr(e),end =', ')
    
for i in ['0','1','2','3']:
    print(ord(i), end = ', ')
    
znaki = ['ą', 'ć', 'ę', 'ł','ń','ó', 'ź', 'ż']
znaki
for e in znaki:
    print(ord(e), end=' ')
    
