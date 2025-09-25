
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

    int largest = a[0] [0];
  
    for (int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(a[i][j] > largest){
                largest = a[i][j];
            }         
        }
    } 
      
    cout << "\nThe largest element in the array is: " << largest << endl;
    
        
        
}
