#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> nums;
    long long suffix_sum=0;
    for (int i=0;i<n;i++) {
        int num;
        cin>>num;
        nums.push_back(num);
        suffix_sum+=num;
    }

    sort(nums.rbegin(),nums.rend());

    long long total=0;
    for (int i=0;i<n;i++) {
        suffix_sum-=nums[i];
        total+=(long long)nums[i]*(n-1-i)-suffix_sum;
    }

    cout<<total<<"\n";

    return 0;
}
