//  date -:9feb
//Find if there is any subarray with sum equal to 0

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={4,2,-3,1,6};
    int flag=0;
    int sum=0;
    unordered_set<int> s;
    for(int i=0; i<5; i++)
    {
        sum+=arr[i];
        if(sum==0||s.find(sum)!=s.end()){
            flag=1;
            break;
        }
        s.insert(sum);
    }
    if(flag==0){cout<<"no such subarray present";
    }
    else if(flag==1)
    {
        cout<<"yes such subarrray is present";
    }
}