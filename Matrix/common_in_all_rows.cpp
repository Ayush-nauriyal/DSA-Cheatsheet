//Common elements in all rows of a given matrix
//  date -: 18feb Ayush Nauriyal
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m=4,n=5;
    int arr[m][n] =
    {
        {1, 2, 5, 4, 8},
        {3, 7, 8, 5, 1},
        {8, 7, 7, 3, 1},
        {8, 1, 2, 7, 9},
    };
      map <int,int> mp;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
           mp[arr[i][j]]++;
        }
    }

    cout<<"the commom elements are"<<endl;
    for(auto i=mp.begin(); i != mp.end(); i++)
     {     
         if(i->first>=m)
         {
            cout<<i->second;
         }
         cout<<i->first<<" "<<i->second<<endl;
     }
}