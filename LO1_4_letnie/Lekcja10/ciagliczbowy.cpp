#include <iostream>
using namespace std;
// Zadanie. dany jest ciag liczbowy a(n) = n/9 + 9/n, n>1. Oblicz sume 100 pierwszych wyrazów tego ciągu. 
double ciag(int n)
{

return 2*n - 1;

}

int main()
{

float suma = 0;
cout << "liczymy sume 100 wyrazow ciagu liczbowego" << endl;
for (int i=1;i<=100;++i)
{
// cout << ciag(i)<< endl;	
suma += ciag(i);

}

cout << "suma 100 wyrazow ciagu liczbowego a(n)  =   " << suma << endl;
cout << "wyraz 1  " << ciag(1) << "  wyraz 100   " << ciag(100) << endl;

	return 0;
}