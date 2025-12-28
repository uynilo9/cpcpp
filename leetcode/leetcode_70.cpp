class Solution {
public:
    int climbStairs(int n) {
        vector ways({1,1});

        for (int i=2;i<=45;i++)
            ways.push_back(ways[i-1]+ways[i-2]);

        return ways[n];
    }
};
