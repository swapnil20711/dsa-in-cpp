#include <bits/stdc++.h>
using namespace std;

// better approach
// tc -> O(n*logn) orderd map
// tc -> O(n*n) for unordered map
// sc -> O(n)
int longestSubarray(vector<int> &nums, int k)
{
    map<long, long> preSumMap;
    long long sum = 0;
    int maxLen = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];

        if (sum == k)
        {
            maxLen = max(maxLen, i + 1);
        }

        long long rem = sum - k;

        // cout << (preSumMap.find(rem) != preSumMap.end()) << endl;

        if (preSumMap.find(rem) != preSumMap.end())
        {
            int len = i - preSumMap[rem];
            // cout<<len;
            maxLen = max(maxLen, len);
        }
        if (preSumMap.find(sum) == preSumMap.end())
        {
            preSumMap[sum] = i;
        }
    }

    return maxLen;
}

int longestSubarrayOptimal(vector<int> &nums, int k)
{
    // 1, 2, 3, 1, 1, 1, 1
    // sum = 1
    // maxLen = 0
    // left = 0
    // right = 0
    // n =7
    // 0<7
    // 0<=0 && 1>3 false
    // right = 1
    // 1<7
    // sum=3
    // 0<=1 && 3>3 false
    // 3==3 maxLen(0,2-1+1) maxLen=2
    // right = 2
    // sum = 6
    // 0<=2 && 6>3 true
    // sum = 5 , left = 1
    // 5==3 false
    // right = 3 sum=6 left=1
    // 1<=3 && 6>3 true
    // sum=4 left = 2
    // 4==3 false 
    // right = 4,sum=5 
    // 2<=4 && 5>3 true
    // sum = 5 - 3 = 2 left = 3
    // 2==3 false
    //right=5 , sum = 3
    // 3==3
    // maxLen = (2,5-3+1) 
    // maxLen = 3
    //right = 6 , sum=4 left = 3
    // 3<=4 && 4>3 true
    // sum = 3 left=4
    // maxLen = 3
    long long sum = nums[0];
    int maxLen = 0;
    int left = 0;
    int right = 0;
    int n = nums.size();

    while (right < n)
    {
        while (left <= right && sum > k)
        {
            sum -= nums[left];
            left++;
        }
        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if (right < n)
        {
            sum += nums[right];
        }
    }

    return maxLen;
}

int main()
{
    vector<int> nums = {1, 2, 3, 1, 1, 1, 1};
    // vector<int> nums = {2, 0, 0, 3};

    cout << longestSubarrayOptimal(nums, 3);
}