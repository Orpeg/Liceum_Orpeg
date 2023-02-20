#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int number;
    cout << "Podaj liczbe: ";
    cin >> number;

    if (isPrime(number)) {
        cout << number << " jest liczba pierwsza" << endl;
    } else {
        cout << number << " nie jest liczba pierwsza" << endl;
    }

    return 0;
}
