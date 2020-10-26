#include <iostream>

int main()
{

int a;
std::cout << "podaj liczbę całkowitą  a = "<< std::endl;
std::cin >> a;
if (a%2 == 0){

	std::cout << "podana liczba a =" << a << "  jest parzysta"<< std::endl;

}else{

	std::cout << "podales liczbe nieparzysta "<< std::endl;
}


return 0;
}