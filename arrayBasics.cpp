#include <bits/stdc++.h>
using namespace std;

int main()
{
    double arr[5];
    // 3 rows array with 5 cols
    // indexing goes as [0,0],[0,1]....[0,4]
    int arr2[3][5];
    string s ="Swapnil";
    int len = s.size();

    arr2[1][3] = 100;
    cout << arr2[1][2]<<endl;
    cout<< s[0]<<endl;
    cout<< s[len-1]<<endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    arr[3] += 10;

    for (int i = 0; i < 5; i++)
    {
        // cout << *(arr+i)<<endl;
        cout << arr[i] << endl;
    }
}