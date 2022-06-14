#include <iostream>
using namespace std;
#include <string>

	
int main(){
	int counter = 1;
	int liczba = 1;
	while(counter<=10){
		liczba++;
		if(liczba%2!=0 && liczba%5==0){
			cout << counter<<". "<<liczba<<endl;
			counter++;
		}
	}
	
	return 0;
}