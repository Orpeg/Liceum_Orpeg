#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int pierwsza(int n)

{
	for (int i = 2; i<n; i++)

{
	
	if (n == 1)
		return true;
	if (n%2 == 0)
		return false;
		
}
	return true;
}



int main()
{
	
	int n;
	cout << "wpor";
	cin >> n;
	cout << "wpro  "<< n<< endl;
	cout << boolalpha;
	cout << pierwsza(n);
	
	
		
	return 0;
}


