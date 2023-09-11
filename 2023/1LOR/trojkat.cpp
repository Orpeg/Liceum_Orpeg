#include <iostream>
#include <cmath>
using namespace std;
int main() {

	double a,b,c;

	cout << "Podaj dlugosc pierwszego boku a"<< endl;
	cin >> a;

	cout << "Podaj dlugosc drugiego boku b "<< endl;

	cin >> b;
	
	
	if(a<=0 || b <= 0){
		cout << "dlugosci bokow powinny byc dodatnie" << endl;
		return 1; 
	}
	// obliczamy pole trojkata

	double pole = 0.5 * a * b;
	cout << "Pole trojkata wynosi  P = "<< pole << endl;

	//obliczamy c

	c = pow((a * a + b * b), 0.5);

	cout << "przeciwprostokatna c = " << c << endl;
	cout << "obwod trojkata wynosi " << a+ b + c << endl;

	return 0;


}