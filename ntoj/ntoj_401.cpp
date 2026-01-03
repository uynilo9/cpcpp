#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k,a1,a2,a3,a4,a5,n;
    cin>>k>>a1>>a2>>a3>>a4>>a5>>n;

    vector<pair<int,int>> drops;
    for (int i=0;i<n;i++) {
        int x,y;
        cin>>x>>y;
        drops.push_back({x,y});
    }

    map<int,long long> points;
    for (int x=-20;x<=20;x++) {
        points[x]=(long long)(a1*x*x*x*x*x)+(a2*x*x*x*x)+(a3*x*x*x)+(a4*x*x)+(a5*x);
    }

    int low=-1e9,high=1e9;
    int b=0;
    while (low<=high) {
        const int mid=(low+high)/2;

        int drop_count=0;
        for (const auto& [x,y]:drops) {
            if (y>=points[x]+mid) {
                drop_count++;
            }
        }

        if (drop_count>=k) {
            b=mid;
            low=mid+1;
        } else {
            high=mid-1;
        }
    }

    cout<<b<<"\n";

    return 0;
}
