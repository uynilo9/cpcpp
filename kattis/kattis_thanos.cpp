#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    for (int i=0;i<t;i++) {
        long long p,r,f;
        cin>>p>>r>>f;

        int year=0;
        for (;;) {
            if (f<p) {
                cout<<year<<"\n";
                break;
            }

            p*=r;
            year++;
        }
    }

    return 0;
}
