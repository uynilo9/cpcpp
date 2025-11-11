#include<bits/stdc++.h>
using namespace std;

int main() {
    int k,s;
    cin>>k>>s;

    int ans=0;
    for (int x=0;x<=k;x++) {
        for (int y=0;y<=k;y++) {
            if (int z=s-(x+y);0<=z&&z<=k)
                ans++;
        }
    }

    cout<<ans<<"\n";

    return 0;
}
