#include <iostream>

// obliczenia w petli

int main()
{
int silnia=1, n;

std::cout << "podal liczbę calkowitą n < 10"<< std::endl;
std::cin >> n;

for (int i=1; i<=n;i++){

	silnia*=i;
}
std::cout <<"silnia = "<< silnia <<std::endl;
return 0;
}