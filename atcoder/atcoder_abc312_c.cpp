#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;

    vector<int> sellers;
    for (int i=0;i<n;i++) {
        int price;
        cin>>price;
        sellers.push_back(price);
    }

    vector<int> buyers;
    for (int i=0;i<m;i++) {
        int price;
        cin>>price;
        buyers.push_back(price);
    }

    sort(sellers.begin(),sellers.end());
    sort(buyers.begin(),buyers.end());

    int lhs=1,rhs=1e9+1;
    int deal=rhs;

    while (lhs<=rhs) {
        const int mid=lhs+(rhs-lhs)/2;

        const int seller=upper_bound(sellers.begin(),sellers.end(),mid)-sellers.begin();
        const int buyer=buyers.end()-lower_bound(buyers.begin(),buyers.end(),mid);
        if (seller>=buyer) {
            deal=mid;
            rhs=mid-1;
        } else
            lhs=mid+1;
    }

    cout<<deal<<"\n";

    return 0;
}
