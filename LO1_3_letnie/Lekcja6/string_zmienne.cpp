#include <iostream>
#include <string>

int main()
{

std::string imie;
int wiek;
std::cout << "Podaj swoje imie" << std::endl;
std::cin >> imie;
std::cout << "Witaj ,  "  << imie << "!!" << std::endl;
std::cout << "ile masz lat? " << std:: endl;
std::cin >> wiek;
std::cout << "O!!,  "<< imie << ",  Masz  " << wiek << "  lat!  \n";


if (wiek>=18){
	std::cout << imie << " ,  jesteś dorosły \n";
	if (wiek>=90)
		std::cout << "piekny wiek, gratulacje !!\n";

}
else {

	std::cout << imie << " ,  jesteś jeszcze dzieckiem \n";
	std::cout << "\n";
}








	return 0;
}