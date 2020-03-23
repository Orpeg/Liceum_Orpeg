#include <iostream>

int silnia(int n){
	if (n == 1 || n == 0){
		return 1;
	}

	return silnia(n-1)*n;
}

// liczymy rekurencją

int main()
{

int n;

std::cout << "podaj liczbę n < 10" << std::endl;
std::cin >> n;
std::cout << "silnia liczby n = "<<n<<" wynosi "<< silnia(n)<<std::endl;
return 0;

}