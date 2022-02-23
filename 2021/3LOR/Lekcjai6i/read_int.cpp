#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	
	int arr[30];
	
	ifstream is("numbers.txt");
   int cnt= 0;
   int x;
	
	while(cnt < arr[30] && is >> x)
	arr[cnt++] = x;
	
	cout << "Liczby z pliku \n";
	for (int i = 0; i<cnt ; i++)
	{
		cout << arr[i]<<" ";
	}
	is.close();
	
	
	
}
