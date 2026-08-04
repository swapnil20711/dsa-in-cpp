#include <bits/stdc++.h>
using namespace std;

int countDigits(int number)
{
    int count = 0;
    while(number>0){
        count++;
        number/=10;
    }
    return count;
}

int countDigits2(int number)
{
    int cnt = (int)(log10(abs(number)))+1;
    return cnt;
}

int main()
{
    int number;

    cin >> number;
    cout<<countDigits2(number);
}