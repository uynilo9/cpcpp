#include<bits/stdc++.h>
using namespace std;

int main() {
    vector alphabet={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    vector validAlphabet('z'+1,0);
    for (auto ch:vector{'a','t','c','o','d','e','r'})
        validAlphabet[ch]=1;

    string s,t;
    cin>>s>>t;

    vector sChar('z'+1,0);
    int sLack=0,sMouse=0;
    vector tChar('z'+1,0);
    int tLack=0,tMouse=0;

    for (auto ch:s) {
        if (ch=='@')
            sMouse++;
        else
            sChar[ch]++;
    }

    for (auto ch:t) {
        if (ch=='@')
            tMouse++;
        else
            tChar[ch]++;
    }

    for (auto ch:alphabet) {
        int diff=sChar[ch]-tChar[ch];

        if (diff==0)
            continue;

        if (validAlphabet[ch]!=1) {
            cout<<"No"<<"\n";
            return 0;
        }

        (diff>0)?tLack+=diff:sLack+=-diff;
    }

    if (sMouse-sLack==tMouse-tLack&&(sLack<=sMouse)&&(tLack<=tMouse))
        cout<<"Yes"<<"\n";
    else
        cout<<"No"<<"\n";

    return 0;
}
