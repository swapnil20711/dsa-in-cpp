#include <bits/stdc++.h>
using namespace std;

int printDigits(int number)
{
    while(number>0){
        int lastDigit = number%10;
        cout<<lastDigit<<endl;
        number/=10;
    }
}

int main()
{
    int number;

    cin >> number;
    printDigits(number);
}