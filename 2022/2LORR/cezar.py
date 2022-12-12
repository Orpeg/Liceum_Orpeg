# coding: utf-8
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
        
