#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m,k;
    cin>>n>>m>>k;

    vector<long long> aBooks,bBooks;

    aBooks.push_back(0);
    for (int i=1;i<=n;i++) {
        int time;
        cin>>time;
        aBooks.push_back(aBooks[i-1]+time);
    }

    for (int i=0;i<m;i++) {
        int time;
        cin>>time;
        bBooks.push_back((i==0?0:bBooks[i-1])+time);
    }

    int total=0;
    for (int i=0;i<=n;i++) {
        if (k<aBooks[i])
            break;

        const auto it_b=upper_bound(bBooks.begin(),bBooks.end(),k-aBooks[i]);

        const int b_count=it_b-bBooks.begin();
        total=max(total,b_count+i);
    }

    cout<<total<<"\n";

    return 0;
}
