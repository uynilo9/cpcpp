#include<bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long n,m,p;
    cin>>n>>m>>p;

    if (n<m) {
        swap(n,m);
    }

    cout<<(((n%p)*(m%p)%p)*((n-m)%p))%p<<"\n";

    return 0;
}
