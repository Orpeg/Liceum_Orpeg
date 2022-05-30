#include <iostream>
using namespace std;

int main(){

int a,b,d;
cout << "podaj liczbe a "<< endl;
cin>>a;
cout << "podaj liczbę b rozną od a"<<endl;
cin >> b;
while(a == b){

	if(a==b)
		cout << "liczba b musi być różna od a  "<< endl;
	cin >> b;
}



(a>b)?cout<<"większą liczbą jest a= "<<a<<endl:cout<<"wiekszą liczba jest b = "<<b<<endl;



	return 0;
}