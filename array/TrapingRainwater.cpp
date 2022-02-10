// date -:10 feb: Ayush Nauriyal
//Trapping Rain water problem
#include <bits/stdc++.h>
using namespace std;

int maxWater(int arr[], int n)
{

    int l = 0, r = n - 1, l_max = 0, r_max = 0;

    int res = 0;
    while (l <= r)
    {

        if (r_max <= l_max)
        {

            res += max(0, r_max - arr[r]);

            r_max = max(r_max, arr[r]);

            r -= 1;
        }
        else
        {

            res += max(0, l_max - arr[l]);

            l_max = max(l_max, arr[l]);

            l++;
        }
    }
    return res;
}

int main()
{
    int arr[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxWater(arr, n) << endl;
    return 0;
}
