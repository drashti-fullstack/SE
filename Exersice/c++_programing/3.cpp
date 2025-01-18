#include <iostream>

using namespace std;

int main()
{
    int a[100][100], b[100][100], ans[100][100], i, j, row;

    cout << "\nEnter the row number = ";
    cin >> row;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++)
        {
            cout << "\nEnter the array element a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++)
        {
            cout << "\nEnter the array element b[" << i << "][" << j << "] = ";
            cin >> b[i][j];
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++)
        {
            ans[i][j] = a[i][j] + b[i][j];
        }
    }
    cout << "\nThe addition of array element = \n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}