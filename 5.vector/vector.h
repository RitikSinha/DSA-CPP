template <typename T>
class Vector
{
    T *arr;
    int cs;
    int ms;

public:
    Vector(int ms = 1)
    {
        cs = 0;
        ms = 1;
        arr = new T[ms];
    }
    void push_back(T d)
    {
        // when vector is full
        if (cs == ms)
        {
            /*create a new array of double the size
            copy the item and delete the old array*/
            T *oldArr = arr;
            ms = 2 * ms;
            arr = new T[ms];
            for (int i = 0; i < cs; i++)
            {
                arr[i] = oldArr[i];
            }
            delete[] oldArr;
        }
        arr[cs] = d;
        cs++;
    }
    void pop_back()
    {
        if (cs >= 0)
        {
            cs--;
        }
    }
    bool isEmpty()
    {
        return cs == 0;
    }
    T front()
    {
        return arr[0];
    }
    T back()
    {
        return arr[cs - 1];
    }
    int size()
    {
        return cs;
    }
    int capacity()
    {
        return ms;
    }
    T at(int d)
    {
        return arr[d];
    }
    int operator[](int i)
    {
        return arr[i];
    }
};
