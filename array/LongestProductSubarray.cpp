//find maximum product subarray 
//date -:9feb Ayush Nauriyal
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,-3,-4,0,-5,6};
    int prod=1;
    int ma=INT_MIN;
    for(int i=0; i<9; i++)
    {    
        if(prod==0)
        { prod=1;
        }
        prod*=arr[i];
        ma=max(ma, prod);
    }
    cout<<ma;

}