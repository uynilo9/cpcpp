#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;

    vector<int> as;
    for(int i=0;i<n;i++) {
        int a;
        cin>>a;
        as.push_back(a);
    }

    vector<int> bs;
    for(int i=0;i<m;i++) {
        int b;
        cin>>b;
        bs.push_back(b);
    }

    sort(as.begin(),as.end());
    sort(bs.begin(),bs.end());

    int diff=1e9;
    int i=0,j=0;
    while(i<n&&j<m) {
        const int a=as[i],b=bs[j];
        if(a==b) {
            cout<<0<<"\n";
            return 0;
        }
        if(a>b) {
            j++;
        } else {
            i++;
        }

        int d=a-b;
        diff=min(diff,max(d,-d));
    }

    cout<<diff<<"\n";

    return 0;
}
