#include <iostream>
using namespace std;

void rhombus(int col)
{
    for (int i = 1; i <= col; i++)
    {
        for (int j = 1; j <= col - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= col; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}