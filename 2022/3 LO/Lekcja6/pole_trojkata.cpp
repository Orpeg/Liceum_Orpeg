#include <iostream>
#include <cmath>

using namespace std;

int main() {
   // deklaracja zmiennych a, b, c
   double a, b, c;
   double p, pole;
 
   // wczytanie długości boków trójkąta
   cout << "Podaj długości boków trójkąta: " << endl;
   cin >> a >> b >> c;
 
   // obliczenie połowy obwodu trójkąta
   p = (a + b + c) / 2;
 
   // obliczenie pola trójkąta z wzoru Herona
   pole = sqrt(p * (p - a) * (p - b) * (p - c));
 
   // wyświetlenie wyniku
   cout << "Pole trójkąta wynosi: " << pole << endl;
 
   return 0;
}
