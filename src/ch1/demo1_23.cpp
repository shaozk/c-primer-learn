// demo1_23.cpp
#include <iostream>
#include "include/Sales_item.h"

using namespace std;

int main()
{
    Sales_item start;
    if (cin >> start)
    {
        int cnt = 1;
        Sales_item item;
        while (cin >> item) 
        {
            if (item.isbn() == start.isbn())
            {
                ++cnt;
            }
            else
            {
                cout << start.isbn() << " " << cnt << endl;
                cnt = 1;
                start = item;
            }
        }
        cout << start.isbn() << " " << cnt << endl;
    }
    return 0;
}