class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> st ;
        int ans = 0 ;
        
        int n = s.size();
        
        int low = 0 , high = 0 ;
        while(high < n){
            if(st[s[high]]){
                st[s[low]]--;
                low ++ ;
            }
            else{
                st[s[high]] ++ ;
                high ++ ;
            }
            
            ans = max(ans , high - low);
        }
        
        return ans ;
    }
};