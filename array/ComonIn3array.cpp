// date -:9feb Ayush Nauriyal
#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> mp;
    int arr1[] = {1, 2, 3, 4, 7, 0};
    int arr2[] = {1, 3, 7, 5, 9};
    int arr3[] = {1, 2, 3, 7};
    for (int i = 0; i < 6; i++)
    {
        mp[arr1[i]]++;
    }

    for (int i = 0; i < 5; i++)
    {
        mp[arr2[i]]++;
    }
    for (int i = 0; i < 4; i++)
    {

        mp[arr3[i]]++;
    }
    for (auto itr = mp.begin(); itr != mp.end(); itr++)
    {
        if (itr->second > 2)
        {
            cout << itr->first << " ";
        }
    }
}