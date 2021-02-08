#include <iostream>

int main()
{

int x; //liczba lat
const int y = 365;  //liczba dni w roku

std::cout << "Podaj liczbę lat" << std::endl;
std::cin>>x;


std::cout << "obliczamy ilosc dni" << std::endl;
std::cout << "dla liczby lat "<<x<< " ilość dni wynosi "<<x*y<< std::endl;



	return 0;
}