#include <iostream>
int main()
{
float a,b,c,d;
std::cout << "podaj liczbe przejechanych kilometrow" << std::endl;
std::cin >> a;
std::cout << "podaj ilosc zuzytej benzyny" << std::endl;
std::cin >> b;
c=b/a*100;
d=a/b;

std::cout << "zuzyles " << c << "  litrow benzyny na 100 km" << std::endl;
std::cout << "przejechales" << d << "kilometrow na litrze paliwa" << std::endl;
return 0;
}
