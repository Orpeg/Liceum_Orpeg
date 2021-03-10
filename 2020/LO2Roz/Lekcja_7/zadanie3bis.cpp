#include <iostream>
using namespace std;

int main()
{

cout<< "wypisujemy liczby nieparzyste z przedziału <10,50>"<< endl;
cout << "===========================================" << endl;

for (int i =10; i <=50 ; i++)
{

if (i%2 != 0)
{
	cout << i << ", ";
}


}

cout << endl;

return 0;

}