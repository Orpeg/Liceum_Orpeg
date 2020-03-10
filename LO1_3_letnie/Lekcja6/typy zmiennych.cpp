#include <iostream>

int main()
{
    int a,b;
    bool log;
    float x;
    std::cout << "wprowadz liczbę \n";
    std::cin >> a;
    std::cout << "wprowadziłeś liczbę a = " << a << std::endl;
    std::cout << "będziemy teraz dzielić liczbę a przez 10 \n";
    b = a/10;
    std::cout << "wynik dzialania b = a/10 = " << b << std::endl;
    std::cout << "czy wynik jest taki jakiego oczekiwałeś? \n";
    std::cin >> log;
    if (log)
        std::cout << "dlatego, bo liczba a/10 dzieliła się bez reszty \n";
    else
    {
        
        std::cout << "dlatego, bo liczba a/10 nie jest liczbą całkowitą, jest to dzielenie z resztą \n";
        std::cout << "co więcej, wynik jest liczbą float x = ";
        x = a/10.0;
        std::cout << x << std::endl;
        std::cout << "a teraz pomnóżmy liczbę x przez 4 \n";
        x = 4.0*x;
        std::cout << "wynik mnożenia 4*x = " << x << std::endl;
        
    }
    
    return 0;
}
