#include <bits/stdc++.h>
using namespace std;

void pattern1(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
void pattern2(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void pattern3(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout << j+1 << " ";
        }
        cout << endl;
    }
}

void pattern4(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout << i+1 << " ";
        }
        cout << endl;
    }
}

void pattern5(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <(size-i); j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void pattern6(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <(size-i); j++)
        {
            cout << j+1 << " ";
        }
        cout << endl;
    }
}

void pattern7(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <(size-i-1); j++)
        {
            cout << " ";
        }
        for (int j = 0; j <2*i+1; j++)
        {
            cout << "*" << " ";
        }
        for (int j = 0; j <(size-i-1); j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
int main()
{
    int size;
    cin >> size;
    pattern7(size);
}