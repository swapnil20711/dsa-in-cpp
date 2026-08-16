#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    map<int, int> mpp;
    for (int i = 0; i < nums.size(); i++)
    {
        int num = nums[i];
        int more = target - num;

        if(mpp.find(more)!=mpp.end()){
            return {i,mpp[more]};
        }
        mpp[num] = i;

    }
    return {};
    
}

int main()
{
    vector<int> nums = {2,7,11,15};
    vector<int>res = twoSum(nums,9);

    for(int num:res){
        cout<<num<<" ";
    }

}