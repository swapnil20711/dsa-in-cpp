#include <bits/stdc++.h>
using namespace std;

int upperBound(vector<int> &nums, int x)
{
    int n = nums.size();
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] > x)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return low;
}

int lowerBound(vector<int> &nums, int x)
{
    int n = nums.size();
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] >= x)
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return low;
}

vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> ans;
    int n = nums.size();

    int lb = lowerBound(nums, target);
    if (lb < n && nums[lb] == target)
        ans.push_back(lb);
    else
        ans.push_back(-1);

    int ub = upperBound(nums, target) - 1;
    if (ub >= 0 && nums[ub] == target)
        ans.push_back(ub);
    else
        ans.push_back(-1);

    return ans;
}

int main()
{
    vector<int> input = {5, 7, 7, 8, 8, 10};
    for (int i : searchRange(input, 8))
    {
        cout << i;
    }
}