#include <vector>
using namespace std;
template <typename T>
class VectorStack
{
    vector<T> arr;

public:
    void push(T d)
    {
        arr.push_back(d);
    }
    void pop()
    {
        arr.pop_back();
    }

    T top()
    {
        return arr[arr.size() - 1];
    }
    bool empty()
    {
        return arr.empty();
    }
};