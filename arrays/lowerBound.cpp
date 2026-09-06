#include <bits/stdc++.h>
using namespace std;

int lowerBoundBrute(vector<int> nums, int x)
{
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] >= x)
        {
            return i;
        }
    }

    return nums.size();
}

int lowerBoundOptimal(vector<int> nums, int x)
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

int main()
{
    vector<pair<vector<int>, int>> tests = {
        {{}, 5}, {{5}, 5}, {{5}, 10}, {{5}, 2}, {{1, 3, 5, 7, 9}, 0}, {{1, 3, 5, 7, 9}, 100}, {{1, 3, 5, 7, 9}, 7}, {{1, 3, 5, 7, 9}, 6}, {{-5, -3, -1, 0, 4}, -3}, {{3, 5, 7}, 3}, {{3, 5, 7}, 7}, {{1, 2, 2, 2, 3}, 2}, {{2, 2, 2, 2, 2}, 2}, {{1, 2, 2, 2, 2, 3}, 2}};
    for (auto &[v, x] : tests)
    {
        int got = lowerBoundOptimal(v, x);
        int expected = lower_bound(v.begin(), v.end(), x) - v.begin();
        printf("x=%4d  got=%d  std::lower_bound=%d  %s\n",
               x, got, expected, got == expected ? "OK" : "MISMATCH");
    }
}