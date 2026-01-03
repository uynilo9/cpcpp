#include<bits/stdc++.h>
using namespace std;

int main() {
    string input;
    cin>>input;

    if (isdigit(input[0])) {
        long long num=stoll(input);
        for (int i=0;num>0;num/=2,i++) {
            if (num%2) {
                cout<<char(i<26?'A'+i:'a'+i-26);
            }
        }
    } else {
        long long num=0;
        for (const auto ch:input) {
            num+=1LL<<(isupper(ch)?ch-'A':ch-'a'+26);
        }

        cout<<num;
    }

    cout<<"\n";

    return 0;
}
