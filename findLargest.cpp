#include <bits/stdc++.h>
using namespace std;

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

    cout << largestElement(nums);
}