#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedList
{
public:
    Node *head;
    int count;

    // constructor
    LinkedList()
    {
        this->head = nullptr;
        this->count = 0;
    }

    // Insert node biginning
    void insertNodeBeginning(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        this->head = newNode;
        // this -> count++;
    }

    bool search(int key)
    {
        Node *ptr = head;
        while (ptr != nullptr)
        {
            if (ptr->data == key)
            {
                cout << key << " found in the list.\n";
                return true;
            }
            ptr = ptr->next;
        }
        cout << key << " not found in the list.\n";
        return false;
    }

    // revers
    void reverse() 
{
    Node* prev = nullptr;
    Node* curr = head;
    Node* next = nullptr;

    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    cout << "Linked list reversed...\n";
}


    // display node
    void displayNode()
    {
        Node *ptr = this->head;
        while (ptr != nullptr)
        {
            cout << ptr->data << "   ";
            ptr = ptr->next;
        }
    }
};

int main()
{
    LinkedList l1;

    int data, choice;

    do
    {
        cout << endl << endl << "Press 1 for insert at beginning" << endl;
        cout << "Press 2 for search key" << endl;
        cout << "Press 3 for delete node" << endl;
        cout << "Press 4 for reverse node" << endl;
        cout << "Press 5 for display list" << endl;
        cout << "Press 0 for exit..." << endl << endl;

        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter element : ";
            cin >> data;
            l1.insertNodeBeginning(data);
            break;

        case 2:
            cout << "Enter element to search : ";
            cin >> data;
            l1.search(data);
            break;

        case 3:
            cout << "Enter element to delete : ";
            cin >> data;
           
            break;

        case 4:
            l1.reverse();
            break;

        case 5:
            cout << "Current Linked List : " << endl;
            l1.displayNode();
            break;

        case 0:
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid choice, try again!" << endl;
        }
    } while (choice != 0);
}