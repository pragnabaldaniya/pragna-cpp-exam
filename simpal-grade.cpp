#include <iostream>
using namespace std;

main()
{
    int mraks;
    char grade;

    cout << "Enter your marks (0-100):";
    cin >> mraks;

    if(mraks<0 && mraks > 100)
    {
        cout << "Invalid marks";
    }

    grade = (mraks>=90)? 'A':
            (mraks>=80)? 'B':
            (mraks>=70)? 'C':
            (mraks>=60)? 'D': 'F';

    cout << "Your grade is" << grade << ".";

    switch (grade)
    {
        case 'A': cout << "Excellent Work!" << endl; break;
        case 'B': cout << "Well done!" << endl; break;
        case 'C': cout << "Good job!" << endl; break;
        case 'D': cout << "You passed,..!" << endl; break;
        case 'F': cout << "Sorry, you failed.";
    }

    if (grade == 'A'|| grade == 'B' || grade == 'C' || grade == 'D')
    {
        cout << "your are eligible for the next level."<< endl;
    }
    else{
        cout << "Please try again next time."<< endl;
    }
}