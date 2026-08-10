#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    set<int> numsSet;
    vector<int> res;

    for (int i : nums1)
    {
        numsSet.insert(i);
    }

    for(int i:nums2){
        if(numsSet.find(i)!=numsSet.end() && find(res.begin(), res.end(), i) == res.end()){
            res.push_back(i);
        }
    }
    
    return res;
}

int main()
{
    vector <int> nums1 = {1,2,2,1};
    vector<int> nums2 = {2,2};

    for(int i: intersection(nums1,nums2)){
        cout<<i;
    }

}