#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	
	fstream newfile;
	newfile.open("dane.txt", ios::out);//otwarcie pliku
	if(newfile.is_open())//sprawdzenie czy plik jest otwarty
	{
		newfile << "wpisanie pierwszej linii  \n";
		for (int i; i<10;i++)
		{
			newfile << "linia nr   "<<i <<"\n";
						
		 } 
		newfile.close();//zamkniêcie pliku
		
		
	}
	newfile.open("dane.txt",ios::in);//otwarcie pliku w celu odczytu
	if (newfile.is_open()){
		string tp;
		while(getline(newfile,tp))
		{
			cout << tp << "\n"; //drukowanie w petli
			
		}
		newfile.close();
	}
	
}
