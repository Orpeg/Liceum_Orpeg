#include <iostream>

int main(){

int x, wynik = 0;
std::cout << "podaj liczbe całkowitą" << std::endl;
std::cin >> x;
while (x != 0){

x/=10;
++wynik;

}


std::cout << "podana liczba sklada sie z " << wynik<< "   znaków" << std::endl;




	return 0;
}