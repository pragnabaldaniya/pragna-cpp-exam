#include <iostream>
using namespace std;

main()
{
    for (int i = 5; i >= 1; i--)
    {
        for(int s = 5; s > i; s--)
        {
            cout << "  ";
        }
        for(int j = 1; j <= i; j++)
        {
            (j % 2 == 0)
            ? cout << "0 "
            : cout << "1 ";
        }
        cout << endl;
    }
}