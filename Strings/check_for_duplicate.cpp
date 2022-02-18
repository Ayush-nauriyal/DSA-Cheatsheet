//check for dulpiacte in string
//  date -: 18feb Ayush Nauriyal
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    map <char,int> mp;
    for (int i=0; i<s.size(); i++)
    {
        mp[s[i]]++;
    }
    for (auto it: mp)
    {
        if(it.second>1)
        { cout<<it.first<<"  "<<it.second<<endl;
        }
    }
}