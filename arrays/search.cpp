#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &nums, int target)
{
    int n = nums.size();
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    cout << search(nums, 9);
}