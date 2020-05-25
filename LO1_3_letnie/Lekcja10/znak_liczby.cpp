#include <iostream>

int main()
{
    
    int x;
    std::cout << "Podaj liczbę całkowitą  x = ";
    std::cin >> x;
    std::cout << std::endl << "Podana liczba jest ";
    if (x>0)
    {
        std::cout << "dodatnia \n";
        
    }else if (x < 0)
    {
        std::cout << "ujemna  \n";
        
    } else {
        
        std::cout << "zerem \n";
    }
    
    return 0;
}
