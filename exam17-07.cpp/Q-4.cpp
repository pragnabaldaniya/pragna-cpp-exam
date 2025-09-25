#include <iostream>
using namespace std;

main()
{
    char startchar, endchar;
    cout << "Enter start charater : ";
    cin >> startchar;
    cout << "Enter end charater : ";
    cin >> endchar;

    char i = startchar;
    do{
        cout << i << endl;
        i++;
    } while (i <= endchar);
}