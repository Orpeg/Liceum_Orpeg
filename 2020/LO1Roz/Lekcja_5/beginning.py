print('Witajcie w świecie Pythona')

print("wprowadź liczbę nieparzystą")
n = int(input(' n  = '))
while n%2 == 0:
    print("wprowadziłeś błędną liczbę, spróbuj ponownie")
    n = int(input(' n = '))
print('doskonale! liczba ', n , 'jest nieparzysta')
