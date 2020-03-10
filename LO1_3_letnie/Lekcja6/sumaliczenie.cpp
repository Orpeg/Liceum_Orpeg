#include <iostream>
using namespace std;

int ciag(int n)
{

	return 2*n-1;
}

int main()
{

long int suma = 0;
for (int i = 0; i<101; ++i)
{
suma += i;

}

cout << "suma wynosi suma = " << suma<<endl;

// dany jest ciag a(n) = 2n-1. Oblicz sumę 100 pierwszych wyrazów
// tego ciągu.

suma = 0;

for (int i=1;i<51;++i)
{

suma += ciag(i);

}

cout << "suma 50 wyrazow ciagu a(n)=2n-1 wynosi " << suma << '\n';
	return 0;
}
