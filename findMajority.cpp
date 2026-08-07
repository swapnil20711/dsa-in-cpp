#include <bits/stdc++.h>
using namespace std;

int findMajority(vector<int> &nums)
{
    int candidate = -1, votes = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        if (votes == 0)
        {
            candidate = nums[i];
            votes = 1;
        }
        else
        {
            nums[i] == candidate ? votes++ : votes--;
        }
    }


    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(nums[i]==candidate){
            count++;
        }
    }

    if(count>n/2){
        return candidate;
    }
    return -1;
    
}

int main()
{
    vector<int> nums = {1, 1, 1, 6};

    cout << findMajority(nums);
}