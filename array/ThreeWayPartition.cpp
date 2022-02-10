// date -:10 feb Ayush Nauriyal
//Three way partitioning of an array around a given value


#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    */
    int ar[] = {1, 14, 5, 20, 4, 2, 54, 20, 87,
                98, 3, 1, 32};
    int n = sizeof(ar)/sizeof(ar[0]);
    /*int a,b;
    cin>>a>>b;
    */
   int a=10,b=20;
   int l=0,m=0,h=n-1;
   while(m<=h)
   {
       if(ar[m]<a){
           if(m==l)
           { m++;
           l++;
           }
           else
           {
               swap(ar[m++],ar[l++]);
           }
       }
       else if(ar[m]>b)
       {
           swap(ar[m],ar[h--]);
       }
       else
        m++;
   }

   
   for(int i=0; i<n; i++)
   {
       cout<<ar[i]<<" ";
   }
}