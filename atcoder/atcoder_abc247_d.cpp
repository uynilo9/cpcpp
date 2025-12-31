#include<bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin>>q;

    long long ballIndexOffset=0;
    deque<pair<long long,int>> ball={};

    for (int i=0;i<q;i++) {
        int cmd;
        cin>>cmd;

        if (cmd==1) {
            int num;
            long long count;
            cin>>num>>count;

            if (ball.empty())
                ball.emplace_back(ballIndexOffset+count-1, num);
            else
                ball.emplace_back(ball.back().first+count, num);
        } else if (cmd==2) {
            long long count;
            cin>>count;

            long long sum=0;

            while (count>0&&!ball.empty()) {
                long long ballCount=ball.front().first-ballIndexOffset+1;

                if (count<ballCount) {
                    sum+=ball.front().second*count;
                    ballIndexOffset+=count;

                    break;
                }
                if (count==ballCount) {
                    sum+=ball.front().second*count;
                    ballIndexOffset+=count;
                    ball.pop_front();

                    break;
                }

                sum+=ball.front().second*ballCount;
                count-=ballCount;
                ballIndexOffset+=ballCount;
                ball.pop_front();
            }

            cout<<sum<<"\n";
        }
    }

    return 0;
}
