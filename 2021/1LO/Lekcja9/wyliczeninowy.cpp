#include <iostream>
using namespace std;

int main(){
	
//	zmenna wyliczeniowa

enum dzien {
	
	PONIEDZIALEK=1, WTOREK=2, SRODA=3, CZWARTEK=4, PIATEK=5, SOBOTA=6, NIEDZIELA=0
	
};
	
	
	dzien d = WTOREK;
	
	cout << d << endl;
	
	return 0;
}