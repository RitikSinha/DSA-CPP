template <typename T>
class Stack;

template <typename T>
class Node
{
public:
    T data;
    Node *next;
    Node(T data)
    {
        data = data;
        next = NULL;
    }
};

template <typename T>
class Stack
{
public:
    Node *head;

    void push(T data)
    {
        T temp = new Node(data);
        temp->next = head;
        temp = head;
    }
    T top()
    {
        return head->data;
    }
};