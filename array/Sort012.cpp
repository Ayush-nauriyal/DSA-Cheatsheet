//date-: 8 feb
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    int l=0;
    int m=0;
    int h=n-1;

    while(m<h)
    {
        if(ar[m]==0) swap(ar[l++],ar[m++]);
        if(ar[m]==1) m++;
        if(ar[m]==2) swap(ar[m],ar[h--]);
    }
    for(int i=0; i<n; i++)
    {
        cout<<ar[i]<<" ";
    }

                        
}
/*#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int arr[n];

    int c0=0,c1=0,c2=0;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

         if(arr[i]==0)
            c0++;

        else if(arr[i]==1)
            c1++;

        else
            c2++;

    }
c1=c1+c0;
c2=c1+c2;


    for(int i=0;i<n;i++)
    {
        if(i<c0)
        {
            arr[i]=0;
        }
        else if(i<c1)
        {

            arr[i]=1;
        }
        else if(i<c2)
        {

            arr[i]=2;
        }

    }
    for(int i=0;i<n;i++)
    {

        cout<<arr[i];
    }
}
*/