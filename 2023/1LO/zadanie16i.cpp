#include <iostream>

// Definicja funkcji rekurencyjnej
double sequence(int n) {
    if (n == 1) {
        return 4.5; // Zwrócenie wartości pierwszego elementu ciągu
    } else {
        return 5 * sequence(n - 1) + 3; // Obliczanie n-tego elementu ciągu
    }
}

int main() {
    int n;

    std::cout << "Podaj numer wyrazu ciagu, który chcesz obliczyc: ";
    std::cin >> n;

    std::cout << "Wyraz " << n << " ciągu wynosi: " << sequence(n) << std::endl;

    return 0;
}