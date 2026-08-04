#include <bits/stdc++.h>
using namespace std;

int findMissingNumber(vector<int> &nums)
{
    int arraySum = 0;
    for (int i: nums)
    {
        arraySum+=i;
    }
    int sum = (nums.size() * (nums.size() + 1)) / 2;
    int missingNumber = sum-arraySum;
    return missingNumber;
}

int main()
{
    vector<int> nums = {3, 0, 1};
    int missingNumber = findMissingNumber(nums);

    cout << missingNumber;
}