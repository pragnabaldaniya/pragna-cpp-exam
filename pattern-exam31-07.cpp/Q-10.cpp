#include <iostream>
using namespace std;
 main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        // Left Side (Numbers or Letters)
        if (i % 2 == 1)
        {
            // Numbers: 1 to i
            for (int j = 1; j <= i; j++)
                cout << j << " ";
        }
        else
        {
            // Letters: A to A+i-1
            for (int j = 0; j < i; j++)
                cout << char('A' + j) << " ";
        }

        // Middle Space
        int space = (n - i) * 2;
        for (int s = 1; s <= space; s++)
            cout << "  ";

        // Right Side (Mirror)
        if (i % 2 == 1)
        {
            // Numbers: i down to 1
            for (int j = i; j >= 1; j--)
                cout << j << " ";
        }
        else
        {
            // Letters: A+i-1 down to A
            for (int j = i - 1; j >= 0; j--)
                cout << char('A' + j) << " ";
        }

        cout << endl;
    }

    return 0;
}
