#include<bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long a,b,x;
    cin>>a>>b>>x;

    unsigned long long ans=(b/x)-(a/x);

    if (a%x==0)
        ans++;

    cout<<ans<<"\n";

    return 0;
}
