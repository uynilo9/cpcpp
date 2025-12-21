#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;

    vector<int> trees;
    for (int i=0;i<n;i++) {
        int h;
        cin>>h;
        trees.push_back(h);
    }

    sort(trees.begin(),trees.end());

    int diff=1e9;
    for (int i=0;i<=n-k;i++)
        diff=min(diff,trees[i+k-1]-trees[i]);

    cout<<diff<<"\n";

    return 0;
}
