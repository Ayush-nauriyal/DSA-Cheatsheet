//date- 9 feb  Ayush Nauriyal
//Solved on lead code
//merge intervals
/*
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        vector<vector<int>> ans;
        sort(in.begin(),in.end());
        ans.push_back(in[0]);
        int j=0;
        for(int i=1;i<in.size();i++)
        {
            if(ans[j][1]>=in[i][0])
            {
                ans[j][1]=max(ans[j][1],in[i][1]);
            }
            else
            {
                ans.push_back(in[i]);
                j++;
            }
        }
        return ans;
    }
};
*/
#include<bits/stdc++.h>
using namespace std;

  vector<vector<int>> merge(vector<vector<int>>& intervals) {


        vector<vector<int>> res;

        if(intervals.size()==0)
        {
            return res;
        }

        sort(intervals.begin(),intervals.end());

        res.push_back(intervals[0]);

        int j=0;

        for(int i=1;i<intervals.size();i++)
        {
            if(res[j][1]>=intervals[i][0])
            {
                res[j][1]=max(res[j][1],intervals[i][1]);
            }
            else
            {
                res.push_back(intervals[i]);
                j++;
            }

            }

        return res;
    }

    int main()
    {
         vector<vector<int>> intervals{{1,3},{2,6},{8,10},{15,18}};

        intervals= merge(intervals);
         for (auto it: intervals)
         {

             for (auto ij: it)
             {

                 cout<<ij<<" ";
             }
             cout<<endl;
         }
    }