//date -:10 feb Ayush Nauriyal
//Find longest coinsecutive subsequence

#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int n,ans=0;
    cin>>n;
    int arr[n];
    unordered_set<int> s;
     for (int i=0; i<n; i++)
     {   cin>>arr[i];
         s.insert(arr[i]);
     }
     for(int i=0; i<n; i++)
     {
         if(s.find(arr[i]-1)==s.end())
         {
             int j=arr[i];
             while(s.find(j)!=s.end())
             j++;

             ans=max(ans,j-arr[i]);
         }

     }
     cout<<ans;
    

}