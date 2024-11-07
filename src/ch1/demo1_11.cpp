// demo1_11.cpp
#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    int cur = 0;
    std::cout << "Input two number:\n";
    std::cin >> a >> b;
    if (a <= b)
    {
        cur = a; 
        while (cur <= b)
        {
            std::cout << cur << " "; 
            cur++;
        }
        std::cout << std::endl;
    }
    else
    {
        cur = a; 
        while (cur >= b)
        {
            std::cout << cur << " "; 
            cur--;
        }
        std::cout << std::endl;

    }
    return 0;
}