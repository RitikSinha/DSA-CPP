#include <iostream>
using namespace std;
class List;
class Node
{
    int data;

public:
    Node *next;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    // getter

    int getData()
    {
        return data;
    }

    // destructor
    ~Node()
    {
        if (next != NULL)
            delete next;
    }

    // sharing it with only link class;
    friend class List;
};

class List
{
    Node *head;
    Node *tail;

public:
    List() : head(NULL), tail(NULL) {}

    Node *begin()
    {
        return head;
    }

    void push_front(int data)
    {
        if (head == NULL)
        {
            // create new node
            Node *temp = new Node(data);
            head = tail = temp;
        }
        else
        {
            Node *temp = new Node(data);
            temp->next = head;
            head = temp;
        }
    }

    void push_back(int data)
    {
        if (head == NULL)
        {
            Node *temp = new Node(data);
            head = tail = temp;
        }
        else
        {
            Node *temp = new Node(data);
            tail->next = temp;
            tail = temp;
        }
    }

    void print_list()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->getData() << " ";
            temp = temp->next;
        }
    }
    void pop_front()
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back()
    {
        Node *temp = tail;
        Node *tempH = head;
        while (tempH != NULL)
        {
            tempH = tempH->next;
        }
    }
};