class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> last_pos(128,-1);
        int max_len=0;
        int lhs=0;

        for (int i=0;i<s.length();i++) {
            const char ch=s[i];
            if (last_pos[ch] >= lhs)
                lhs=last_pos[ch]+1;

            last_pos[ch]=i;
            max_len=max(max_len,i-lhs+1);
        }

        return max_len;
    }
};
