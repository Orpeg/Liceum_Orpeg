#include <iostream>

int main() {

int a;
std::cout << "to jest pierwsza linia" << std::endl;
std::cout << "podaj warto�� a = " << std::endl;
std::cin >> a;
std::cout << "podale� warto�� a = " << a << std::endl;
std::cout << "zbadamy czy a jest parzyste"<< std::endl;
if (a%2 == 0 ){
	std::cout << "liczba a = "<< a << "   jest parzysta";
}
else{
std::cout << "liczba a jest nieparzysta" << std::endl;
	
	
}	
	
	
return 0;
}

