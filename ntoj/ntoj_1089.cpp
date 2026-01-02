#include<bits/stdc++.h>
using namespace std;

typedef struct {
    long long y;
    long long range;
    long long damage;
} np;

int main() {
    int n,m;
    cin>>n>>m;

    vector<np> nps;
    for (int i=0;i<n;i++) {
        long long y,range,damage;
        cin>>y>>range>>damage;
        nps.push_back({y,range,damage});
    }

    vector<long long> y_targets;
    for (int i=0;i<m;i++) {
        long long x,y;
        cin>>x>>y;
        y_targets.push_back(y);
    }

    sort(y_targets.begin(),y_targets.end());

    long long total_damage=0;
    for (const auto& [y,range,damage]:nps) {
        const long long upper_y=y+range;
        const long long lower_y=y-range;

        auto upper_it=upper_bound(y_targets.begin(),y_targets.end(),upper_y);
        auto lower_it=lower_bound(y_targets.begin(),y_targets.end(),lower_y);
        int total_target=(upper_it-y_targets.begin())-(lower_it-y_targets.begin());
        total_damage+=total_target*damage;
    }

    cout<<total_damage<<"\n";

    return 0;
}
