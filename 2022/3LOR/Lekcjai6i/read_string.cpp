#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	fstream newfile;
	newfile.open("dane.txt", ios::out);
	if(newfile.is_open()){
		newfile << "odczytujemy linie tekstu do pliku  \n";
		for (int i=0;i<20;i++){
			
			newfile << "linia nr    "<< i << "\n";
		}
		
		newfile.close();
	}
	
	
	
	newfile.open("dane.txt", ios::in);
	if(newfile.is_open()){
		
		string tp;
		while(getline(newfile, tp)){
			
			cout << tp << endl;
		}
		newfile.close();
		
	}
	
	
	
	
	
}
