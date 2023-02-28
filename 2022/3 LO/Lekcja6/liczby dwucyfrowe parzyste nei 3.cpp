#include <iostream>
using namespace std;

int main() {
    int count = 0;

    for (int i = 98; i >= 10; i -= 2) {
        if (i % 3 != 0) {
            cout << i << " ";
            count++;
        }
    }

    cout << endl << "Liczba liczb spelniajacych warunki: " << count << endl;

    return 0;
}
