#include <bits/stdc++.h>
using namespace std;


// TC : O(N*N) SC: O(N)
vector<int> findLeaders(vector<int> &nums){
    int n = nums.size();
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        bool isLeader = true;

        for (int j = i+1; j < n; j++)
        {
            if(nums[j]>nums[i]){
                isLeader = false;
                break;
            }
        }
        
        if(isLeader){
            ans.push_back(nums[i]);
        }
    }

    return ans;
    
}

vector<int> findLeadersOptimal(vector<int> &nums){
    int n = nums.size();
    vector<int> ans;
    int maxi = INT_MIN;
    for (int i = n-1; i >= 0; i--)
    {
        if (nums[i]>maxi)
        {
            // max = nums[i];
            ans.push_back(nums[i]);
        }
        maxi = max(maxi,nums[i]);
        
    }
    sort(ans.begin(),ans.end());
    return ans;
    
}

int main() {
    vector<int> inp = {10,22,12,3,0,6};
    vector<int> op = findLeadersOptimal(inp);

    for(int i : op){
        cout<<i<<" ";
    }
}