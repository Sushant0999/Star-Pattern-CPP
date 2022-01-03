#include <iostream>
using namespace std;

void numberTriangle(int col)
{
    for (int i = 1; i <= col; i++)//for rows
    {
        for (int j = 0; j < i; j++)// for columns
        {
            cout << i;
        }
        cout << endl;
    }
}