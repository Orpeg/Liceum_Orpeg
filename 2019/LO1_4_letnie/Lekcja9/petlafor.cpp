#include <iostream>

int main(){
	int x, wynik = 0;
	std::cout << "wprowadz dowoln¹ liczbê calkowita   ";
	std::cin >> x;
	
	while (x != 0){
		wynik /= 10;
		++wynik;
		
		
	}
	
	std::cout << "liczba sklada siê z " << wynik << "znakow"<< std::endl;
	
	
	return 0;
}
