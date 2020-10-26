#include <iostream>

bool czy_parzysta(int x)
{

	if (x%2 == 0)
		return true;
	return false;
}

int main()
{

// badamy parzystosc liczby
int x;
std::cout << "podaj liczbę całkowitą dodatnią" << std::endl;
std::cin >> x ;
if(czy_parzysta(x))
{
	std::cout << "liczba jest parzysta"<< std::endl;
	return 1;
}
std::cout << "liczba jest nieparzysta"<< std::endl;	
return 0;
}