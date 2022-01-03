#include <iostream>
using namespace std;

void invertedTriangle(int col)
{
    for (int i = col; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}