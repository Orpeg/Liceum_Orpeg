#include <iostream>
using namespace std;


int main()
{
cout << "to jest program w C++"<<endl;
cout << "podaj dwie liczby całkowite a i b " << endl;
int a,b;
float c;
cin >> a;
cin >> b;
cout << "podaj liczbę zmiennoprzecinkową c = "<<endl;
cin >> c;
cout << "podales liczbe c =  " << c << endl;
cout << "podales liczby  a =" <<a<< "\n   b= " << b<< endl;
cout << "suma liczb a+b  = " << a+b << endl;
cout << "mnozenie sumy a+b przez zmienna c"<< endl;
float wynik = (a+b)*c;
cout << "wynik mnozenia "<< wynik << endl;

return 0;
}