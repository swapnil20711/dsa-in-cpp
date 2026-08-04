#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size,val;
    cin >> size;
    // [3,2,2,3]
    // i=0,val=3
    // nums[0]!=3
    // nums[1]!=3
    // nums[0]=2
    // [2,2,2,3]
    // x=1 i=3
    // 2
    vector<int> nums(size);   

    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    cin>>val;

    int x = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i]!=val){
            nums[x] = nums[i];
            x=x+1;
        }
    }
    cout<<"Array is : "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << nums[i]<<endl;
    }
    cout <<"Output is : "<< x;
}