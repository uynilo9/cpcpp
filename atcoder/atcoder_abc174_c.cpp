#include<bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin>>k;

    map<int,bool> mets;
    int ans=0,current=0;
    for (;;) {
        current=current*10+7;
        current%=k;
        ans++;

        if (current==0) {
            cout<<ans<<"\n";
            break;
        }
        if (mets[current]) {
            cout<<-1<<"\n";
            break;
        }

        mets[current]=true;
    }

    return 0;
}
