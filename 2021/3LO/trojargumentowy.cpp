#include <iostream>
//wczytaj 2 liczby rzeczywiste i jezeli a<b to podaj sum b-a, inaczej podaj r�znice a-b
int main()
{
	
	float a, b;
	std::cout << "Podaj liczb� a   " ;
	std::cin >> a;
	std::cout << "Podaj liczb� b   ";
	std::cin >> b;
	
	float wynik = a<b? b-a:a-b;
	
	std::cout << "wynik  =   "<< wynik << " \n";
	
	
	
	return 0;
}
