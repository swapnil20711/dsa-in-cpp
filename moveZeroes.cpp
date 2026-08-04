#include <bits/stdc++.h>
using namespace std;



int main()
{
    vector <int> nums = {0,1,0,3,12};
    int x = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i]!=0){
            nums[x] = nums[i];
            x++;
        }
    }

    for (int i = x; i < nums.size(); i++)
    {
        nums[i] = 0;
    }
    

    for (int i : nums)
    {
        cout<<i<<endl;
    }
    
    
}