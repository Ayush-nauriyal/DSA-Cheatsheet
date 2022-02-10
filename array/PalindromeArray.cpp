//date -:10 feb Ayush Nauriyal
//Palindrome array
#include <bits/stdc++.h>
using namespace std;
int flag=1;
//this approach convert the whole array into string and then compare it
/* 
int main()
{
    string a;
    int s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(i==0){
            a=to_string(s);
        }
        else
        a+=to_string(s);
    }
   int i=0,x=a.length()-1;
   int flag=1;
   cout<<a<<endl;
    while(i<x)
    {
        if(a[i++]!=a[x--])
        flag=-1;

    }
    if(flag==-1)
    cout<<"no";
    else if(flag==1)
    cout<<"yes";
}
*/
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {  string s;
        cin>>s;
        int r=s.length();
        int j=0;
        while(r<=j)
        {
            if(s[r--]!=s[j++])
            {
                flag=-1;
            }
        }
    }
    if (flag==1)
    { cout<<"yes";
    }
    else
    {
        cout<<" no";
    }
}
