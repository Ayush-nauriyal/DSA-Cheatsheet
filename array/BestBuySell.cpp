// date -:9feb Ayush Nauriyal
//Best time to buy and Sell stock


#include <bits/stdc++.h>
using namespace std;
 int maxProfit(vector<int>& a) {
        int n=a.size();
        int profit=0;
        int sm=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(sm>a[i])
                sm=a[i];
            else if(a[i]-sm>profit)
                profit=a[i]-sm;
        }
        return profit;
    }
 int main() {
     vector<int> ans{1,5,3,7,4,8};
     cout<<maxProfit(ans)<<endl;
 }   