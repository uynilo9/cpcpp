#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;

    list<char> s;
    for (;;) {
        if (n%2==0) {
            s.push_front('B');
            n/=2;
        } else {
            s.push_front('A');
            if (n==1) {
                break;
            } else {
                n--;
            }
        }
    }

    for (auto const &c:s) {
        cout<<c;
    }

    cout<<"\n";

    return 0;
}
