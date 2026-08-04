#include <bits/stdc++.h>
using namespace std;

void swap(vector<char>& str, int i, int j) {
    char temp = str[j];
    str[j] = str[i];
    str[i] = temp;
}

int main() {
    int size;
    cin >> size;
    vector<char> str(size);

    for (int i = 0; i < str.size(); i++) {
        cin >> str[i];
    }

    for (int i = 0; i < str.size() / 2; i++) {
        swap(str, i, str.size() - 1 - i);
    }

    cout << "Array is : " << endl;
    string output(str.begin(), str.end());
    cout<<"Output string in : "<<output;
    for (int i = 0; i < size; i++) {
        cout << str[i] << endl;
    }
}