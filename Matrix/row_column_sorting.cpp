//Print elements in sorted order using row-column wise sorted matrix
//  date -: 18feb Ayush Nauriyal
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3]={ { 5, 4, 7 },{ 1, 3, 8 }, { 2, 9, 6 } };
    int n=3,m=3,a=0;
    int arr1[n*n];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            arr1[a++]=arr[i][j];
        }
       
    }
    sort(arr1,arr1+a);
    a=0;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            arr[i][j]=arr1[a++];
        }
       
    }

    
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }

}