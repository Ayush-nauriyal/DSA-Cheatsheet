// Rotate matrix by 90 degrees
//  date -: 18feb Ayush Nauriyal
// the basic idea is to swap the four corner elements
// AND continue the cycle coming in the matrix
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};
    int n = 4;

    for (int i = 0; i < n / 2; i++)
    {
        for (int j = i; j < n - i-1; j++)
        {
            int x=arr[i][j];
            arr[i][j] =arr[n-1-i][i];
            arr[n-1-i][i] =arr[n-1-i][n-1-j];
            arr[n-1-i][n-j-1]=arr[j][n-1-i];
            arr[j][n-1-i]=x;
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }
}