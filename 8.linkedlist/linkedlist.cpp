#include <iostream>
#include "list.h"
using namespace std;

int main()
{
    List nums;
    nums.push_front(10);
    nums.push_back(20);
    nums.print_list();

    return 0;
}