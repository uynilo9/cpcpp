#include<bits/stdc++.h>
using namespace std;

int get_digit(long long n) {
    if (n==0) return 1;
    int d=0;
    while (n>0) {
        n/=10;
        d++;
    }

    return d;
}

int main() {
    long long a,b,x;
    cin>>a>>b>>x;

    long long lhs=1,rhs=1000000000;
    long long ans=0;

    while (lhs<=rhs) {
        const long long mid=lhs+(rhs-lhs)/2;

        if (a*mid+b*get_digit(mid)<=x) {
            ans=mid;
            lhs=mid+1;
        } else {
            rhs=mid-1;
        }
    }

    cout<<ans<<endl;
    return 0;
}
