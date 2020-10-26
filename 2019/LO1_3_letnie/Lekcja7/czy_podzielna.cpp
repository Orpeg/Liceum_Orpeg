#include <iostream>

bool przez_trzy(int x)
{
    
    if (x%3==0)
        return true;
    return false;
    
}

bool przez_piec(int x)
{
    
    if (x%5==0)
        return true;
    return false;
    
}

bool parzysta(int x)
{
    
    if (x%2==0)
        return true;
    return false;
    
}

int main()
{
    
    int x;
    std::cout << "podaj liczbę x = ";
    std::cin >> x;
    if (parzysta(x))
        std::cout << "liczba "<<x << " jest parzysta" << std::endl;
    if (przez_trzy(x))
        std::cout << "liczba " << x << " jest podzielna przez 3" << std::endl;
    if (przez_piec(x))
        std::cout << "liczba " << x << " jest podzialna przez 5" << std::endl;
    
    for (int i=1; i<x; ++i)
    {
        if (parzysta(i))
            std::cout << i << "\t";
        else if (przez_trzy(i))
            std::cout << i << "\t";
        else if (przez_piec(i))
            std::cout << i << "\t";
        
    }
        std::cout << "\n" << std::endl;
        std::cout << "liczby parzyste podzielne przez 3 i 5 w zakresie do x= " << x << std::endl;
        
        for (int i = 1; i < x; ++i)
        {
            if(parzysta(i) && przez_piec(i) && przez_trzy(i))
                std::cout << i << "\t";
            
        }
    std::cout << std::endl;
    
    return 0;
}
