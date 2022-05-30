#include <iostream>
using namespace std;
int main() {
int arr[] = {5,25,35,45,55,65};
int arrSize = *(&arr + 1) - arr;
cout << "rozmiar wektora: " << arrSize;
return 0;
}