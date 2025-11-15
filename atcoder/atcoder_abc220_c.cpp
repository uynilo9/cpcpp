#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> a(n);
    long long aSum=0;
    vector<long long> aSumMap(n,0);

    for (int i=0;i<n;i++) {
        cin>>a[i];
        aSum+=a[i];

        if (i==0)
            aSumMap[i]=a[i];
        else
            aSumMap[i]=aSumMap[i-1]+a[i];
    }

    long long ans=0;

    long long x;
    cin>>x;
    ans+=(x/aSum)*n;

    long long rem=x%aSum;
    for (int i=0;i<n;i++) {
        if (aSumMap[i]>rem) {
            ans+=(i+1);
            break;
        }
    }

    cout<<ans<<"\n";

    return 0;
}
