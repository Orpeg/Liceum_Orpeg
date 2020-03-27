#include <iostream>

int main(){
// to jest linia komentarza
// działania na różnych zmiennych

	// int a = 10;
	// float b = 3;

	// float x;

	// x = a/b;

	// std::cout << "działania na liczbach całkowitych"<<std::endl;
	// std::cout << "x = a/b = "<< x << std::endl;

	// std::cout << "dzielenie przez 4"<<std::endl;
	// std::cout << "a/4 = "<< a/4.0 <<std::endl;

	// std::cout << "dzielenie przez 2.5"<< std::endl;
	// std::cout << "a/2.5 = " << a/2.5 << std::endl;

int j=1;
while (j <= 10){
	std::cout << "obieg pętli nr  " << j << std::endl;
	if(j == 5)
		break;
	j = j+1;
}
std::cout <<"a tera pętla for" << std::endl;

for (int i=1; i <= 10; i++){

	std::cout << "pętla for obieg nr   " << i << std::endl;
	if (i == 4)
		break;
}




return 0;
}



