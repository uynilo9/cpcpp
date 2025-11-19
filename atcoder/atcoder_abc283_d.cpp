#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin>>str;

    stack<int> bracketIndex;
    vector charBucket(str.size(),vector(26,0));

    for (int i=0;i<str.size();i++) {
        const char ch=str[i];
        const int chIndexOffset='a';
        const int chIndex=str[i]-chIndexOffset;

        switch (ch) {
            case '(': {
                if (i==0) {
                    bracketIndex.push(i);
                    continue;
                }

                charBucket[i]=charBucket[i-1];
                bracketIndex.push(i);
            } break;
            case ')': {
                if (i==0) {
                    cout<<"No"<<"\n";
                    return 0;
                }

                charBucket[i]=charBucket[bracketIndex.top()];
                bracketIndex.pop();
            } break;
            default: {
                if (i==0) {
                    charBucket[i][chIndex]=1;
                    continue;
                }

                charBucket[i]=charBucket[i-1];
                if (charBucket[i][chIndex]!=0) {
                    cout<<"No"<<"\n";
                    return 0;
                }

                charBucket[i][chIndex]=1;
            } break;
        }
    }

    cout<<"Yes"<<"\n";

    return 0;
}
