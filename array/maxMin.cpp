//date -:8feb
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,ma=INT_MIN,mi=INT_MAX;
    cout<<"enter number of terms";
    cin>>n;
    for(int i=0;i<n;i++)
    {
    cin>>x;
    if(ma<x) ma=x;
    if(mi>x) mi=x;
    }
    cout<<mi<<"  "<<ma;


}