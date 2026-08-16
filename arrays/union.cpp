#include <bits/stdc++.h>
using namespace std;

vector<int> unionArray(vector<int> &nums1, vector<int> &nums2)
{
    set<int> s;
    vector<int> res;
    for (int i = 0; i < nums1.size(); i++)
    {
        s.insert(nums1[i]);
    }

    for (int i = 0; i < nums2.size(); i++)
    {
        s.insert(nums2[i]);
    }

    for (auto it : s)
    {
        res.push_back(it);
    }

    return res;
}

vector<int> unionArrayOptimal(vector<int> &nums1, vector<int> &nums2)
{
    int n1 = nums1.size();
    int n2 = nums2.size();
    int i = 0;
    int j = 0;

    vector<int> unionArr;
    while (i < n1 && j < n2)
    {
        if (nums1[i] <= nums2[j])
        {
            if (unionArr.size() == 0 || unionArr.back() != nums1[i])
            {
                unionArr.push_back(nums1[i]);
            }
            i++;
        }
        else
        {
            if (unionArr.size() == 0 || unionArr.back() != nums2[j])
            {
                unionArr.push_back(nums2[j]);
            }
            j++;
        }
    }

    while (j < n2)
    {
        if (unionArr.size() == 0 || unionArr.back() != nums2[j])
        {
            unionArr.push_back(nums2[j]);
        }
        j++;
    }

    while (i < n1)
    {
        if (unionArr.size() == 0 || unionArr.back() != nums1[i])
        {
            unionArr.push_back(nums1[i]);
        }
        i++;
    }

    return unionArr;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    vector<int> nums1 = {2, 3, 4, 4, 5, 6};

    vector<int> res = unionArrayOptimal(nums, nums1);

    for (int r : res)
    {
        cout << r << " ";
    }
}