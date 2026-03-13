#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    long long re[200]={0};
    for (int i=0;i<n;i++) {
        int num;
        cin>>num;
        re[num%200]++;
    }

    long long total=0;
    for (auto const r:re) {
        total+=r*(r-1)/2;
    }

    cout<<total<<"\n";

    return 0;
}
