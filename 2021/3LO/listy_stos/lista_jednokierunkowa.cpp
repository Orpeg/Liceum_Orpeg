#include <iostream>
#include <forward_list>

using namespace std;

int main() {
    // Tworzymy pustą listę jednokierunkową
    forward_list<int> lista;

    // Dodajemy elementy na koniec listy
    lista.push_front(30);
    lista.push_front(20);
    lista.push_front(10);

    // Wyświetlamy zawartość listy
    cout << "Zawartosc listy: ";
    for (auto i : lista)
        cout << i << " ";
    cout << endl;

    // Usuwamy drugi element z listy
    lista.pop_front();
    cout << "Zawartosc listy po usunięciu drugiego elementu: ";
    for (auto i : lista)
        cout << i << " ";
    cout << endl;

    return 0;
}
