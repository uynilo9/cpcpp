#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> nums;
    for (int i=0;i<n;i++) {
        int num;
        cin>>num;
        nums.push_back(num);
    }

    sort(nums.begin(),nums.end());

    const int min=nums[0],max=nums[nums.size()-1];
    cout<<min<<" "<<max<<" "<<(max-min+1!=nums.size()?"no":"yes")<<"\n";

    return 0;
}
