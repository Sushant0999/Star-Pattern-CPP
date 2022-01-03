#include <iostream>
using namespace std;

void triangle(int col)
{
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j < col - i)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}