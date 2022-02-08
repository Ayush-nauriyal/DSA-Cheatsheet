//date -:8feb
//Minimise the maximum difference between heights 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,k,mi=INT_MAX,ma=INT_MIN;
    cin>>n;
    cin>>k;
    for(int i=0;i<n;i++)
    { cin>>x;
      ma=max(ma,x);
      mi=min(mi,x);
    }
    int ans=ma-mi;
    if(ans>=2*k)
    ans-=2*k;
    else if(ans>=k)
    ans-=k;
    else
    ans=abs(ans-k);
    cout<<ans;
    
}