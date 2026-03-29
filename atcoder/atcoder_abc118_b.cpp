#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;

    map<int,int> foods;
    for (int i=0;i<n;i++) {
        int k;
        cin>>k;

        for (int j=0;j<k;j++) {
            int food;
            cin>>food;
            foods[food]++;
        }
    }

    int beloved=0;
    for (auto const &[_,food]:foods) {
        if (food==n) {
            beloved++;
        }
    }

    cout<<beloved<<"\n";

    return 0;
}
