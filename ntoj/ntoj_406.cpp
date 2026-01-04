#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector human(8,0);
    vector skeleton(8,0);
    vector goblin(8,0);
    for (int i=0;i<n;i++) {
        int c,a,r,d;
        cin>>c>>a>>r>>d;

        const int mask=(a<<0)|(r<<1)|(d<<2);
        if (c==1) {
            human[mask]++;
        } else if (c==2) {
            skeleton[mask]++;
        } else if (c==3) {
            goblin[mask]++;
        }
    }

    long long total=0;
    for (int i=0;i<8;i++) {
        for (int j=0;j<8;j++) {
            for (int k=0;k<8;k++) {
                if ((i|j|k)==0b111) {
                    total+=human[i]*skeleton[j]*goblin[k];
                }
            }
        }
    }

    cout<<total<<endl;

    return 0;
}
