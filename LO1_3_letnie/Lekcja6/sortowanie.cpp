#include <iostream>

int sortowanie(int x, int y, bool sort)
{
    int temp = x;
    x = y;
    y = temp;
    sort = 1;
    return 1;
}

int main()
{
    int tab[10];
    std::cout << "podaj 10 liczb całkowitych" <<std::endl;
    for (int i =0; i<10; ++i)
    {
        std::cin >> tab[i];
        
    }
    
    std::cout << "tablica jest taka" <<std::endl;
    for (int i = 0; i<10 ; ++i)
    {
        std::cout << tab[i] << "\t";
        
    }
    std::cout << std::endl;
    std::cout << "tablica jest taka" <<std::endl;
    std::cout << std::endl;
    
    bool sort = 0;
    while(sort)
    {
        
        for (int i = 0; i<9; ++i)
        {
            if(tab[i]>tab[i+1])
            {
            int x = tab[i];
            int y = tab[i+1];
                sortowanie(x,y,sort);
                tab[i] = x;
                tab[i+1] = y;
            
            }
    }
    }
    
    
    for (int i = 0; i<10 ; ++i)
    {
        std::cout << tab[i] << "\t";
        
    }
    
    return 0;
}
