#include <bits/stdc++.h>
using namespace std;

int secondLargestElement(vector<int> &nums)
{
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    for (int num : nums)
    {
        if (num > largest)
        {
            secondLargest = largest;
            largest = num;
        }
        else if (num > secondLargest && num < largest)
        {
            secondLargest = num;
        }
    }
    return (secondLargest == INT_MIN ? -1 : secondLargest);
}

int main()
{
    vector<int> nums = {-10,-20};

    cout << secondLargestElement(nums);
}