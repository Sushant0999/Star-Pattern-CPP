#include <iostream>
using namespace std;

void fTriangle(int col)
{
    int count = 1;
    for (int i = 1; i <= col; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}