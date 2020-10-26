#include <iostream>

int main()
{

int a=10;
float x;

std::cout << "zmienna a = " << a << std::endl;
x = a + 3/4;
std::cout << "wykonujemy dzialania x = a+3/4 = " << x << std::endl;

x = a + 3/4.0;

std::cout << "a teraz wykonujemy dzialania x = a+3/4.0 = " << x << std::endl;
return 0;
}

