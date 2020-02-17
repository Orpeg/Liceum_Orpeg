#include <iostream>
using namespace std;

int dodawanie (int x, int y)
{


return x+y;

}

int main()
{

	int x;
	float y;
cout << "++++++++++++++++++++++++\n";
cout << "to jest program w jezyku c++ \n";
cout << endl;
cout << "========================="<<endl;

cout << "a teraz bedzie liczba  "<<endl;
cin >> x;

cout << "zmienna x = " <<x<<endl;
cout << "podaj y"<< endl;
cin >> y;
cout << "mnozenie " << 3.14*x<< endl;
cout << "mnozenie  " << 10*y << endl;
cout << "dodawanie x+ y  = "<< dodawanie(x,y)<<endl;

	return 0;
}