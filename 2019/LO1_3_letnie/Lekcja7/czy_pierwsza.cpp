#include <iostream>

bool liczba_piewsza(int x)
{
    if (x == 1)
        return true;
    for (int i = 2; i < x ; ++i)
    {
        if (x%i == 0)
            return false;
        
    }
    return true;
    
}


int main()
{
    int x;
    std::cout << "podaj liczbę  ";
    std::cin >> x;
    if (liczba_piewsza(x))
    {
        std::cout << "podana liczba x  " << x << " jest liczbą pierwszą" << std::endl;
        return 0;
        
    }
        std::cout << "podana liczba " << x << " nie jest liczbą pierwszą " << std::endl;
        
    
    return 0;
}
