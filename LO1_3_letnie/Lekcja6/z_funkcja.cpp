#include <iostream>

int function(int x, bool a)
{
    for (int i=2; i<x ;++i)
    {
        if (x%i == 0){

            std::cout << "liczba x jest podzielna przez " << i << std::endl;
            a = 1;
        }
    }
    if (a == 0)
        std::cout << "nie jest podzielna" << std::endl;
    
    return 0;
}

int main()
{
/*to jest komentarz
w dwóch liniach*/
    int x;
    bool a = 0;
    std::cout << "podaj liczbę x = ";
    std::cin >> x;
    std::cout << std::endl;
    function(x, a);
    
    return 0;
}
