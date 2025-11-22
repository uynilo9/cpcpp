#include<bits/stdc++.h>
using namespace std;

int main() {
    string input;
    cin>>input;

    list<char> passw;
    auto cursor=passw.begin();

    for (const auto ch:input) {
        switch (ch) {
            case 'L': {
                --cursor;
            } break;
            case 'R': {
                ++cursor;
            } break;
            case 'B': {
                cursor=passw.erase(--cursor);
            } break;
            default: {
                passw.insert(cursor,ch);
            } break;
        }
    }

    for (const auto ch:passw)
        cout<<ch;

    cout<<"\n";

    return 0;
}
