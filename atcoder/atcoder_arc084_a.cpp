#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> as(n);
    for(int i=0;i<n;i++)
        cin>>as[i];

    vector<int> bs(n);
    for(int i=0;i<n;i++)
        cin>>bs[i];

    vector<int> cs(n);
    for(int i=0;i<n;i++)
        cin>>cs[i];

    sort(as.begin(),as.end());
    sort(bs.begin(),bs.end());
    sort(cs.begin(),cs.end());

    long long num=0;

    for (int i=0;i<n;i++) {
        long long a=lower_bound(as.begin(),as.end(),bs[i])-as.begin();
        long long c=cs.end()-upper_bound(cs.begin(),cs.end(),bs[i]);
        num+=a*c;
    }

    cout<<num<<"\n";

    return 0;
}
