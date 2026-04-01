#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;

    vector<pair<long long,int>> stores;
    for (int i=0;i<n;i++) {
        int a,b;
        cin>>a>>b;
        stores.push_back({a,b});
    }

    sort(stores.begin(),stores.end());

    int can=0;
    long long money=0;
    for (auto const &[price,most]:stores) {
        if (can+most<m) {
            money+=price*most;
            can+=most;
        } else if (can+most>=m) {
            money+=price*(m-can);
            break;
        }
    }

    cout<<money<<"\n";

    return 0;
}
