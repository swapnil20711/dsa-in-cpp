#include <bits/stdc++.h>
using namespace std;

int reverse(int x)
{
    int revNumber = 0;
    while (x != 0)
    {
        int lastDigit = x % 10;
        if (revNumber > INT_MAX / 10 ||
            (revNumber == INT_MAX && lastDigit == 7))
        {
            return 0;
        }
        if (revNumber < INT_MIN / 10 ||
            (revNumber == INT_MIN && lastDigit == -8))
        {
            return 0;
        }
        revNumber = revNumber * 10 + lastDigit;
        x /= 10;
    }
    return revNumber;
}

bool isPalindrome(int x)
{
    if (x == 0)
    {
        return true;
    }
    return (x > 0 ? reverse(x) == abs(x) : false);
}

int main()
{
    int number;

    cin >> number;
    cout << isPalindrome(number);
}