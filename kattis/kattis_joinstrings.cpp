#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<string> strs(n);

    for (int i=0;i<n;i++)
        cin>>strs[i];

    vector<pair<int,int>> steps(n-1);

    for (int i=0;i<n-1;i++) {
        int a,b;
        cin>>a>>b;
        a-=1;
        b-=1;
        steps[i]={a,b};
    }

    sort(steps.begin(),steps.end());

    vector<int> finalStep;
    finalStep.push_back(steps.front().first);

    for (const auto step:steps)
        finalStep.push_back(step.second);

    for (const auto i:finalStep)
        cout<<strs[i];

    cout<<"\n";

    return 0;
}
