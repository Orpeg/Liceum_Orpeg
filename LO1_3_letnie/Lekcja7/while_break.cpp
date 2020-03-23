#include <iostream>

int main()
{

// przerywamy pętlę while

	int i = 1;
	while (i<11){
	std::cout << "obieg pętli nr "<< i << std::endl;

	if(i == 7)
		break;


	i++;
	}



	return 0;
}