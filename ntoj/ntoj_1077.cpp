#include<bits/stdc++.h>
using namespace std;

int main() {
    int height,width;
    cin>>height>>width;

    const int attack[7][5]={
        {0,1,1,1,0},
        {1,0,8,0,1},
        {1,0,0,0,0},
        {0,1,6,1,0},
        {0,0,0,0,1},
        {1,0,7,0,1},
        {0,1,1,1,0},
    };

    int map[500][500];

    for (int i=0;i<height;i++) {
        for (int j=0;j<width;j++) {
            cin>>map[i][j];
        }
    }

    if (height<7||width<5) {
        cout<<"GotoWC"<<"\n";
        return 0;
    }

    vector<pair<int,pair<int,int>>> topLeft;

    for (int y=0;y<height-7+1;y++) {
        for (int x=0;x<width-5+1;x++) {
            int xOffset=x;
            int yOffset=y;

            int damage=0;

            for (int i=0;i<7;i++) {
                for (int j=0;j<5;j++) {
                    damage+=map[i+yOffset][j+xOffset]*attack[i][j];
                }
            }

            topLeft.push_back({damage,{y,x}});
        }
    }

    pair<int,pair<int,int>> max(topLeft[0].first,{topLeft[0].second.first,topLeft[0].second.second});
    for (const auto tL:topLeft) {
        if (max.first>tL.first)
            continue;

        max=tL;
    }

    cout<<max.first<<"\n"<<max.second.first+4<<" "<<max.second.second+3<<"\n";

    return 0;
}
