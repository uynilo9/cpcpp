#include <bits/stdc++.h>
using namespace std;

typedef struct {
    int x;
    int y;
} position;

int main() {
    vector<int> ns;
    for (int n;cin>>n&&n!=0;) {
        ns.push_back(n);
    }

    for (int i=0;i<ns.size();i++) {
        const int n=ns[i];
        int map[10][10];
        position pos={0,0};

        for (int step=1;step<=n*n;step++) {
            map[pos.y][pos.x]=step;

            if ((pos.x+pos.y)%2==0) {
                if (pos.x==n-1) {
                    pos.y++;
                } else if (pos.y==0) {
                    pos.x++;
                } else {
                    pos.x++;
                    pos.y--;
                }
            } else {
                if (pos.y==n-1) {
                    pos.x++;
                } else if (pos.x==0) {
                    pos.y++;
                } else {
                    pos.x--;
                    pos.y++;
                }
            }
        }

        cout<<"Case "<<i+1<<":"<<"\n";
        for (int y=0;y<n;y++) {
            for (int x=0;x<n;x++) {
                printf("%3d",map[y][x]);
            }

            cout<<"\n";
        }
    }

    return 0;
}