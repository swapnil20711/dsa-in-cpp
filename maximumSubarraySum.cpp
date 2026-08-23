#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    long long sum = 0, maxi = LLONG_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];

        if (sum > maxi)
        {
            maxi = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxi;
}

void maxSubArraySumPrint(vector<int> &nums)
{
    long long sum = 0, maxi = LLONG_MIN;
    int start = -1, ansStart = -1, ansEnd = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        if(sum==0){
            start = i;
        }
        sum += nums[i];

        if (sum > maxi)
        {
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    

    for (int i = ansStart; i <= ansEnd; i++)
    {
        cout<<nums[i]<<" ";
    }
    
}

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << maxSubArray(nums)<<endl;
    maxSubArraySumPrint(nums);
}