#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>& nums) {
    for (int i = 1; i < nums.size(); i++)
    {
        if(nums[i]<nums[i-1]){
            return false;
        }
    }

    return true;
            
}

int main()
{
    vector<int> nums = {1,2,3,4};

    cout << secondLargestElement(nums);
}