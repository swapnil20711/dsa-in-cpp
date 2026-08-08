#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int> &nums)
{
    int largest = 0;
    int secondLargest = 0;

    for (int i : nums)
    {
        if (i > largest)
        {
            secondLargest = largest;
            largest = max(largest, i);
        }
        else
        {
            secondLargest = max(secondLargest, i);
        }
    }
    return (largest - 1) * (secondLargest - 1);
}

int main()
{
    vector<int> nums = {3, 4, 5, 2};
    cout << maxProduct(nums);
}