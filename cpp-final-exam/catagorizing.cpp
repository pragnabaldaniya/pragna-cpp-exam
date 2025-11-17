#include <iostream>
using namespace std;

void bubble_sort(int a[], int size)
{
    int pass = 1;

    while (pass <= size - 1)
    {
        for (int i = 0; i < size - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                int swap = a[i];
                a[i] = a[i + 1];
                a[i + 1] = swap;
            }
        }
        pass++;
    }
}

// Binary search
int binarySearch(int a[], int n, int key)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int middle = (start + end) / 2;
        if (a[middle] == key)
            return middle;

        else if (a[middle] < key)
            start = middle + 1;

        else
            end = middle - 1;
    }
    return -1;
}

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    int a[size];

    cout << endl
         << "Array Input..." << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Element a[" << i << "]: ";
        cin >> a[i];
    }

    int choice;

    do
    {
        //--- Menu ---
        cout << endl
             << "--Menu--" << endl;
        cout << "Press 1 for Bubble Sort" << endl;
        cout << "Press 2 for Binary Search" << endl;
        cout << "Press 0 to Exit" << endl;

        cout << endl
             << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            bubble_sort(a, size);
            cout << endl
                 << "Array after Bubble Sort: ";
            display(a, size);
            break;

        case 2:
        {
            int target;
            cout << endl
                 << "Enter element to search (Binary): ";
            cin >> target;

            int index = binarySearch(a, size, target);
            if (index != -1)
                cout << "Element found at index: " << index << endl;
            else
                cout << "Element not found..." << endl;
            break;
        }

        case 0:
            cout << endl
                 << "Exiting Program..." << endl;
            break;

        default:
            cout << "Invalid choice! Please try again..." << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}