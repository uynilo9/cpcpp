class Solution {
public:
    int romanToInt(string s) {
        map<char,int> romanMap;
        romanMap['I']=1;
        romanMap['V']=5;
        romanMap['X']=10;
        romanMap['L']=50;
        romanMap['C']=100;
        romanMap['D']=500;
        romanMap['M']=1000;

        int result=0;
        int last=romanMap[s[s.size()-1]];

        for (int i=s.size();i>0;i--) {
            int current=romanMap[s[i-1]];
            if (last>current) {
                result-=current;
            } else {
                result+=current;
            }
            last=current;
        }

        return result;
    }
};
