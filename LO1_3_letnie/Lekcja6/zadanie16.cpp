#include <iostream>
//#include <stdio.h>
int main (){
double spalonoPaliwa, jedenkilometr, przejechanekm, benzyna;
std::cout << "liczba przejechanych kilometrow?";
std::cin >> przejechanekm;
std::cout << "Ilosc zuzytej benzyny?";
std::cin >> benzyna;
spalonoPaliwa = (benzyna/przejechanekm)*100;
//zuzycie benzyny w litrach na 100 km;
printf("%.1f",spalonoPaliwa);
//std::cout << spalonoPaliwa;
std::cout << "/100 km\n";
jedenkilometr = 100/spalonoPaliwa;
//przejechanych kilometrow na jeden litr paliwa;
printf("%.1f",jedenkilometr);
//std::cout << jedenkilometr;
std::cout << "km na litr paliwa \n";
return 0;
}
