#include <iostream>
using namespace std;

int main(){

int k, silnia;
cout << "podaj liczbe do silni" << endl;
cin >> k;

silnia = 1;
for (int i = 1; i <= k; i++){

silnia*=i;


}

cout << "silnia "<< k << "! = "<< silnia << endl;


	return 0;
}