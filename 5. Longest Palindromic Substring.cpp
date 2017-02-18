class Solution {
public:
    string longestPalindrome(string s) {
        if(s.empty())
            return "";
        
        if(s.size() == 1)
            return s;
            
        int start=0, maxlen=1;
        
        for(int i=0;i<s.size(); ){
           /* if(s.size()-i <= maxlen/2){
                break;
            } */
            int j=i,k=i;
            
            while( k<s.size() && s[k+1]==s[k] )
                k++;
                i=k+1;
            
            while (j>0 && k<s.size() && s[k+1]==s[j-1]){
                --j;
                ++k;
            }
            
            int newlen=k-j+1;
            
            if(newlen>maxlen){
                start=j;
                maxlen=newlen;
            }
        }
        return s.substr(start,maxlen);
        
    }
};
