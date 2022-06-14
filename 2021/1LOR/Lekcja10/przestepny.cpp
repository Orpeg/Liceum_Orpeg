#include <iostream>
using namespace std;

int main(){
	int rok;
		
	cout <<"podaj rok w formie 4 cyfr"<<endl;
	while (rok < 2050){
	
	cin >> rok;
	
	if(rok%400==0 || (rok % 4 ==0 && rok %100 != 0) )
		cout << "rok "<< rok << "  jest przestepny\n";
	
	else
		cout << "rok "<< rok << "  nie jest rokiem przetepnym \n";
		
	
	}
	
	return 0;
}