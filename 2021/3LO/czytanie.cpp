#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	fstream newfile;//deklaracja
	newfile.open("dane.txt", ios::out);//otwarcie pliku
	if(newfile.is_open()) {

		newfile << "Wpisanie linii tekstu do pliku \n"; //wprowadzenie tekstu
		for (int i; i<16; i++) {

			newfile << "linia nr "<< i <<"\n";
		}

		newfile.close();//zamkniecie pliku
	}
	//czytanie

	newfile.open("dane.txt", ios::in);//otwarcie pliku do odczytu
	if(newfile.is_open()) {

		string tp;
		while(getline(newfile, tp)) {

			cout << tp << "\n"; //drukowanie ze zmiennej string tp
		}
		newfile.close();//zamkniecie pliku

	}






}
