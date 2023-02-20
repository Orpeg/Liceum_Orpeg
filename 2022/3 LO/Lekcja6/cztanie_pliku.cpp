#include <iostream>
#include <fstream>
using namespace std;

int main(){
	
	fstream plik;
	plik.open("dane.txt", ios::in);
	if(plik.good()){
		string napis;
		cout<<"zawartosc pliku"<<endl;
		{
			getline(plik,napis);
			cout<<napis<<endl;
		}
		plik.close();
	}else cout << "linia tekstu w pliku dane"<<endl;
	
	
	
	return 0;
	
	
	
}