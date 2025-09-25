#include <iostream>
using namespace std;

int main()
{
     int size;

     cout << "Enter number of elements : ";
     cin >> size;

     int a [size];
     cout << "Array Input" << endl;
    
     for (int i = 0; i < size; i++)
    {
        cout << "Enter a[" << i << "] : " ;
        cin >> a[i];
    }

    cout << "Negative elements : " << endl;

    for (int i = 0; i < size; i++)
    {
        if (a[i] < 0){
            cout << a[i] << " " ;
        }
    }
}