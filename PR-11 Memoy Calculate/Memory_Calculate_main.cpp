
#include "Memory_Calculate.cpp"

int main()
{
    StudentSystem<int> s1;
    int choice;

    do{
        s1.showMenu();
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            s1.addStudent();
            break;
        case 2:
            s1.displayAll();
            break;
        case 3:
            s1.removeStudent();
            break;
        case 4:
            s1.searchStudent();
            break;
        case 5:
            cout << "---Exiting program---" << endl;
            break;
        
        default:
            cout << "Invalid choice... " << endl;
            break;
        }
    }while (choice != 5);

    return 0;
   
    
}