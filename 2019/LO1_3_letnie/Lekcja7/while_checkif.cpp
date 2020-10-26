#include <iostream>

int main()
{
// pętla while do sprawdzania warunku wejściowego
int x;
std::cout << "podaj liczbę parzystą 100 > a > 10"<< std::endl;
std::cin >> x;

while (x%2 != 0 || x < 10 || x > 100){

std::cout << "podałeś błędną liczbę " << std::endl;
std::cout << "spróbuj jeszcze raz " << std::endl;
std::cin >> x;

	}
// prawo de morgana !(a && b) = !a || !b
std::cout << "podałeś liczbę a = "<< x << std::endl;
	return 0;
}
