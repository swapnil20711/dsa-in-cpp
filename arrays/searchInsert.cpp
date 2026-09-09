#include <bits/stdc++.h>
using namespace std;

// int searchInsert(vector<int>& nums, int target) {
//         int left = 0;
//         int right = nums.size() - 1;

//         while (left <= right) {
//             int mid = left + (right - left) / 2;

//             if (nums[mid] == target) {
//                 return mid;
//             } else if (nums[mid] < target) {
//                 left = mid + 1;
//             } else {
//                 right = mid - 1;
//             }
//         }
//         return left;
//     }

int searchInsert(vector<int> &nums, int target)
{
    int n = nums.size();
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] >= target)
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return low;
}

int main()
{
    vector<int> nums = {1, 3, 5, 6};

    cout << searchInsert(nums, 5);
}