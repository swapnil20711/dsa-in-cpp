#include <bits/stdc++.h>
using namespace std;

// omk
//
vector<string> findWords(vector<string> &words)
{
    unordered_map<char, int> rowMap;
    vector<string> res;

    for (char c : string("qwertyuiop"))
    {
        rowMap[c] = 1;
    }
    for (char c : string("asdfghjkl"))
    {
        rowMap[c] = 2;
    }
    for (char c : string("zxcvbnm"))
    {
        rowMap[c] = 3;
    }

    for (const string &word : words)
    {
        string lw = word;
        transform(lw.begin(), lw.end(), lw.begin(), ::tolower);
        int row = rowMap[lw[0]];

        bool same = all_of(lw.begin(), lw.end(), [&](char c)
                           { return row = rowMap[c]; });

        if (same)
        {
            res.push_back(word);
        }
    }
    return res;
}

int main()
{
    vector<string> words = {"Hello", "Alaska", "Dad", "Peace"};

    for (string s : findWords(words))
    {
        cout << s;
    }
}