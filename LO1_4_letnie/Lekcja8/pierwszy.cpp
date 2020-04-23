#include <iostream>
using namespace std;
int main()
{
//deklaracja zmiennych a i b
float a;
int b;
//nadanie wartoœci
a = 3;
b = 4;
//deklaracja zmiennej suma
int suma = a + b;
cout << "zmienna a = "<< a <<"\n" <<  "zmienna b = "<< b << "\n";
cout << "suma liczb a + b = " << suma << "\n";
	
float x = b/a;
cout << "dzielenie liczb integer b/a = 4/3   " << x << "\n";	
cout << "dzielenie liczb 10 / 3.0 =  " << 10/3.0 << "\n";
	
return 0;
}
