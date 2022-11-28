# coding: utf-8
file = open('file.txt', mode='r', encoding='utf-8')
print(file.read())
file.closed
file.close()
file = open('file.txt', mode='r', encoding='utf-8')
for line in file:
    print(line)
file.close()
file.closed
file = open('file.txt', mode='r', encoding='utf-8')
file.tell()
print(file.read())
file.tell()
print(file.read())
file.seek(0)
print(file.read())
imiona = ['Jadwiga', 'Janina', 'Kuba']
file = open('file.txt', mode='a+', encoding='utf-8')
print(file.read())
file.tell()
file.writelines(imiona)
file.tell()
file.seek(0)
print(file.read())
imiona = ['Jadwiga\n', 'Janina\n', 'Kuba\n']
file.tell()
file.writelines(imiona)
file.seek(0)
for line in file:
    print(line)
    
file.closed
file.close()
file.closed
imiona
file = open('file.txt', mode='w+', encoding='utf-8')
print(file.read())
file.tell()
file.writelines(imiona)
file.tell()
file.close()
file = open('file.txt', mode='r', encoding='utf-8')
print(file.read())
file.closed
file.close()
file = open('file.txt', mode='r', encoding='utf-8')
print(file.read())
file.tell()
file.seek(0)
for line in file:
    print(line.upper())
    
file.tell()
file.close()
file.closed
