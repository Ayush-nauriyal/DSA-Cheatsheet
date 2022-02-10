// date -:10 feb: Ayush Nauriyal
//Choclate distribution problem 
/* Given an array A[ ] of positive integers of size N, where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are M students, the task is to distribute chocolate packets among M students such that :
1. Each student gets exactly one packet.
2. The difference between maximum number of chocolates given to a student and minimum number of chocolates given to a student is minimum.

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n= 8,m= 5;
    int a[]= {3, 4, 1, 9, 56, 7, 9, 12};

    int ans=INT_MAX;
    int dif;
    sort(a,a+n);
    if(n<m)
    {
        cout<<" error";
    }
    else if(n==0||m==0)
    { 
        cout<<" error";
    }
    else
    {
         for(int i=0; i+m-1<n; i++)
    {  
        int dif=a[i+m-1]-a[i];
        ans=min(ans,dif);
    }
    cout<<ans;
    }
   

}