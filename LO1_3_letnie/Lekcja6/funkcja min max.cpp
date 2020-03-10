#include <iostream>
int min(int a, int b)
{
    return a<b ? a:b;
}

int max (int a, int b)
{
    return a>b? a : b;
}

int main()
{
    int najmniejsza, najwieksza, t;
    std::cout << "Podaj pięć liczb"<<'\n';
    std::cin >> t;
    najmniejsza = najwieksza = t;
    for (int i=1; i < 5; ++i)
    {
        std::cin >> t;
        najmniejsza = min (najmniejsza, t);
        najwieksza = max (najwieksza, t);
        
    }
    std::cout << "największa =" << najwieksza << ", najmniejsza = " << najmniejsza << '\n';
    return 0;
}
