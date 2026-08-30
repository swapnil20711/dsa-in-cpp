#include <bits/stdc++.h>
using namespace std;

bool linearSearch(vector<int> &nums, int target)
{
    int size = nums.size();
    for (int i = 0; i < size; i++)
    {
        if (nums[i] == target)
        {
            return true;
        }
    }
    return false;
}

// brute force approach
int findLongestConsecutiveSeq(vector<int> &nums)
{
    int n = nums.size();
    int longest = 1;

    for (int i = 0; i < n; i++)
    {
        int x = nums[i];
        int count = 1;

        while (linearSearch(nums, x + 1))
        {
            x = x + 1;
            count++;
        }

        longest = max(longest, count);
    }

    return longest;
}

int findLongestConsecutiveSeqBetter(vector<int> &nums)
{
    int n = nums.size();
    int longest = 1;
    int lastSmallest = INT_MIN;
    int currentCount = 1;

    if (n == 0)
    {
        return 0;
    }

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++)
    {
        if (nums[i] - 1 == lastSmallest)
        {
            currentCount = currentCount + 1;
            lastSmallest = nums[i];
        }
        else if (nums[i] != lastSmallest)
        {
            currentCount = 1;
            lastSmallest = nums[i];
        }

        longest = max(currentCount, longest);
    }

    return longest;
}

int findLongestConsecutiveSeqOptimal(vector<int> &nums)
{
    int n = nums.size();
    int longest = 1;
    unordered_set<int> numsSet;

    if (n == 0)
    {
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        numsSet.insert(nums[i]);
    }

    for (auto it : numsSet)
    {
        int currentCount = 1;
        int x = it;
        if (numsSet.find(x-1) == numsSet.end())
        {
            while (numsSet.find(x + 1) != numsSet.end())
            {
                x = x + 1;
                currentCount = currentCount+1;
            }
            longest = max(longest, currentCount);
        }
    }
    return longest;
}
int main()
{
    vector<int> inp = {102, 4, 100, 1, 101, 3, 2, 1, 1, 5};
    int op = findLongestConsecutiveSeqOptimal(inp);

    cout << op;
}