#include <iostream>
using namespace std;

int main()
{
	
	int a,b, wynik;
	cout << "podaj liczbe ca³kowit¹ a   ";
	cin >> a;
	
	cout<< "podaj liczbeê ca³kowit¹ b   ";
	cin >> b;
	
		
	wynik = a>b ? a : b;
	
	cout << "wynik =   " << wynik << endl;
	
	return 0;
}
