#include <iostream>
int main()
{
int x=1, y=5;
x++;
y-=x++;
std::cout << "x = " << x << ", y= " << y << std::endl;
return 0;
}
