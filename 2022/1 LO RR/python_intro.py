# coding: utf-8
#Listy
snake1 = 'anaconda'
snake2= 'cobra'
snake3='mamba'
#łączenie zmiennych jest niepraktyczne
snake1+snake2+snake3
snakes = [snake1, snake2, snake3]
snakes
#Indexing
snakes[0]
#drukowanie
for e in snakes:
    print(e)
    
#index ujemny
snakes[-1]
snakes[-2]
snakes + 'zmija'
snakes + ['zmija']
snakes
snakes=snakes+['zmija']
snakes
snakes.append('zaskroniec')
snakes
numbers = [1,2,3,4,5]
number
numbers
lista = [snakes, numbers]
lista
snakes[0:1]
snakes[0:2]
#slicing
#exercise. utworz liste piosenek na zabawe karnawalowa
hits = ['"Weightless" - Marconi Union',
'"Hallelujah" - Jeff Buckley',
'"The Scientist" - Coldplay',
'"Stairway to Heaven" - Led Zeppelin',
'"Bohemian Rhapsody" - Queen',
'"Blackbird" - The Beatles',
'"Viva La Vida" - Coldplay',
'"Fix You" - Coldplay',
'"Hey Jude" - The Beatles',
'"Imagine" - John Lennon',
'"Ave Maria" - Franz Schubert',
'"Clair de Lune" - Claude Debussy',
'"Moon River" - Henry Mancini',
'"Misty" - Erroll Garner',
'"Summertime" - George Gershwin']
hits
hits[5]
#dodawanie i odejmowanie
hits
hits.append('cos tam jakass piosenka')
hits
hits.pop()
hits
moja_lista_przebojów = hits
moja_lista_przebojów
hits.append('cos tam jakass piosenka')
moja_lista_przebojów
hits.pop()
moja_lista_przebojów
moja_lista_przebojów = hits.copy()
moja_lista_przebojów
hits.append('cos tam jakass piosenka')
hits
moja_lista_przebojów
dir(hits)
lista
lista[-1]
lista[-1][0]
numbers
numbers = [6,7]
numbers
numbers = [1,2,3,4,5]
numbers.append([6,7])
numbers
del numbers[-1]
numbers
numbers.extend([6,7])
numbers
