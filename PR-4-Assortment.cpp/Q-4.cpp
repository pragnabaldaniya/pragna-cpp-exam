#include <iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter Row Size : ";
    cin >> row;
    cout << "Enter Column Size : ";
    cin >> col;

    int a [row] [col];

    cout << "Array Input : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++){
            cout << "a [" << i << "] [" << j << "] = ";
            cin >> a [i] [j];
        }
    }

    // Row sum...0

    int  r = 0;
    int rowsum = 0;
    cout << "Elements row number " << r << " :" << endl;
    for (int j = 0; j < col; j++)
    {
        cout << a[r][j] << " ";
        rowsum += a [r] [j];
    }
    cout << " The sum of row " << r << " = " << rowsum << endl;

    //col sum...2

    
    int  c = 2;
    int colsum = 0;
    cout << "Elements col number " << c << " :" << endl;
    for (int i = 0; i < row; i++)
    {
        cout << a[i][c] << " ";
        colsum += a [i] [c];
    }
    cout << " The sum of column " << c << " = " << colsum << endl;
    
}