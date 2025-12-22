#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    map<string,vector<pair<int,int>>> rankings;
    for (int i=0;i<n;i++) {
        string city;
        int ranking;
        cin>>city>>ranking;

        rankings[city].emplace_back(ranking,i+1);
    }

    for (auto [_,restaurants] :rankings) {
        sort(restaurants.rbegin(),restaurants.rend());

        for (const auto& [_,order]:restaurants)
            cout<<order<<"\n";
    }

    return 0;
}
