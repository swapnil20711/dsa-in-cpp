#include <bits/stdc++.h>
using namespace std;

int findGCD(int n1, int n2)
{
    int gcd = 1;
    int minNumber = min(n1, n2);

    for (int i = 1; i <= minNumber; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}

int findGCDOptimal(int n1, int n2)
{
    int gcd = 1;
    int minNumber = min(n1, n2);

    for (int i = minNumber; i >= 1; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
            break;
        }
    }
    return gcd;
}

int findGCDEuclidean(int n1, int n2)
{
    int gcd = 1;

    while (n1 > 0 && n2 > 0)
    {
        if (n1 > n2)
        {
            n1 = n1 % n2;
        }
        else
        {
            n2 = n2 % n1;
        }
    }

    if (n1 == 0)
    {
        gcd = n2;
    }
    else
    {
        gcd = n1;
    }

    return gcd;
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    cout << "GCD of " << n1 << " and " << n2 << " is : " << findGCDEuclidean(n1, n2);
}