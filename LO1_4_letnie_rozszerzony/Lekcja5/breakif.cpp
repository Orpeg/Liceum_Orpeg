#include <iostream>

// instrukcja break

int main(){
int n;
std::cout << "podal liczbę całkowitą" << "\n";
std::cin >> n;

std::cout << "badamy czy jest to liczba parzysta "<< std::endl;
n%2 == 0 ? std::cout << "parzysta" << std::endl : std::cout <<"nieparzysta" << std::endl;





	return 0;
}