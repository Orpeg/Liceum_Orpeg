#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	fstream dane;
	dane.open("dane.txt",ios::out);
	dane<<"linia tekstu w pliku dane.txt"<<endl;
	dane.close();
	return 0;
}