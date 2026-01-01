#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,q;
    string s;
    cin>>n>>s>>q;

    string str[2];
    str[0]=s.substr(0,n);
    str[1]=s.substr(n);

    for (int i=0;i<q;i++) {
        int t,a,b;
        cin>>t>>a>>b;

        if (t==1) {
            --a;
            --b;
            swap(str[a/n][a%n],str[b/n][b%n]);
        } else if (t==2)
            swap(str[0],str[1]);
    }

    cout<<str[0]<<str[1]<<"\n";

    return 0;
}
