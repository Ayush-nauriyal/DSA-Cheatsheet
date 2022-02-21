//Write a Code to check whether one string is a rotation of another
//  date -: 21 feb Ayush Nauriyal
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1 = "ABCD", str2 = "CDAB";

     if (str1.length() != str2.length())
        return false;

    string temp=str1+str1;
    if(temp.find(str1)!=string::npos)
    {
          cout<<"string are rotations of each other"<<endl;
    }
    else{
        cout<<"string are rotations of not each other"<<endl;
    }



}