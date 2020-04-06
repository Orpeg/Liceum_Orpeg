#include <iostream>
 
 int main(){

int x; //to jest deklaracja zmiennej x

std::cout << "to jest pierwszy program" << "\n";//\n oznacza złamanie linii
std::cout << "podaj liczbę całkowitą" << std::endl;//endl jest także końcem linii
std::cin >> x;//tak się wprowadza wartość pod zmienna
std::cout << "podałeś liczbę x = " << x << std::endl;
// obliczenia na zmiennej y, która jest integer
int y = 10;
float c = 10.0;//to jest zmienna float
float wynik;//ta zmienna jest do wyniku obliczen

wynik = x/y;//następuje obcięcie po przecinku, bo obliczenia na intenger
std::cout << "wynik oblieczen na integer wynik  = " << wynik << std::endl;
wynik = x/c; //te obliczenie jest typu float, bo y jest float
std::cout << "wynik oblieczen na mieszanych typach wynik = " << wynik << std::endl;



	return 0;
 }