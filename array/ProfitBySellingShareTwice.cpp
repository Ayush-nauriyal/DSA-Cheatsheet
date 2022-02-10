//Maximum profit by buying and selling a share atmost twice
//date-:10 feb Ayush Nauriyal
#include <bits/stdc++.h>
using namespace std;
/*
int main()
{
    int arr[]={2,45,20,36,10};
    int dif,profit=0;
    for(int i=1;i<5;i++){
       dif=arr[i]-arr[i-1];
       
           if(dif>0)
           {  
               profit+=dif;
           }
       
    }
    cout<<"profit: "<<profit<<endl;
}
this approach only works in case of infinite buy and sell
*/



int main(){
int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
int f_b=INT_MIN,f_s=0,s_b=INT_MIN,s_s=0;
for(int i=0;i<n;i++)
{
    f_b=max(f_b,-arr[i]);
    f_s=max(f_s,arr[i]+f_b);
    s_b=max(s_b,f_s-arr[i]);
    s_s=max(s_s,arr[i]+s_b);
}
cout<<s_s<<endl;

}