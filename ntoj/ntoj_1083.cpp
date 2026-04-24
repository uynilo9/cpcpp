#include<bits/stdc++.h>
using namespace std;

typedef struct {
    int higher,lower,diff;
} Stmt;

bool cmp(const Stmt &a,const Stmt &b) {
    return a.lower<b.lower;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<Stmt> stmts;
    for (int i=0;i<n-1;i++) {
        int higher,lower,diff;
        cin>>higher>>lower>>diff;
        stmts.push_back({higher,lower,diff});
    }

    sort(stmts.rbegin(),stmts.rend(),cmp);

    map<int,int> scoreboard;
    for (auto const &[higher,lower,diff]:stmts) {
        scoreboard[higher]=scoreboard[lower]+diff;
    }

    int q;
    cin>>q;

    vector<bool> nps;
    for (int i=0;i<q;i++) {
        int higher,lower,diff;
        cin>>higher>>lower>>diff;

        nps.push_back(scoreboard[higher]-scoreboard[lower]==diff);
    }

    for (auto const &np:nps) {
        cout<<(np?"No problem":"OUT")<<"\n";
    }

    return 0;
}
