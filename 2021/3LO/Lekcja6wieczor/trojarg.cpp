#include <iostream>
using namespace std;

int main()
{
	
	int a,b, wynik;
	cout << "podaj liczbe ca�kowit� a   ";
	cin >> a;
	
	cout<< "podaj liczbe� ca�kowit� b   ";
	cin >> b;
	
		
	wynik = a>b ? a : b;
	
	cout << "wynik =   " << wynik << endl;
	
	return 0;
}
