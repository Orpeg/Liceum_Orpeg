#include <iostream>
using namespace std;

//napisz program ktory okresli czy wprowadzona liczba jest liczba pierwsza
int f_pierwsza(int n){
	
	for (int i = 2; i<n; i++ ){
		
		if (n ==1){
			return true;
		}
		
		if (n%i == 0){
			
			return false;
		}
	}
		return true;
		
}



int main()
{
	
	int n;
	cout << "Wprowadz liczbe calkowita dodatnia  ";
	cin >> n;
	
	cout <<"wprowadziles liczbe n =  "<< n << endl;
	cout << "czy wprowadzona liczba jest liczba pierwsza ?    "<< f_pierwsza(n)<< endl;
	
	
}
