//date -:8feb
//find duplicate in an array of N+1 Integers
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    set<int> s;
   for(int i=0; i<n; i++)
   {   if(s.count(arr[i]))
         {cout<<arr[i];
          break;
          }
         else
        s.insert(arr[i]);

   } 
   
}