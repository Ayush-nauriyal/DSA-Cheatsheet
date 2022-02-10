//date -:10 feb Ayush Nauriyal
//Smallest Subarray with sum greater than a given value
/*
in the outer loop take value of an elemnt 
then traverse the inner loop with its next element to last
when u get sum greater than the given value mark(x in this case) the length of subarray 
and compare it with minimum length and update it accordingly
(ans in the below case)
*/
#include  <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 4, 45, 6, 0, 19};
    int x  =  51;
    int ans=7;
    for (int i = 0; i <6;i++){
        int sum=0;
        sum += arr[i];
        for (int j = i+1; j <6;j++)
        {
            
            sum+=arr[j];
            if(sum>x&&(j-i+1)<ans)
            {
                ans=j-i+1;
            }
        }

    }
    cout<<ans;
}



//Another aproach can be SLIDING WINDOW MAXIMUM
//here a is the mark we need to achieve
int solve(int ar[],int n,int a)
{
  int sum=0,min=n-1,st=0,en=0;
  while(en<n)
  {
      while(sum<a&&en<n)
      {  sum+=ar[en++];

      }
      while(sum>a && st<n)
      {  if((en-st)<min)
        {
            min=en-st;

        }
        sum-=ar[st++];

      }
  }
  return min;
}