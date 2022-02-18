//Find row with maximum no. of 1's
//  date -: 18feb Ayush Nauriyal
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4][4]={{0,1,0,0},{0,1,1,0},{0,1,1,1},{1,1,1,1}};
    int n=4 ,m=4;
    int ans=0,com=INT_MIN;
    for (int i=0;i<n;i++)
    {  int count=0;
        for(int j=0;j<m;j++)
        { 
            if(arr[i][j]==0)
            { count++;}
        }
        if(count>com)
        { count=com;
           ans=i;
           }
    }
    cout<<"the row with highest number of 1 is :"<<ans+1;
}