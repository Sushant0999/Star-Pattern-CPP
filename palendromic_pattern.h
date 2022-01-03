#include <iostream>
using namespace std;

void palindrome(int col)
{
    for (int i = 1; i <= col; i++)
    {
        int j;
        for (j = 1; j <= col - i; j++)
        {
            cout << " ";
        }
        int k = i;
        for (; j <= col; j++)
        {
            cout << k--;
        }
        k = 2;
        for (; j <= col + i - 1; j++)
        {
            cout << k++;
        }
        cout << endl;
    }
}