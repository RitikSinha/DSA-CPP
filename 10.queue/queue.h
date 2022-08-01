#include <iostream>
using namespace std;
class Queue
{
    int *arr;
    int maxSize;
    int currentSize;
    int front;
    int rear;

public:
    Queue(int size = 5)
    {
        maxSize = size;
        arr = new int[maxSize];
        currentSize = 0;
        front = 0;
        rear = maxSize - 1;
    }

    bool isEmpty()
    {
        return currentSize == 0;
    }
    bool isFull()
    {
        return currentSize == maxSize;
    }

    void push(int d)
    {
        if (!isFull())
        {
            rear = (rear + 1) % maxSize;
            arr[rear] = d;
            currentSize++;
        }
    }
    void pop()
    {
        if (!isEmpty())
        {
            front = (front + 1) % maxSize;
            currentSize--;
        }
    }

    int getFront()
    {
        return arr[front];
    }
};