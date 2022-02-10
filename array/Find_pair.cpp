//find all pairs on integer array whose sum is equal to given number
// date -:9feb Ayush Nauriyal
#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int arr[] = {2,2,2,2};
    int k=4;
    map<int,int> mp;
    int diff,ans=0;
    
    for(int i=0;i<4;i++)
    {
       diff=k-arr[i];
       if(mp[diff])
          ans=ans+mp[diff];
        mp[arr[i]]++;
    }
    cout<<ans;

    

}