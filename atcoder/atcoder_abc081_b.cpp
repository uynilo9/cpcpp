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

    int times=0;
    for(;;) {
        for (auto &num:nums) {
            if (num%2!=0) {
                cout<<times<<"\n";
                return 0;
            }
            num/=2;
        }
        times++;
    }
}
