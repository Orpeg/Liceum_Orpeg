#include <iostream>
using namespace std;

int main(){
char znak = 'a';
for (int i = 0; i < 26; i++)
	cout << static_cast<char>(char(znak)+i);
return 0;
}
