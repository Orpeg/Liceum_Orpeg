# coding: utf-8
a = 'Kłamca jest Justyna, prawdę mówi Małgosia'
a
b = 18
print(f'Matyna ma {b} lat')
a[::1]
a[::2]
a[::3]
a[::-1]
# title, upper,lower
a[::-1].title()
a[::-1].lower()
a[::-1].upper()
#startswith endswith
a
a.startswith('Kłamca')
a.endswith('Małgosia')
a.endswith('Martyna')
#ord chr
ord('a')
chr(97)
ord('A')
97-65
b = 'Jerzy'
b
lst = []
for e in b:
    lst.append(ord(e))
    
lst
for e in lst:
    print(chr(e), end='')
    
'ABCD'
'CDAB'
'Jerzy'
lst
for e in lst:
    print(chr(e+3),end='')
    
for e in lst:
    print(chr(e+2),end='')
    
b = b.upper()
b
lst = []
for e in b:
    lst.append(ord(e))
    
lst
for e in lst:
    print(chr(e+2), end ='')
    
ord('Z')
ord('z')
ord('a')
for i in range(90, 98):
    print(chr(e), end ='')
    
for i in range(90; 98):
    print(chr(e), end ='')
for i in range(90, 98):
    print(chr(i), end ='')
    
chr(32)
ord('1')
ord('0')
a
a[::-1].title()
get_ipython().run_line_magic('loadpy', 'parkan.py')
# %load parkan.py
def parkan(s):
    w = ''
    for i in range(0,len(s),2):
        w = w+s[i]
    for i in range(1, len(s),2):
        w = w+s[i]
    return w
    
a
parkan(a)
get_ipython().run_line_magic('loadpy', 'parkan.py')
# %load parkan.py
def parkan(s):
    w = ''
    for i in range(0,len(s),2):
        w = w+s[i]
    for i in range(1, len(s),2):
        w = w+s[i]
    return w
    
a
parkan(a)
get_ipython().run_line_magic('loadpy', 'przestawianie.py')
# %load przestawianie.py
def przestawianie(s):
    t=''
    for i in range(0,len(s)-1,2):
        t=t+s[i+1]+s[i]
    if len(s)%2 !=0:
        t=t+s[len(s)-1]
    return t
    
przestawianie(a)
przestawianie(a).lower()
get_ipython().run_line_magic('loadpy', 'cezar.py')
# %load cezar.py
def cezar(key, s):
    if len(key) < len(s): return 'za krótki klucz'
    s = s.strip().replace(' ','').upper()
    key = key.strip().replace(' ','').upper()
    a = []
    for e in key:
        a.append(ord(e)-65)
    print(f'klucz cyfrowy {a} \n\n')
    i = 0
    print(f'tekst {s} \n\n')
    for e in s:
        x = ord(e)+a[i]
        if x > 90:
            x-=26
        print(chr(x), end = '')
        i+=1
        
a
a = 'MATEMATYKA'
len(a)
a
key = 'Aplikacja Office staje się nową aplikacją Microsoft'
cezar(key, a)
