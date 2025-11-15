#include <bits/stdc++.h>
using namespace std;

int main() {
    int p,q,r;
    cin>>p>>q>>r;

    vector<int> numbers;
    for (int a=1;a<=9;++a) {
        for (int b=0;b<=9;++b) {
            if ((p==0&&a>=b)||(p==1&&a<=b))
                continue;

            for (int c=0;c<=9;++c) {
                if ((q==0&&b>=c)||(q==1&&b<=c))
                    continue;

                for (int d=0;d<=9;++d) {
                    if ((r==0&&c>=d)||(r==1&&c<=d))
                        continue;

                    int num=a*1000+b*100+c*10+d;
                    numbers.push_back(num);
                }
            }
        }
    }

    sort(numbers.begin(),numbers.end());
    for (const int num:numbers) {
        cout<<num<<endl;
    }

    return 0;
}
