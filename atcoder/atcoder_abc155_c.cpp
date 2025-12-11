#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int max=0;
    map<string, int> votes;
    for (int i=0;i<n;i++) {
        string name;
        cin>>name;
        votes[name]++;
        max=votes[name]>max?votes[name]:max;
    }

    for (const auto &[name, num]:votes) {
        if (num==max)
            cout<<name<<"\n";
    }

    return 0;
}
