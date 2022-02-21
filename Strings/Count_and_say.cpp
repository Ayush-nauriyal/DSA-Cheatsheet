//Count and Say problem
//  date -: 21 feb Ayush Nauriyal
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,ans;
    cin>>s;
    ans="";
    char var=s[0];
    int x=1;
    for(int i=1;i<s.length();i++)
    {  
        if(s[i]==var)
        {
            x++;
        }
        else
        {   ans+=to_string(x)+var;
            x=1;
            var=s[i];
        }

    }    
    cout<<ans<<endl;
}