#include <iostream>
#include <vector>
#include <string.h>
// #include <cstring>   
// #include <cstdio>   
using namespace std;

template <typename T>
class Student
{
private:
    T id;
    char name[50];       

public:
    
    Student(T i = 0, char n[50] = (char *)"")
    {
        id = i;
        strcpy(name, n);
    }

    void setData()
    {
        cout << "Student ID : ";
        cin >> id;
        fflush(stdin);      
        cout << "Student Name : ";
        gets(name);        
    }

    T getId()
    {
        return id;
    }

    void display()
    {
        cout << "Student ID : " << id << endl;
        cout << "Student Name : " << name << endl;
       
    }
};

template <typename T>
class StudentSystem
{
private:
    vector<Student<T>> studentList;

public:
    void showMenu()
    {
        cout << endl << "---Student System Menu---" << endl;
        cout << "Press 1 Add student" << endl;
        cout << "Press 2 Display All student" << endl;
        cout << "Press 3 Remove student by id" << endl;
        cout << "Press 4 Search student by id" << endl;
        cout << "Press 5 Exit" << endl;
    }

    // case 1 add student
    void addStudent()
    {
        T id;
        char name[50];

        cout << "Enter Student ID : ";
        cin >> id;
        fflush(stdin);
        cout << "Enter Student Name : ";
        gets(name);

        studentList.push_back(Student<T>(id, name));
        cout << endl << "Student Added Successfully !!" << endl;
    }

    // case 2 display all
    void displayAll()
    {
        if (studentList.empty())
        {
            cout << "No student to display.." << endl;
            return;
        }
        cout << endl << "---Student List---" << endl;
        for (int i = 0; i < studentList.size(); i++)
        {
            studentList[i].display();
        }
    }

    // case 3 remove student
    void removeStudent()
    {
        T id;
        cout << "Enter ID to remove : ";
        cin >> id;

        for (int i = 0; i < studentList.size(); i++)
        {
            if (studentList[i].getId() == id)
            {
                studentList.erase(studentList.begin() + i);
                cout << "Student Removed Successfully !!" << endl;
                return;
            }
        }
        cout << "Student with ID " << id << " not found.." << endl;
    }

    // case 4 search student
    void searchStudent()
    {
        T id;
        cout << "Enter ID to search : ";
        cin >> id;

        for (int i = 0; i < studentList.size(); i++)
        {
            if (studentList[i].getId() == id)
            {
                cout << "---Student Found---" << endl;
                studentList[i].display();
                return;
            }
        }
        cout << "Student with ID " << id << " not found.." << endl;
    }
};