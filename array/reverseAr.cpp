//date -:8feb
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int z= a.length()-1;
    int q=0;

    while(q<z){
        swap(a[q],a[z]);
        q++;
        z--;
    }
    cout<<"The revesed string is "<<a<<endl;

}