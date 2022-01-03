#include <iostream>

using namespace std;

void rectangle(int row, int col)
{
    for (int i = 0; i < row; i++) //for rows
    {
        for (int j = 0; j < col; j++) //for columns
        {
            cout << " * ";
        }
        cout << endl;
    }
}
