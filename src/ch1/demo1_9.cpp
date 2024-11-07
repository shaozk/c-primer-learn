// demo1_9.cpp
#include <iostream>

int main()
{
    int a = 50;
    int sum = 0;
    while ( a <= 100)
    {
        sum += a;
        a++;
    }
    std::cout << "sum = " << sum << std::endl; 
    return 0;
}