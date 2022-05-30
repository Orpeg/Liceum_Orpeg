#include <iostream>
using namespace std;

int main(){
	
	for(int x = 1; x<=100; x++){
		
		if(x%2 == 0 && x%7==0){
			
			cout << "liczba x = "<< x << "   spelnia warunek "<< endl;
		}
		
	}
	
	
	
	return 0;
}