#include <iostream>
using namespace std;

int main(){

int n;
cout << "podaj liczbe calkowitą ujemna" << endl;
cin >> n;

while (n >= 0) {

	cout << "błędna liczba, spróbuj ponownie"<< endl;
	cin >> n;
}

cout << "podales liczbe " << n << endl;






	return 0;
}