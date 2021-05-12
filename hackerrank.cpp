#include <iostream>
using namespace std;
void rectangle(int k, int n)
{
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

int main()
{
    int i, n;
    cin >> i >> n;
    rectangle(i, n);
    return 0;
}