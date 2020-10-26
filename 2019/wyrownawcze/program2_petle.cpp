#include <iostream>

int main()

{
// to jest linia komentarza
// działania na różnych zmiennych

int a = 10;
float b = 3;

float x;
std::cout << "1 . DZIAŁANIA NA ZMIENNYCH" << std::endl;
x = a/b;

std::cout << " >> działania na liczbach całkowitych"<<"\n" << std::endl;
std::cout << "x = a/b = "<< x << std::endl;

std::cout << "dzielenie przez 4"<<std::endl;
std::cout << "a/4 = "<< a/4.0 <<std::endl;

std::cout << "dzielenie przez 2.5"<< std::endl;
std::cout << "a/2.5 = " << a/2.5 << std::endl;
// zakładanie pętli while i for

std::cout << "\n"<< "ZAKŁADANIE PĘTLI " << "\n" << std::endl;
std::cout << "  >>Petla while i przerwanie break" << std::endl;
int j=1;
while (j <= 10){
	std::cout << "obieg pętli nr  " << j << std::endl;
	if(j == 5)
		break;
	j = j+1;
}


std::cout <<"  >> Pętla for i przerwanie break" <<"\n"<< std::endl;

for (int i=1; i <= 10; i++){

	std::cout << "pętla for obieg nr   " << i << std::endl;
	if (i == 4)
		break;
}

return 0;
}



