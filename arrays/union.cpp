#include <bits/stdc++.h>
using namespace std;

vector<int> unionArray(vector<int>& nums1,vector<int>& nums2) {
    set<int> s;
    vector<int>res;
    for (int i = 0; i < nums1.size(); i++)
    {
        s.insert(nums1[i]);
    }

    for (int i = 0; i < nums2.size(); i++)
    {
        s.insert(nums2[i]);
    }

    for(auto it: s){
        res.push_back(it);
    }

    return res;
            
}

int main()
{
    vector<int> nums = {1,2,3,4};
    vector<int> nums1 = {2,3,4,4,5,6};

    vector <int> res = unionArray(nums,nums1);

    for(int r: res){
        cout<<r<<" ";
    }
}