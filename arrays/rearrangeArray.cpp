#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    int n = nums.size();
    vector <int> ans(n,0);
    int posIndex = 0 , negIndex = 1;        
    for (int i = 0; i < n; i++)
    {
        if(nums[i]>0){
            ans[2*posIndex] = nums[i];
            posIndex++;
        }else{
            ans[2*negIndex-1] = nums[i];
            negIndex++;
        }
    }
    
    return ans;
}

int main()
{
    vector<int> nums = {-1,1};
    for(int i : rearrangeArray(nums)){
        cout<<i<<" ";
    }
}