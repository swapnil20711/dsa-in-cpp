#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    vector<int> nums(size);   

    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }

    int x = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > nums[x])
        {
            x = x + 1;
            nums[x] = nums[i];
        }
    }
    cout<<"Array is : "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << nums[i]<<endl;
    }
    cout <<"Output is : "<< x + 1;
}