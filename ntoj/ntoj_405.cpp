#include<bits/stdc++.h>
using namespace std;

int main() {
    int b;
    string n;
    cin>>b>>n;

    vector<int> nums;
    int number=0;
    int digit=0;
    for (const char ch:n) {
        nums.push_back(ch-'0');
        number=number*b+ch-'0';
        digit++;
    }

    int _number=0;
    for (const int num:nums) {
        int res=1;
        for (int i=0;i<digit;i++) {
            res*=num;
        }
        _number+=res;
    }

    cout<<(number==_number?"YES":"NO")<<"\n";

    return 0;
}
