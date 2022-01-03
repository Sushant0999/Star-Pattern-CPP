#include <iostream>
using namespace std;

void numberPyramid(int col)
{
    for (int i = 1; i <= col; i++)
    {
        for (int j = 0; j < col - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}