#include <iostream>
using namespace std;

long int silnia(int n) {
	if (n ==0) return 1;
	return silnia(n-1)*n;

}

int main() {

	for (int i = 0; i<5; i++)
		cout << silnia(i) <<endl;

	return 0;

}