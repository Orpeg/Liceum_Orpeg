#include <iostream>
using namespace std;

int main() {
    int a = 3;
    for (int i = 1; i <= 10; i++) {
        cout << a << " ";
        if (i % 2 == 1) {
            a *= -2;
        } else {
            a *= 2;
        }
    }
    cout << endl;

    return 0;
}
