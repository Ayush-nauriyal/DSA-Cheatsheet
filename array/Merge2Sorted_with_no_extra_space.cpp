// date -:9feb
//Merge 2 sorted arrays without using Extra space.

#include <bits/stdc++.h>
using namespace std;
void mergeArray(int arr1[], int arr2[], int n, int n1)
{
    int i=n-1,j=0;

    while(i>=0 && j<n1)
    {
        if(arr1[i]>arr2[j])
        {
            swap(arr1[i],arr2[j]);
        }

        i--;
        j++;
    }

    sort(arr1,arr1+n);

    sort(arr2,arr2+n1);
   /* for (int i = 0; i < n; i++)
    {
        if (arr1[i] > arr2[0])
        {
            swap(arr1[i], arr2[0]);

            int firstElement = arr2[0];

            int k;

            for (k = 1;
                 k < n1 && arr2[k] < firstElement;
                 k++)
            {
                arr2[k - 1] = arr2[k];
            }
            arr2[k - 1] = firstElement;
        }
    }*/

    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n1; i++)
    {
        cout << arr2[i] << " ";
    }
}

int main()
{
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {0, 2, 8, 3, 9};
    int n = sizeof(arr1) / sizeof(arr1[0]), m = sizeof(arr2) / sizeof(arr2[0]);

    mergeArray(arr1, arr2, n, m);
}

