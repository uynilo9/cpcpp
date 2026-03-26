#include<bits/stdc++.h>
using namespace std;

int main() {
    int h,w;
    cin>>h>>w;

    vector<string> pic;

    string boundary;
    for (int i=0;i<w+2;i++) {
        boundary.push_back('0');
    }

    pic.push_back(boundary);
    for (int i=0;i<h;i++) {
        string row;
        cin>>row;
        row='0'+row+'0';
        pic.push_back(row);
    }
    pic.push_back(boundary);

    for (int i=1;i<=h;i++) {
        for (int j=1;j<=w;j++) {
            const char pixel=pic[i][j];
            if (pixel=='.') {
                continue;
            }

            const int isolated=0b1111;
            int top=0,bottom=0,left=0,right=0;
            if (pixel!=pic[i-1][j]) {
                top=(1<<3);
            }
            if (pixel!=pic[i+1][j]) {
                bottom=(1<<2);
            }
            if (pixel!=pic[i][j-1]) {
                left=(1<<1);
            }
            if (pixel!=pic[i][j+1]) {
                right=(1<<0);
            }

            if ((top|bottom|left|right)==isolated) {
                cout<<"No"<<"\n";
                return 0;
            }
        }
    }

    cout<<"Yes"<<"\n";

    return 0;
}
