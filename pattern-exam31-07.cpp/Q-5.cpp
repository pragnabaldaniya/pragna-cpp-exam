#include <iostream>
using namespace std;

main()
{
    int n = 5;
    for (int i = n; i >= 1; i--)
    {
        for(int s = 1; s < i; s++)
        {
            cout << "  ";
        }
     
        for(int j = i; j <= n; j++)
        {
            cout << j << " ";
        }
       
            for(int j = n - 1; j >= i; j--)
        {
            cout << j << " ";
        }
        cout << endl ;
    }
}