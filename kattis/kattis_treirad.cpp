#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int ans = 0;
    for (int k=2;;k++) {
        if (k*k*k-k>=n) {
            ans=k-2;
            break;
        }
    }

    cout<<ans<<"\n";

    return 0;
}
