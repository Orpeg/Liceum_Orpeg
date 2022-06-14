#include <iostream>
using namespace std;

int main(){
	
	int b,a,wynik;
	
	cout << "podaj liczbe calkowita "<< endl;
	cin >> a;
	
	if(a%2 == 0)
		cout << "liczba a = "<< a << "  jest parzysta"<< endl;
	else
		cout << "liczba a = "<< a << "  jest nieparzysta"<< "\n";
	
//	operator trójargumentowy

cout << "podaj liczbe calkowita  "<< endl;
cin >> b;

b>0? cout << "liczba b = "<< b << "  jest dodatnia " : cout << "liczba b = "<< b << "  jest ujemna" ;
cout << endl;
a>b? cout << "liczba a jest wieksza od b": cout << "liczba b jest wieksza od a ";

cout << endl;



	
	
	
	
	
	
	return 0;
}