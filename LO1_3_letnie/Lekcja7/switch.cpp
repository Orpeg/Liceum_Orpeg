#include <iostream>
int main(){
    int x;
    std::cout << "Wprowadź liczbę od 0 do 5 \n";
    std::cin >> x;
    switch (x){
        
        case 0:
            std::cout << "zero \n";
            break;
        case 1:
            std::cout << "jeden \n";
            break;
        case 2:
            std::cout << "dwa \n";
            break;
        case 3:
            std::cout << "trzy \n";
            break;
        case 4:
            std::cout << "cztery \n";
            break;
        case 5:
            std::cout << "pięć \n";
            break;
        default:
            std::cout << "Błędna wartość \n";
    }
    return 0;
}
