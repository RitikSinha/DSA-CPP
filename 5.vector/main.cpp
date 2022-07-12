#include "vector.h"
#include <iostream>
using namespace std;

int main()
{
    Vector<int> V;
    V.push_back(1);
    V.push_back(2);
    V.push_back(3);

    cout << V[0];

    return 0;
}