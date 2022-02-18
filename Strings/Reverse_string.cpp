//revrerse a string
//  date -: 18feb Ayush Nauriyal
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a=s.length();
    // simply use stl reverse(s.begin(), s.end());
    for (int i=0; i<a/2; i++)
    {
        swap(s[i],s[a-1-i]);
    }
    cout<<s;
}
