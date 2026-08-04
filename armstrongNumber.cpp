#include <bits/stdc++.h>
using namespace std;

bool armstrongNumber(int x)
{
    int result = 0;
    int originalNum =x;
    while (x !=0)
    {
        int lastDigit = x%10;
        result+=pow(lastDigit,3);
        x/=10;
    }

    return result == originalNum;
    
}

int main()
{
    int number;

    cin >> number;
    cout << armstrongNumber(number);
}