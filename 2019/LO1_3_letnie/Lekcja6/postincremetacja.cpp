#include <iostream>
 int main(){
int x, i = 1;

x = i;
std::cout << "x = " << x << std::endl;

std::cout << "podstawienie z postinkrementacją"<< std::endl;

x=i++;

std::cout << "wynik x = " << x << std::endl;
std::cout << "zmienna i = " << i <<std::endl;


// i++ to znaczy i = i+1 (po podsawieniu)
// ++i to znaczy i = i+1 (przed podstawieniem)




return 0;
 }