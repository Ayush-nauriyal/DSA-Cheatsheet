//date -:10 feb Ayush Nauriyal
//find median
#include <bits/stdc++.h>
using namespace std;
int main()
{    int arr[]={90, 100, 78 ,89, 67};
      int n=5;
      /*
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    */
   sort(arr,arr+n);
   if(n/2==0){
       cout<<(arr[n/2]+arr[n/2-1])/2;
   }
   else
   cout<<arr[(n-1)/2];
      
}