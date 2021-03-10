#include <iostream>
void f(int *arg)
{
	*arg = 5;
}


int main()
{

int x = 3;
f(&x);
std::cout << x << '\n';

return 0;

// aby przekazać wartość zmiennej globalnie używamy * oraz &
}