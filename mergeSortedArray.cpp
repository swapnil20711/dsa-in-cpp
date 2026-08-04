#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int> nums1Copy(nums1);
    int p1=0;
    int p2=0;
    for (int i = 0; i < m+n; i++)
    {
        if(p2>=n || (p1<m && nums1Copy[p1]<nums2[p2])){
            nums1[i] = nums1Copy[p1];
            p1++;
        }else{
            nums1[i] = nums2[p2];
            p2++;
        }
    }
    
}

void mergeOptimal(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int p1=m-1;
    int p2=n-1;

    for (int i = m+n-1; i >=0; i--)
    {
        if(p2<0){
            break;
        }
        if(p1>=0 && (nums1[p1]>nums2[p2])){
            nums1[i] = nums1[p1];
            p1--;
        }else{
            nums1[i]=nums2[p2];
            p2--;
        }
    }
    
}

int main() {
    vector<int> nums1 = {1, 3, 5, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {2, 4, 6};
    int n = 3;

    mergeOptimal(nums1, m, nums2, n);

    for (int x : nums1) cout << x << " ";
    cout << "\n";
}