#include <iostream>
#include <stack>

using namespace std;

int main()
{
    // Tworzymy pusty stos
    stack<int> stos;

    // Dodajemy elementy na stos
    stos.push(10);
    stos.push(20);
    stos.push(30);
    stos.push(40);

    // Wyświetlamy elementy stosu
    cout << "Elementy stosu: ";
    while (!stos.empty()) {
        cout << stos.top() << " ";
        stos.pop();
    }
    cout << endl;

    return 0;
}
