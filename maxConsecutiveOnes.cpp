#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxOnes = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                count++;
            } else {
                count = 0;
            }

            maxOnes = max(maxOnes, count);
        }
        return maxOnes;
    }

int main()
{
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    int maxOnes = findMaxConsecutiveOnes(nums);

    cout<<maxOnes;
}