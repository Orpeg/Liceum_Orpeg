#include <iostream>
int main(){
    
//     wypisz wszytkie kolejne liczby od 1 do 10 
//     aż do pierwszej liczby podzielnej przez 7
    
    for (int i=1; i<=10;i++){
        if (i%7 == 0)
            break;
        std::cout << i << ",  ";
    }
    std::cout << std::endl;
    return 0;
}
