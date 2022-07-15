#include <iostream>
using namespace std;

void findSubset(char *input, char *output, int i, int j)
{
    if (input[i] == '\0')
    {
        output[j] = '\0';

        cout << output << endl;
        return;
    }
    // including the ith letter
    output[j] = input[i];
    findSubset(input, output, i + 1, j + 1);
    // not including the ith letter
    findSubset(input, output, i + 1, j);
}
int main()
{
    char input[100];
    char output[100];
    cout << "please enter sequence" << endl;
    cin >> input;

    findSubset(input, output, 0, 0);
    return 0;
}