#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    for (int i=0;i<n;i++) {
        int nCS, nE;
        cin>>nCS>>nE;

        vector<int> csIQ(nCS);
        double csIQSum=0;
        for (int j=0;j<nCS;j++) {
            cin>>csIQ[j];
            csIQSum+=csIQ[j];
        }
        const double csIQAvg=csIQSum/nCS;

        double eIQSum=0;
        for (int j=0;j<nE;j++) {
            int eIQ;
            cin>>eIQ;
            eIQSum+=eIQ;
        }
        const double eIQAvg=eIQSum/nE;

        int ans=0;
        for (int j=0;j<nCS;j++) {
            if (
                (csIQSum-csIQ[j])/(nCS-1)>csIQAvg &&
                (eIQSum+csIQ[j])/(nE+1)>eIQAvg
            )
                ans++;
        }

        cout<<ans<<"\n";
    }

    return 0;
}
