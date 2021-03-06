#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int CountOfSolutions(double a, double b)
{
if (a == 0 && b == 0) // nieskończenie wiele rozwiązań
{
return 1;
}
else if (a == 0 && b != 0) // równanie sprzeczne
{
return -1;
}
else if (a != 0) // informacja o obliczeniu -b / a; jedno rozwiązanie
{
return 0;
}
}
double CalcExpression(double a, double b)
{
return (-b) / a;
}
int main(int argc, char * argv[])
{
setlocale(LC_ALL, ""); // obsługa polskich znaków
cout << endl;
double a, b;
if (argc != 3)
{
cout << "a = ";
cin >> a;
cout << "b = ";
cin >> b;
system("cls");
}
else if (argc == 3)
{
a = stod(argv[1]);
b = stod(argv[2]);
cout << "a = " << a << endl << "b = " << b << endl << endl;
}
switch (CountOfSolutions(a, b))
{
case -1:
cout << "Równanie jest sprzeczne.";
break;
case 0:
cout << "Wartość rozwiązania: " << CalcExpression(a, b);
break;
case 1:
cout << "Istnieje nieskończenie wiele rozwiązań.";
break;
}
cout << endl;
if (argc != 3)
{
_getch();
}
return 0;
}
