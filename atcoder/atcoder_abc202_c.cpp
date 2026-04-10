#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    map<int,int> as;
    for (int i=0;i<n;i++) {
        int a;
        cin>>a;
        as[a]++;
    }

    vector<int> bs(1,0);
    for (int i=0;i<n;i++) {
        int b;
        cin>>b;
        bs.push_back(b);
    }

    long long found=0;
    for (int i=0;i<n;i++) {
        int c;
        cin>>c;
        if (c>bs.size()) {
            continue;
        }

        found+=as[bs[c]];
    }

    cout<<found<<"\n";

    return 0;
}
