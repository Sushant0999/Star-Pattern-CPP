#include <iostream>
using namespace std;

void star(int col)
{
    for (int i = 1; i <= col; i++)
    {
        for (int j = 1; j <= col - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = col; i >= 1; i--)
    {
        for (int j = 1; j <= col - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}