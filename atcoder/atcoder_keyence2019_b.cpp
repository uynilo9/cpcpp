#include<bits/stdc++.h>
using namespace std;

int main() {
    string input;
    cin>>input;

    string keyence="keyence";

    int char_index=-1;
    int substr_count=0;
    for (const auto ch:input) {
        if (ch==keyence[char_index+1])
            char_index++;
        else {
            substr_count++;
            break;
        }
    }

    if (substr_count==0) {
        cout<<"YES"<<"\n";
        return 0;
    }

    input=input.substr(char_index+1);
    keyence=keyence.substr(char_index+1);

    cout<<(input.substr(input.size()-keyence.size())==keyence?"YES":"NO")<<"\n";

    return 0;
}
