//check a string for a palindrome
//  date -: 18feb Ayush Nauriyal
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a=s.length();
    int flag=1,st=0,en=a-1;
    while(st<en){
        if(s[st++]!=s[en--])
        { 
            
            flag=0;
            break;
        }
    }
    
    if(flag)
    {
    cout<<"string is a palindrome";

    }
    else
    {
        cout<<"string is not a palindrome";
    }
}

