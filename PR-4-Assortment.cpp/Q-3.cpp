#include <iostream>
using namespace std;

int main()
{
     int row, col;

    cout <<" Enter row : ";
    cin >> row;
    cout << "Enter column : ";
    cin >> col;

    int a [row] [col];

    cout << endl << endl << "Array Input" << endl << endl ;
    for (int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << "Enter a ["<< i <<"] ["<< j <<"] : ";
            cin >> a [i] [j];
        }
        cout << endl;
    }

    cout << "Original Matrix:" << endl;
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    cout << "Transpose of Matrix : " << endl;
    for (int j = 0; j < col; j++) 
    {
        for (int i = 0; i < row; i++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}