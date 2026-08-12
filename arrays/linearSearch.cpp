#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums,int k) {
    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i]==k){
            return i;
        }
    }

    return -1;
            
}

int main()
{
    vector<int> nums = {1,2,3,4};

    cout << search(nums,3);
}