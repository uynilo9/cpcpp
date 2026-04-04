#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    map<string,int> strings;
    for (int i=0;i<n;i++) {
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        strings[s]++;
    }

    long long ans=0;
    for (auto const &[_,count]:strings) {
        ans+=(long long)count*(count-1)/2;
    }

    cout<<ans<<"\n";

    return 0;
}
