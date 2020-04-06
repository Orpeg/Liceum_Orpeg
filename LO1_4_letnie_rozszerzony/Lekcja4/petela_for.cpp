#include <iostream>

int main()
{

// zakładamy pętlę for

	for (int i = 1; i < 16 ; i++){

		std::cout << "obieg pętli nr " << i << std::endl;
	}

/*i++ postinkrementacja
++i preinkrementacja*/
std::cout << "teraz zaprezentujemy jak działa post i pre inkrementacja" << std::endl;
std::cout << "..........................................." << std::endl;

int y = 3, w , x = 1;//deklaracje i nadane wartości
std::cout << "x przed zwiększeniem = " << x << " , y = " << y << std::endl;
w = x + y;//wynik przed inkrementacja
std::cout << "w = x+y =" << w << std::endl;//wynik bez inkrementacji
w = x++ + y;//wynik z postinkrementacja, czyli po dodawaniu
std::cout << "zwiększenie x po dodaniu, wynik w bez zmian" << std::endl;
std::cout << "w = " << w << std::endl;
std::cout << "ale x zostało powiększone  x=  " << x << std::endl;//x zostało powiększona po dodawaniu
w = x+y;//nowy wynik
std::cout<< "nowy wynik w =  "<< w << std::endl;
w = --x + y;//ten wynik to predekrementacja, najpierw zmniejszamy x
std::cout << "x = " << x << ",      x zostało zmiejszone "<< std::endl;

std::cout << "wynik z pomnieszonym x wynosi w = " << w << std::endl;


	return 0;
}