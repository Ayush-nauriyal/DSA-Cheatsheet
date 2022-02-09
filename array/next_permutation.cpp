//date -:9 feb
//Next Permutation
// find from last element bigger than its previous element
//the store it(pos=idx)
//find element just bigger than it may even be itself and swap it with pos(idx-1)
#include<bits/stdc++.h>
using namespace std;
 void nextPermutation(vector<int>& a) {
        int idx=-1;
        int n=a.size();
        for(int i=n-1;i>0;i--)
        {
            if(a[i]>a[i-1])
            {  idx=i;
                break;
            }
        }
        if(idx==-1)
            reverse(a.begin(),a.end());
        else 
        { int x=idx;
            for(int i=idx+1;i<n;i++)
            {
                if(a[i]>a[idx-1] && a[i]<=a[idx])
                {
                    x=i;   
                }
            }
           
         swap(a[idx-1],a[x]);
         reverse(a.begin()+idx,a.end());
        }
        for(int i=0;i<a.size();i++)
        {
            cout<<a[i];
        }
        cout<<endl;
    }
    int main()
    {   vector<int>a{5,2,3,4,1};
        nextPermutation(a);

    }
