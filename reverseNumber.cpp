#include <bits/stdc++.h>
using namespace std;

int reverse(int x)
{
    int revNumber = 0;
    while (abs(x) > 0)
    {
        int lastDigit = x % 10;
        if(revNumber>INT_MAX/10 || (revNumber==INT_MAX && lastDigit==7)){
            return 0;
        }
        if(revNumber<INT_MIN/10 || (revNumber==INT_MIN && lastDigit==-8)){
            return 0;
        }
        revNumber = revNumber * 10 + lastDigit;
        x /= 10;
    }
    return revNumber;
}

int main()
{
    int number;

    cin >> number;
    cout << reverse(number);
}