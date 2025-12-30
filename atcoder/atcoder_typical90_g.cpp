#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> classes;
    for (int i=0;i<n;i++) {
        int score;
        cin>>score;
        classes.push_back(score);
    }

    sort(classes.begin(), classes.end());

    int q;
    cin>>q;
    for (int i=0;i<q;i++) {
        int score;
        cin>>score;

        auto it = upper_bound(classes.begin(), classes.end(), score);

        if (it==classes.begin())
            cout<<*it-score<<"\n";
        else if (it==classes.end())
            cout<<score-*prev(it)<<"\n";
        else
            cout<<min(*it-score,score-*prev(it))<<"\n";
    }

    return 0;
}
