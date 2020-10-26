#include <iostream>
using namespace std;

int hic(int n){
	if(n==0){
	return 0;	
	}
	if(n==1){
		
		return 1;
	}
	if (n > 1){
		
		return hic(n-1) + hic(n-2);
	}
}
	int main(){
		
		int n;
		cout<<"podaj liczbe calkowita"<< endl;
		cin >> n;
		
		long fb;
		fb = hic(n);
		
		cout << "liczba fibonacciego dla n =    " << n << "wynosi  " << fb << endl;
		
		
	}

