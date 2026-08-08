#include <bits/stdc++.h>
using namespace std;

// O(n log n)
// SC -> O(1)
int largestElementBrute(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    return nums[nums.size()-1];
}

// optimal solution 
// O(n)
int largestElement(vector<int> &nums)
{
    int largest = nums[0];
    for (int num : nums)
    {
        largest = max(num, largest);
    }
    return largest;
}

int main()
{
    vector<int> nums={3, 3, 6, 1};

    cout << largestElementBrute(nums);
}