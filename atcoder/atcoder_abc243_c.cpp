#include<bits/stdc++.h>
using namespace std;

typedef struct {
    int x;
    int y;
    char dir;
} object;

bool cmp(const object &a, const object &b) {
    if (a.y==b.y)
        return a.x<b.x;
    return a.y>b.y;
}

int main() {
    int n;
    cin>>n;

    vector<object> objects;
    for (int i=0;i<n;i++) {
        int x,y;
        cin>>x>>y;
        objects.push_back({x,y});
    }

    string dirs;
    cin>>dirs;
    for (int i=0;i<n;i++) {
        objects[i].dir=dirs[i];
    }

    sort(objects.begin(),objects.end(),cmp);

    int current_y=-1;
    bool lhs=false;
    for (const object& obj:objects) {
        if (obj.y!=current_y) {
            current_y=obj.y;
            lhs=false;
        }

        if (obj.dir=='R')
            lhs=true;

        if (lhs) {
            if (obj.dir=='L') {
                cout<<"Yes"<<"\n";
                return 0;
            }
        }
    }

    cout<<"No"<<"\n";

    return 0;
}
