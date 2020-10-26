#include <iostream>

int main(){
std::cout <<"liczymy silnię liczby n " << std::endl;

int n, silnia = 1;

std::cout << "podaj liczbe n =  " << std::endl;
std::cin >> n;

if (n == 0){
	silnia = 1;
}
for (int i = 1; i <= n; i++) {

	silnia *=i;
}

std::cout << "silnia " << n <<  "! =   " << silnia << std::endl;



	return 0;
}