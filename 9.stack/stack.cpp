#include <iostream>
#include "stack.h"
using namespace std;
int main()
{
    Stack<int> s;

    s.push(10);
    s.push(20);
    cout << s.empty() << endl;
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;

    return 0;
}