class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> m;
        int start=-1;
        int maxlen=0;
        
        for(int i=0;i<s.length();i++){
            if(m.count(s[i])!=0)
                start=max(start,m[s[i]]);
            
            m[s[i]]=i;
            maxlen=max(maxlen, i-start);
        }
        
        
        return maxlen;
        
    }
};
