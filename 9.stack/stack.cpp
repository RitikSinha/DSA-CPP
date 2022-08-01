#include <iostream>
#include <vector>
#include "stack.h"
#include "vectorStack.h"
using namespace std;
int main()
{
    Stack<int> s;
    VectorStack<int> v;

    v.push(10);
    v.push(20);
    cout << v.empty() << endl;
    cout << v.top() << endl;
    v.pop();
    cout << v.top() << endl;

    return 0;
}