#include <bits/stdc++.h>
using namespace std;

// left rotate 
// void rotate(vector<int> &nums, int k)
// {
//     int n = nums.size();
//     int mod = k % n;

//     vector<int> temp;
//     for (int i = 0; i < mod; i++)     
//         temp.push_back(nums[i]);       // temp = {1,2,3}

//     for (int i = mod; i < n; i++)     
//         nums[i - mod] = nums[i];       // shift left

//     for (int i = 0; i < mod; i++)
//         nums[n - mod + i] = temp[i];   // append in order
// }


void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    int mod = k % n;

    vector<int> temp;
    for (int i = n-mod; i < n; i++)     
        temp.push_back(nums[i]);      

    for (int i = n-1; i >=mod; i--){
        nums[i] = nums[i-mod];
    }

    for (int i = 0; i < mod; i++)
        nums[i] = temp[i];   
}

// right rotate
void rotateOptimal(vector<int> &nums, int k)
{
    int n = nums.size();
    k %= n;

    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());
}

// left rotate optimal
void leftRotateOptimal(vector<int> &nums, int k)
{
    int n = nums.size();
    k %= n;

    
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());
    reverse(nums.begin(),nums.end());
}

int main()
{
    vector<int> nums = {1,2,3,4,5,6,7};

    leftRotateOptimal(nums, 3);

    for (int num : nums)
    {
        cout << num << " ";
    }
}