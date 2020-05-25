#include <iostream>
using namespace std;

int sil( int n){
	if (n == 0)
		return 1;
	if (n ==1)
		return 1;
	return n*sil(n-1);
}

int main(){

int k;
cout << "podaj liczbe" << endl;
cin >> k;
cout << "silnia liczby "<<k<<"! = " << sil(k)<< endl;


	return 0;
}