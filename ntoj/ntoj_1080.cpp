#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> tobiichi;
    for (int i=0;i<n;i++) {
        int a;
        cin>>a;
        tobiichi.push_back(a);
    }

    vector<int> blame;
    for (int i=0;i<n;i++) {
        int b;
        cin>>b;
        blame.push_back(b);
    }

    sort(tobiichi.begin(),tobiichi.end());
    sort(blame.begin(),blame.end());

    int blameI=0;
    int blameP=0;
    for (auto const &a:tobiichi) {
        for (;blameI<blame.size();blameI++) {
            if (blame[blameI]>a) {
                blameP++;
                blameI++;
                break;
            }
        }
    }

    cout<<((blameP>n-blameP)?"BLAMEor8":"TOBIICHIorz")<<"\n";

    return 0;
}
