#include <iostream>


int main()
{
    int x;
    for (int i = 1 ; i < 10 ; ++i)
        {
        std::cout << "**  **  ";
            
        }
    std::cout << "\n podaj liczbę całkowitą x=  ";
    std::cin >> x;
    
    x%2 == 0 ? std::cout << "\n liczba parzysta" : std::cout << "\n liczba nieparzysta";
    
    std::cout << std::endl;
    
    
    return 0;
}
