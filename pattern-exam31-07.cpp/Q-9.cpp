#include <iostream>
using namespace std;

 main()
{
    int n = 6; 

    
    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n - i; s++)
            cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "*";
        cout << endl;
    }

    
    for (int i = n - 1; i >= 1; i--)
    {
        for (int s = 1; s <= n - i; s++)
            cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "*";
        cout << endl;
    }
}
