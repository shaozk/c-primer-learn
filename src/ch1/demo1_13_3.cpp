// demo1_13_3.cpp
#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cout << "Please input 2 number:";
    cin >> m >> n;    
    if (m > n)
    {
        int tmp = m;
        m = n;
        n = tmp;
    }
    for (int i = m; i < n; ++i) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}