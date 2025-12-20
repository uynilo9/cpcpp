class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }

        for (int i=0;i<strs[0].size();i++) {
            char current=strs[0][i];
            for (const auto& str:strs) {
                if (str[i]!=current)
                    return str.substr(0,i);
            }
        }

        return strs[0];
    }
};
