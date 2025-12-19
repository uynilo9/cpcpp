class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0)
            return false;

        if (0<=x&&x<=9)
            return true;

        int numx=x;
        long num=0;
        while (x!=0) {
            num=(num*10)+(x%10);
            x/=10;
        }

        return numx==num;
    }
};
