#include <iostream>
using namespace std;
int main() {

	int liczby[5];
	cout << "Podaj 5 liczb"<< endl;
//	pobieranie liczb
	for(int i = 0; i<5; i++) {

		cout << "podaj liczba nr  "<<(i+1)<<": ";
		cin >> liczby[i];
	}
//wyswietlamy

	cout << "Liczby w kolejnosci odwrotnej  "<< endl;
	for(int i =4; i>=0; i--) {
		cout << "liczba nr "<<(i+1)<<" : "<<liczby[i]<<endl;
	}
	return 0;
}