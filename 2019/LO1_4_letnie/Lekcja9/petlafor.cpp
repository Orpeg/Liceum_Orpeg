#include <iostream>

int main(){
	int x, wynik = 0;
	std::cout << "wprowadz dowoln� liczb� calkowita   ";
	std::cin >> x;
	
	while (x != 0){
		wynik /= 10;
		++wynik;
		
		
	}
	
	std::cout << "liczba sklada si� z " << wynik << "znakow"<< std::endl;
	
	
	return 0;
}
