#include<bits/stdc++.h>
using namespace std;

typedef struct {
    int order;
    int damage;
    int cost;
} card;

bool damage_cmp(const card& a,const card& b) {
    return a.damage>b.damage;
}

int main() {
    int n;
    cin>>n;

    vector<card> cards;
    for (int i=1;i<=n;i++) {
        int damage,cost;
        cin>>damage>>cost;
        cards.push_back({i,damage,cost});
    }

    sort(cards.begin(),cards.end(),damage_cmp);

    vector<int> saved;
    int cost_limit=1e9+1;
    for (const auto& [order,_,cost]:cards) {
        if (cost<cost_limit) {
            saved.push_back(order);
            cost_limit=cost;
        }
    }

    sort(saved.begin(),saved.end());

    cout<<saved.size()<<"\n";
    for (const auto order:saved)
        cout<<order<<" ";

    return 0;
}
