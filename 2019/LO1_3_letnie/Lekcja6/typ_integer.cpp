#include <iostream>


int main()
{
    int a, b = 10; /*deklaracja zmiennych a , b i nadanie zmiennej b wartości 10*/
    std::cout << "podaj liczbę a = ";
    std::cin >> a;
    std::cout <<"suma liczb a+b = " << a+b << std::endl;
    std::cout << "dzielenie przez 10: a/10 = " << a/10 << std::endl;
    
    float wynik = a/10;
    std::cout << "wynik z obcięciem  wynik = a/10 = " << wynik << std::endl;
    wynik = a/10.0;
    std::cout << "wynik poprawny wynik = a/10.0 = " << wynik << std::endl;
    
    
    
    return 0;
}
