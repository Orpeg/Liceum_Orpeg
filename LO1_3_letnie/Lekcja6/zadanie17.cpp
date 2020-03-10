#include <iostream>
using namespace std;
int main()
{
double a,b;
cout << "Podaj a i b : \n";
cin >> a >> b;
cin.ignore();
if(a!=0)
	cout << "Rownanien posiada rozwiazanie : " << (-b/a);
else
if (a==0 && b==0)
	cout << "nieskonczonosc";
getchar();
return 0;
}

