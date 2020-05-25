#include <iostream>

int main(){

int j=1;

while (j <= 10){

	std::cout << "obieg petli nr " << j << std::endl;
	if (j == 7){
		break;
	}
	j++;
}


	return 0;
}