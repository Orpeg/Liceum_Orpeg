#include <iostream>
// pętla for definicja
// for (wyrażenie inicjujące;warunek;wyrażenie modyfikujące) 
// {
//  blok kodu   
// }
int main()
{
    int n;
    double suma = 0.0;
    std::cout << "Z ilu liczb liczymy średnią ? ";
    std::cin >> n ; /* z ilu liczb średnia? */
    std::cout << "Wprowadź liczby";
    for (int i = 0; i < n; ++i)
    {
        std::cout << "liczba nr " << i+1 << ":   ";
        double liczba;
        std::cin >> liczba;
        suma += liczba;
        std::cout << std::endl;
    }
//     w pewnym momencie zmienna 'i' zrówna się wartością
//     ze zmienna 'n' więc warunek (i<n) będzie fałszywy
//     i pętla się zakończy
    
    std::cout << "Średnia arytmetyczna: " << suma / n << '\n';
    
    return 0;
}
