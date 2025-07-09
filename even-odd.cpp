#include <iostream>
using namespace std;

main()
{
    int a;
    cout << "Enter any number:";
    cin >> a;

    // even - odd
    if(a % 2 == 0)
    {
        cout << a << "the a is even.." << endl;
    }
    else
    {
        cout << a << "the a is odd.." << endl;
    }

    // divide by 5
    if(a % 5 == 0)
    { 
        cout << a << "a is divide by 5." << endl;
    }
    else
    {
        cout << a << "a is not divide by 5." << endl;
    }

    
}