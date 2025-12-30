#include<bits/stdc++.h>
using namespace std;

int main() {
    int d,n,m;
    cin>>d>>n>>m;

    vector<int> shops;
    shops.push_back(0);
    for (int i=1;i<=n-1;i++) {
        int loc;
        cin>>loc;
        shops.push_back(loc);
    }
    shops.push_back(d);

    vector<int> dests;
    for (int i=0;i<m;i++) {
        int loc;
        cin>>loc;
        dests.push_back(loc);
    }

    sort(shops.begin(),shops.end());
    sort(dests.begin(),dests.end());

    long long total=0;
    for (const auto dest:dests) {
        auto it=upper_bound(shops.begin(),shops.end(),dest);

        total+=min(*it-dest,dest-*prev(it));
    }

    cout<<total<<endl;

    return 0;
}
