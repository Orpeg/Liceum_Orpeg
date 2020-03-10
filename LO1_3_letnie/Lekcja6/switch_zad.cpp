#include <iostream>

int main()
{
    int x;
    std::cout << "podaj liczbę cyfrową" << std::endl;
    std::cin >> x;
    switch (x)
    {
        case 0:
            std::cout << "zero \n";
            break;
        case 1:
            std::cout << "jeden \n";
            break;
        case 2:
            std::cout << "dwa \n";
            break;
        case 3:
            std::cout << "trzy \n";
            break;
        case 4:
            std::cout << "cztery \n";
            break;
        case 5:
            std::cout << "pięć \n";
            break;
        case 6:
            std::cout << "sześć \n";
            break;
        case 7:
            std::cout << "siedem \n";
            break;
        case 8:
            std::cout << "osiem \n";
            break;
        case 9:
            std::cout << "dziewięć \n";
            break;
        
    }
    
    return 0;
    
}
