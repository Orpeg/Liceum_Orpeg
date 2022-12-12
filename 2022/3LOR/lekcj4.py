# coding: utf-8
import pandas as pd; import openpyxl; import numpy as np; import matplotlib.pyplot as plt
import itertools
df = pd.read_excel('garda.xlsx', index_col=0)
df
df.loc[:,'Nazwisko i imię'].str.split(' ').str[0].to_list()
df = pd.read_excel('garda.xlsx', index_col=0)
df
df['Do wypłaty'].sum()
round(df['Do wypłaty'].sum(),2)
df['Do wypłaty'].mean()
df['Do wypłaty'].median()
df.plot(kind='hist', alpha = 0.5, grid = True, legend = True, title =' zarobki 2007')
plt.show()
df.loc[:, 'Imię i nazwisko']
df.columns
df.loc[:,'Nazwisko i imię']
df.loc[:,'Nazwisko i imię'].str.split(' ').str[0]
df.loc[:,'Nazwisko i imię'].str.split(' ').str[0].to_list()
nazwiska = df.loc[:,'Nazwisko i imię'].str.split(' ').str[0].to_list()
nazwiska
# tryby r w a
file = open('nazwiska.txt', mode = 'w', encoding='utf-8')
for n in nazwiska:
    file.writelines(n)
file.close()
get_ipython().run_line_magic('ls', '')
file = open('nazwiska.txt', mode = 'w', encoding='utf-8')
for n in nazwiska:
    file.writelines(n+'\n')
file.close()
file.closed
file = open('nazwiska.txt', mode = 'w', encoding='utf-8')
file.tell()
file.close()
file = open('nazwiska.txt', mode = 'a', encoding='utf-8')
file.tell()
v = ['Kowalski', 'Nowak', 'Motyka']
for n in v:
    file.writelines(n+'\n')
file.close()
file = open('nazwiska.txt', mode = 'a+', encoding='utf-8')
for n in nazwiska:
    file.writelines(n+'\n')
    
nazwiska
file.tell()
file.close()
file.closed
#zip
names = ['Lech', 'Sławomir', 'Mateusz', 'Wojciech']
roles = ['uczeń', 'uczeń', 'agent', 'nauczyciel']
zip(name,roles)
zip(names,roles)
list(zip(names,roles))
for name, role in zip(names, roles):
    print(f'{name} to nasz {role}')
    
for name, role in zip(names, roles):
    print(f'{name.upper()} to nasz {role.upper}')
    
for name, role in zip(names, roles):
    print(f'{name.upper()} to nasz {role.upper()}')
    
for i, name in enumerate(names):
    print(f'{i+1}  {name}')
    
import itertools
i = 0
for i, name, role in zip(itertools.count(), names, roles):
    print(f'{i}  {name} to nasz {role}')
    
for i, name, role in zip(itertools.count(), names, roles):
    print(f'{i+1}  {name} to nasz {role}')
    
file = open('liczby_nat.txt', mode = 'r')
numbers = []
for n in file:
    numbers.append(int(n))
file.close()
numbers
sum(numbers)
avg(numbers)
mean(nmbers)
import numpy as np
np.mean(numbers)
np.std(numbers)
np.median(numbers)
numbers
numbers3=[]
numbers3
for n in numbers:
    numbers3.append(n+3)
    
numbers3
print(list(zip(numbers, numbers3)))
file = open('liczby_nat_plus3.txt', mode='w')
for n in numbers3:
    file.write(n+'\n')
file.close()
file = open('liczby_nat_plus3.txt', mode='w')
for n in numbers3:
    file.writelines(n+'\n')
file.close()
file = open('liczby_nat_plus3.txt', mode='w')
for n in numbers3:
    file.writelines(str(n)+'\n')
file.close()
len(numbers) == len(numbers3)
