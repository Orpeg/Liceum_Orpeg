#include <iostream>
using namespace std;

int main(){
	
	int x;
	
	while(x<10){
	cout << "podaj x z zakresu do 0 do 9" << endl;
	cin >> x;
	switch(x){
		case 0:
			cout << "zero\n";
			break;
		case 1:
			cout << "jeden\n";
			break;
		case 2:
			cout << "dwa\n";
			break;
		case 3:
			cout << "trzy\n";
			break;
		case 4:
			cout << "cztery\n";
			break;
		case 5:
			cout << "piec\n";
			break;
		case 6:
			cout << "szesc \n";
			break;
		case 7:
			cout << "siedem\n";
			break;
		case 8:
			cout << "osiem\n";
			break;
		case 9:
			cout << "dziewiec\n";
			break;
		
		
	}
	
	}
	
	
	
	return 0;
}