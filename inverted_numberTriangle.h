#include <iostream>
using namespace std;

void invertedNTriangle(int col)
{
    for (int i = 1; i <= col; i++)
    {
        for (int j = 1; j <= col + 1 - i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}