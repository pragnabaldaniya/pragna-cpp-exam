#include <iostream>
using namespace std;

class Stack
{
public:
    virtual void push(int) = 0;
    virtual void pop() = 0;
    virtual void topElement() = 0;
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
    virtual void display() = 0;
};

class Escalator : public Stack
{
private:
    int *arr;
    int size;
    int top;

public:
    // Constructor
    Escalator(int size)
    {
        this->size = size;
        this->arr = new int [size];
        this->top = -1;
    }

    // Destructor
    ~Escalator()
    {
        delete[] arr;
    }

    //mathod
        void push (int element)
    {
        if (this->top == this->size - 1)
        {
            cout << "Stack is overflow..." << endl;
        }
        else{
            this -> top++;
            this -> arr[this -> top] = element;
        }
    }

    void pop ()
    {
        if (this -> top == -1)
        {
            cout << "Stack is underflow..." << endl;
        }
        else{
            this -> top--;
        }
    }

    void topElement()
    {
        if (this->top == - 1)
        {
            cout << "Stack is overflow..." << endl;
        }
        else{
            cout << endl << "Top element is : " << arr[top] << endl;
        }
    }

    bool isEmpty()
    {
        if (top == -1){
            return true;
        }
        else{
            return false;
        }
    }

    bool isFull()
    {
        (this -> top == this -> size -1)
            ? cout << "Stack is Full... "<< endl
            : cout << "Stack is not Full... " << endl;
    }
   
      void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty..." << endl;
        }
        else{
            cout << endl << "Stack elements : " ;
            for(int i = this->top; i >= 0; i--)
            {
                cout << this -> arr[i] << "  ";
            }
        }
        cout << endl;
    }
};



int main()
{
    int size;

    cout << "Enter your size : ";
    cin >> size;

    Escalator e1(size);
    int choice, element;

    do
    {
        cout << "Press 1 for push operation" << endl;
        cout << "Press 2 for pop operation" << endl;
        cout << "Press 3 for top element operation" << endl;
        cout << "Press 4 for is Empty operation" << endl;
        cout << "Press 5 for is Full operation" << endl;
        cout << "Press 6 for display operation" << endl;
        cout << "Press 0 Exit..." << endl;

        cout << "Enter your choice : ";
        cin >> choice;

       switch (choice)
       {
        case 1:
            cout << "Enter element : ";
            cin >> element;
            e1.push(element);
            cout << endl;
         break;

        case 2:
            e1.pop();
            cout << endl;
        break;

        case 3:
            e1.topElement();
            cout << endl;
        break;

        case 4:
            e1.isEmpty();
            cout << endl;
        break;

        case 5:
            e1.isFull();
            cout << endl;
        break;

        case 6:
            e1.display();
            cout << endl;
        break;

        case 0:
            cout << "Exit....";
            cout << endl;
        break;

        default:
            cout << "Invalid choice...." << endl;
        break;
    }
    }while (choice != 0);
   
}