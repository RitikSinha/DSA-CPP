#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    int x = 0, y = 0;
    cout << "Enter Directions" << endl;
    ch = cin.get();
    while (ch != '\n')
    {
        ch = cin.get();
        switch (ch)
        {
        case 'E':
            y++;
            break;
        case 'W':
            y--;
        case 'N':
            x++;
        case 'S':
            x--;
        default:
            break;
        }
    }
    if (x > 0 && y > 0)
    {
        cout << "1st quadrant" << endl;

        for (int i = 1; i <= x; i++)
        {
            cout << 'N';
        }
        for (int i = 1; i <= y; i++)
        {
            cout << 'E';
        }
    }
    if (x < 0 && y > 0)
    {
        cout << "2nd quadrant" << endl;

        int s = -1 * x;
        for (int i = 1; i <= s; i++)
        {
            cout << 'S';
        }
        for (int i = 1; i <= y; i++)
        {
            cout << 'E';
        }
    }
    if (x < 0 && y < 0)
    {
        cout << "3rd quadrant" << endl;

        int s = -1 * x;
        int w = -1 * y;

        for (int i = 1; i <= s; i++)
        {
            cout << 'S';
        }
        for (int i = 1; i <= w; i++)
        {
            cout << 'W';
        }
    }
    if (x > 0 && y < 0)
    {
        cout << "4th quadrant" << endl;

        int w = -1 * y;

        for (int i = 1; i <= x; i++)
        {
            cout << 'N';
        }
        for (int i = 1; i <= w; i++)
        {
            cout << 'W';
        }
    }
    return 0;
}