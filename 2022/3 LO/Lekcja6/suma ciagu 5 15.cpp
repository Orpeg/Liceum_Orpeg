#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	
	int k;
	double suma = 0.0;
	cout << "liczymy sume wyrazenia sqrt(20)/2/k dla k od 5 do 15"<<endl;
	
//	liczymy sumę wyrazow ciagu sqrt(20)/2/k dla k od 5 do 15
	for(int k = 5; k<16;k++){
		
		suma += sqrt(20)/2/k;
	}
	
	cout <<endl<< "suma wyrazen ciagu s(k) dla k w przedziale <5,15> \n wynosi suma(k) = "<<suma<<endl;
	cout << " suma(k) = "<<fixed << setprecision(10)<<suma<< endl;
	
	
	return 0;
}