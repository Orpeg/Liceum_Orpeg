#include <iostream>
using namespace std;

long long silnia(long long n)
{
if(n==0) return 1;
if(n==1) return 1;
if(n>1)
	{
return silnia(n-1)*n;
	}


}

int main()
{

long long i,k, si;

cout<< "podaj liczbe do silni  "<< endl;

cin>>k;

si = silnia(k);
cout <<"silnia liczby k=  " << k << "   wynosi "<<si<< endl;
return 0;
}