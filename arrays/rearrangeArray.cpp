#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n, 0);
    int posIndex = 0, negIndex = 1;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 0)
        {
            ans[2 * posIndex] = nums[i];
            posIndex++;
        }
        else
        {
            ans[2 * negIndex - 1] = nums[i];
            negIndex++;
        }
    }

    return ans;
}

// TC O(N) + O(min(pos,neg)) + O(leftovers)
// TC O(2N) will be for the worst case
vector<int> alternateNumbers(vector<int> &nums)
{
    vector<int> pos, neg;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 0)
        {
            pos.push_back(nums[i]);
        }
        else
        {
            neg.push_back(nums[i]);
        }
    }

    if (pos.size() > neg.size())
    {
        for (int i = 0; i < neg.size(); i++)
        {
            nums[2 * i] = pos[i];
            nums[2 * i + 1] = neg[i];
        }

        int index = pos.size() + neg.size();
        for (int i = neg.size(); i < pos.size(); i++)
        {
            nums[index] = pos[index];
            index++;
        }
    }
    else
    {
        for (int i = 0; i < pos.size(); i++)
        {
            nums[2 * i] = pos[i];
            nums[2 * i + 1] = neg[i];
        }

        int index = pos.size() + neg.size();
        for (int i = pos.size(); i < neg.size(); i++)
        {
            nums[index] = neg[index];
            index++;
        }
    }
    return nums;
}

int main()
{
    vector<int> nums = {-1, 1};
    vector<int> alternateNums = {1,2,-4,-5,3,6,7};
    for (int i : alternateNumbers(alternateNums))
    {
        cout << i << " ";
    }
}