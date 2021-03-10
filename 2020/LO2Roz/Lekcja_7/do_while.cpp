#include <iostream>
using namespace std;

int main()
{

int j=0, suma = 0;
cout << "Liczymy sumę parzystych do 100"<< endl;
do {

if (j%2 == 0){

suma += j;
cout << "suma częściowa " << suma << endl;

}

j++;

}

while (j <= 100) ;
cout <<"suma koncowa " << suma << endl;

	return 0;
}