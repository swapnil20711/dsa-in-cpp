#include <bits/stdc++.h>
#include <vector>

using namespace std;

void printVector(const vector<int>& v) {
    cout << "[";
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i + 1 < v.size()) cout << ", ";
    }
    cout << "]\n";
}

vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int l = 0, r = n - 1;
        for (int pos = n - 1; pos >= 0; pos--) {
            int leftSq  = nums[l] * nums[l];
            int rightSq = nums[r] * nums[r];
            if (leftSq > rightSq) {
                result[pos] = leftSq;
                l++;
            } else {
                result[pos] = rightSq;
                r--;
            }
        }
        return result;
}
int main()
{
    vector<int> nums1 = {-4,-1,0,3,10};

    vector<int> output = sortedSquares(nums1);

    for (int x : output)
        cout << x << " ";
    cout << "\n";
}