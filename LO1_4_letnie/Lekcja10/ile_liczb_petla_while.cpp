#include <iostream>
int main()
{
    
    int x, wynik = 0;
    std::cout << "Wprowadź dowolną liczbę całkowitą   ";
    std::cin >> x;
    
    while (x!=0){
        
        x /= 10;
        ++wynik;
        
    }
    
    std::cout << "Liczba cyfr:  " << wynik << '\n';
    
    return 0;
    
}
