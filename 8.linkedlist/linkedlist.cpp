#include <iostream>
#include "list.h"
using namespace std;

int main()
{
    List nums;
    nums.push_front(10);
    nums.push_back(20);
    nums.push_back(30);

    // nums.print_list();
    nums.pop_back();

    return 0;
}