//Given an array of size n and a number k, fin all elements that appear more than " n/k " times.
//date -:9feb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,3,5,6,7,8,5,4,3,2};
    int k=2;
    map<int,int> mp;
     for (int i=0; i<10;i++)
     {  mp[arr[i]]++;

     }
     int x=ceil(3/k);
     for(auto itr=mp.begin();itr!=mp.end();itr++){
         if(itr->second>x)
         {
             cout<<itr->first<<" ";
         }
     }
}