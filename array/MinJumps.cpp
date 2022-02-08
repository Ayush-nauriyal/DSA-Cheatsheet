//date -:8feb
//Minimum no. of Jumps to reach end of an array

#include<bits/stdc++.h>
using namespace std;
int mimju(int arr[],int n)
{    if(arr[0]==0)
     return -1;

     if (n <= 1)
        return 0;
     int steps=arr[0],reach=arr[0];
     int ans=1;
     
    for(int i=1;i<n;i++)
    {       if(i==n-1)
             return ans;
         reach=max(reach,i+arr[i]);
         steps--;
         if(steps==0){
               ans++;
             if(i>=reach)
             { return -1;
             }
             steps=reach-i;
           

         }
    }
    return -1;
}
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
     cout<<"minimum jumps are :"<<mimju(arr,n);
   
}