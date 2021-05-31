#include <iostream>
using namespace std;

int main(){

int i, n, silnia=1;
cout<<"podaj liczbe do silni"<< endl;
cin>> n;
for (i = 1;i<=n;i++)
{
silnia*=i;

}

cout<< "silnia = "<<silnia<< endl;


	return 0;
}