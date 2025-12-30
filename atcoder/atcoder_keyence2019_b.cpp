#include<bits/stdc++.h>
using namespace std;

int main() {
    string input;
    cin>>input;

    const string keyence="keyence";
    for (int i=0;i<=7;i++) {
        if (input.substr(0,i)+input.substr(input.size()-(7-i))==keyence) {
            cout<<"YES"<<"\n";

            return 0;
        }
    }

    cout<<"NO"<<"\n";

    return 0;
}
