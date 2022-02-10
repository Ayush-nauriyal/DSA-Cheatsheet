//Find whether an array is a subset of another array

//date -:10 feb Ayush Nauriyal

#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int> mp;
   int a1[] = {10, 5, 2, 23, 19};
    int a2[] = {19, 5, 3};
    int c=0, x =3;//size of second array
    for(int i=0; i<5; i++)
    {
        mp[a1[i]]++;
    }
    for(int i=0; i<3; i++)
    { mp[a2[i]]++;
    }
    for(auto i=mp.begin(); i!=mp.end(); i++)
    {
        if(i->second==2)
        {
            c++;
        }
    }
    if(c==x)
    { cout<<"yes";}

    else
     cout<<"no";

}