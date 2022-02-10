//date -:8feb Ayush Nauriyal
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++)
    cin>>arr[i];
    int sum =0;
    int ma=INT_MIN;
    for (int i = 0; i < n; i++)
    {
      if(sum<0)
      sum=0;
      sum+=arr[i];
      ma=max(sum,ma);
    }
    cout<<"sum = "<<ma<<endl;
}