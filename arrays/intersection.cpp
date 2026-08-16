#include <bits/stdc++.h>
using namespace std;

vector<int> intersectionArray(vector<int> &nums1, vector<int> &nums2)
{
    int n1 = nums1.size();
    int n2 = nums2.size();

    vector<int> visited(n2, 0);
    vector<int> intersectionArr;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (nums1[i] == nums2[j] && visited[j] == 0)
            {
                intersectionArr.push_back(nums1[i]);
                visited[j] = 1;
                break;
            }
            if (nums2[j] > nums1[i])
            {
                break;
            }
        }
    }

    return intersectionArr;
}

vector<int> intersectionArrayOptimal(vector<int> &nums1, vector<int> &nums2)
{
    int n1 = nums1.size();
    int n2 = nums2.size();
    vector<int> intersectionArr;
    int i = 0;
    int j = 0;

    while (i < n1)
    {
        if (nums1[i] < nums2[j])
        {
            i++;
        }
        else if (nums2[j] < nums1[i])
        {
            j++;
        }
        else
        {
            intersectionArr.push_back(nums2[j]);
            i++;
            j++;
        }
    }

    return intersectionArr;
}

int main()
{
    vector<int> nums = {1, 2, 2, 3, 3, 4, 5, 6};
    vector<int> nums1 = {2, 3, 3, 5, 6, 6, 7};

    vector<int> res = intersectionArrayOptimal(nums, nums1);

    for (int i : res)
    {
        cout << i << " ";
    }
}