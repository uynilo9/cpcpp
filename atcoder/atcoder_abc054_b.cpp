#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;

    vector<string> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<string> b(m);
    for (int i = 0; i < m; i++) {
        cin>> b[i];
    }

    for (int ai=0;ai<=n-m;ai++) {
        for (int aj=0;aj<=n-m;aj++) {
            bool matched=true;
            for (int bi=0;bi<m;bi++) {
                if (a[ai+bi].substr(aj,m)!=b[bi]) {
                    matched=false;
                    break;
                }
            }

            if (matched) {
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }

    cout<<"No"<<endl;

    return 0;
}
