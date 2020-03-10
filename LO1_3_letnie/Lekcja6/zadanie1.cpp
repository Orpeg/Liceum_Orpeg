#include <iostream>

int licz()
{
    int wynik;
    for (int i =1 ; i<=10;i++){
        std::cout << i << "\t" ;
        wynik = i;
    }
        std::cout << std::endl;
    return wynik;
}

int main ()
{
    int i = licz();
    while (i>0)
    {
        
    std::cout<<"piszę linie nr " << i << std::endl;
        i -= 1;
    }
    
    return 0;
}
