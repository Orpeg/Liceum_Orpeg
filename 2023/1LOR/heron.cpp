#include <iostream>
#include <cmath>
using namespace std;

int main() {

	double a,b,c;

	cout << "podaj dlugosci bokow a,b,c  "<< endl;

	cin >>a>>b>>c;

	if(a+b<=c) {
		cout << "blednie podany bok c " <<endl;
		return 1;
	}

	//obliczamy pol obwodu

	double p = (a+b+c)/2;

	//obliczamy pole ze wzoru Herona

	double pole = sqrt(p*(p-a)*(p-b)*(p-c));
	//obliczamy obwod

	double obwod = 2*p;

	cout << "pole trojkata wynosi  "<<pole<<endl;
	cout << "obwod trojkata wynosi "<< obwod<<endl;

	return 0;

}