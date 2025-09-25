
#include <iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
int mod(int a, int b) {
    if (b == 0) {
        cout << "Error" << endl;
        return 0;
    }
    return a % b;
}
int divide(int a, int b) {
    if (b == 0) {
        cout << "Error" << endl;
        return 0;
    }
    return a / b;
}

int main() {
    int choice, a, b;

    while (choice!=0) {
        cout << "Press 1 for +" << endl;
        cout << "Press 2 for -" << endl;
        cout << "Press 3 for *" << endl;
        cout << "Press 4 for /" << endl;
        cout << "Press 5 for %" << endl;
        cout << "Press 0 for exit" << endl << endl;

        cout << " Enter your choice: ";
        cin >> choice;
       if (choice == 0) {
            cout << "Exiting program.." << endl;
            break;
        }

        cout << "Enter the first number: " ;
        cin >> a;
        cout << "Enter the second number: ";
        cin >> b;

        switch (choice) {
            case 1:
                cout << "Addition of : " << a  << " + " << b << " = " << add(a, b) << endl;
                break;
            case 2:
                cout << "Subtraction of : " << a  << " - " << b << " = "  << subtract(a, b) << endl;
                break;
            case 3:
                cout << "Multiplication of : " << a  << " * " << b << " = " << multiply(a, b) << endl;
                break;
            case 4:
                cout << "Division of : " << a  << " / " << b << " = " << divide(a, b) << endl;
                break;
            case 5:
                cout << "Modulus of : " << a  << " % " << b << " = " << mod(a, b) << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }

         
    }

    return 0;
}
