#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;

    vector<pair<int,int>> conds;
    for (int i=0;i<m;i++) {
        int a,b;
        cin>>a>>b;
        conds.push_back({a,b});
    }

    int k;
    cin>>k;
    vector<pair<int,int>> balls;
    for (int i=0;i<k;i++) {
        int c,d;
        cin>>c>>d;
        balls.push_back({c,d});
    }

    int ans=0;
    for (int i=0;i<(1<<k);i++) {
        map<int,bool> dishes;

        for (int j=0;j<k;j++) {
            if ((i>>j)&1) {
                dishes[balls[j].first]=true;
            } else {
                dishes[balls[j].second]=true;
            }
        }

        int satisfied=0;
        for (int j=0;j<m;j++) {
            if (dishes[conds[j].first]&&dishes[conds[j].second]) {
                satisfied++;
            }
        }

        ans=max(ans,satisfied);
    }

    cout<<ans<<"\n";

    return 0;
}
