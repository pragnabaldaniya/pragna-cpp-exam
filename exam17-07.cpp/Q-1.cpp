#include <iostream>
using namespace std;

main()
{
    int n, i = 1, a = 1;
    cout << "Enter the number of terms: ";
    cin >> n;

    while(i <= n)
   {
    cout << a << "\t";
    a = a + i;
    i++;
   }
}