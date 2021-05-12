/*

 *  *  *  *  * 
 *  *  *  *  *
 *  *  *  *  *
 *  *  *  *  *
 *  *  *  *  *

*/


#include <iostream>
using namespace std;
void rectangle(int row, int col)
{
    for (int i = 1; i <= k; i++)        //for rows
    {
        for (int j = 1; j <= n; j++)    //for columns
        {
            cout << " * ";
        }
        cout << endl;
    }
}

int main()
{
    int row, col;
    cin >> row >> row;
    rectangle(row, col);
    return 0;
}
