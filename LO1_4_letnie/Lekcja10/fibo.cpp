#include <iostream>
using namespace std;

int fibo(int n){

	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return fibo(n-2) + fibo(n-1);
}

int main(){
int k;
cout << "podaj liczbe" << endl;

cin >> k;

cout << "liczba fibo dla f(k)"<< k<<" = " << fibo(k)<< endl;

	return 0;
}