#include <iostream>
using namespace std;

void butterfly(int col)
{
    for (int i = 0; i <= col; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        int space = 2 * col - 2 * i;
        for (int j = 0; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = col; i >= 1; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        int space = 2 * col - 2 * i;
        for (int j = 0; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}