#include <iostream>
using namespace std;

//napisz program ktory okresli czy podana liczba jest liczba pierwsza

int f_pierwsza(int n)
{
	
	for (int i = 2; i < n; i++)
	{
		if (n == 1)
			return true;
	if (n%i == 0)
		return false;
	}
	return true;
	
}

int main()
{
	
	int n;
	cout << "podaj liczbe do zbadania   ";
	cin >> n;
	
	cout << "poda³es liczbe n =   " << n << endl;
	cout << "czy podana liczba n jest liczba pierwsza?    "<< "\n" << f_pierwsza(n)<< endl;
	
	
	return 0;
}
