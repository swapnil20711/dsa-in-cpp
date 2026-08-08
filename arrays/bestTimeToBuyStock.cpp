#include <bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cin >> size;
    vector<int> stockPrices(size);
    for(int i=0;i<stockPrices.size();i++){
        cin>>stockPrices[i];
    }
    int lowestNum = stockPrices[0];
    int maxProfit = 0;
    for(int i=0;i<stockPrices.size();i++){
        lowestNum = min(lowestNum,stockPrices[i]);
        maxProfit=max(maxProfit,stockPrices[i]-lowestNum);
    }
    cout<<maxProfit;
}