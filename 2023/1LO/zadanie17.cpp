#include <iostream>



// Definicja funkcji iteracyjnej
int sequence_iterative(int n) {
    int value = 0;
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0)
            value = -value;
        else
            value = -value + 1;
    }
    return value;
}

int main() {
    int n;
    
    std::cout << "Podaj numer wyrazu ciągu, który chcesz obliczyć: ";
    std::cin >> n;
    
    //std::cout << "Wyraz " << n << " ciągu obliczony rekurencyjnie wynosi: " << sequence_recursive(n) << std::endl;
    std::cout << "Wyraz " << n << " ciągu obliczony iteracyjnie wynosi: " << sequence_iterative(n) << std::endl;
    
    return 0;
}
