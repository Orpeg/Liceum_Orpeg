#include <iostream>
using namespace std;
// dzięki tej deklaracji unikamy pisania std

int main()
{

//zakładamy pętlę while

	int i = 1;
while (i <= 10){
	cout << "obieg pętli nr   " << i << endl;
	i++;
}

//mozna także w dół
cout << "........................"<< endl;
cout << "........................"<< endl;


int j = 10;
while (j > 0) {
	cout << "obieg pętli w dół nr "<< j << endl;
	j--;
}







	return 0;
}