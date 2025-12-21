#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,q;
    cin>>n>>q;

    vector<int> heights;
    for (int i=0;i<n;i++) {
        int height;
        cin>>height;
        heights.push_back(height);
    }

    sort(heights.begin(),heights.end());

    for (int i=0;i<q;i++) {
        int height;
        cin>>height;

        auto it = lower_bound(heights.begin(),heights.end(),height);
        int count=heights.end()-it;
        cout<<count<<"\n";
    }

    return 0;
}
