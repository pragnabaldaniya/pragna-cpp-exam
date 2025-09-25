#include <iostream>
using namespace std;

main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;


    while (n >= 10)
    {
        int sum = 0;
        while (n > 0){
            sum = sum + (n % 10);
            n = n / 10;
        }
        n = sum;
    }
    cout << "last singal-digit is : " << n << endl;
}