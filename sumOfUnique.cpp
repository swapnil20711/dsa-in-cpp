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
int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> frequency;
        int sum = 0;
        for(int i : nums){
            frequency[i]= frequency[i]+1;
        }
        for(int i : nums){
            if(frequency[i]==1){
                sum+=i;
            }
        }
        return sum;
    }
int main()
{
    vector<int> nums1 = {1,1,1,1,5};
    int uniqueSum = sumOfUnique(nums1);
    cout << uniqueSum;
}