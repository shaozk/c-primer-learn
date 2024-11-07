// demo1_22.cpp
#include <iostream>
#include "include/Sales_item.h"

using namespace std;

int main()
{
    Sales_item item;
    Sales_item sum;
    if (cin >> item)
    {
        sum = item;
        while (cin >> item) 
        {
            if (item.isbn() == sum.isbn())
            {
                sum += item;
            }
        }
    }
    cout << sum << endl;
    return 0;
}