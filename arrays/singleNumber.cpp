#include <bits/stdc++.h>
using namespace std;

int findSingleNumber(vector<int> &nums)
{
    int singleNumber = nums[0];
    for (int i = 1;i<nums.size();i++)
    {
        singleNumber=singleNumber^nums[i];
    }
    return singleNumber;
}

int main()
{
    vector<int> nums = {3,3, 0, 1,1};
    int singleNumber = findSingleNumber(nums);

    cout << singleNumber;
}