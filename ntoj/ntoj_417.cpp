#include<bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin>>n;

    map<char,int> prime;
    prime['2']++;
    prime['3']++;
    prime['5']++;
    prime['7']++;

    for (const auto num:n) {
        if (!prime[num]) {
            cout<<"No"<<"\n";
            return 0;
        }
    }

    cout<<"Yes"<<"\n";

    return 0;
}
