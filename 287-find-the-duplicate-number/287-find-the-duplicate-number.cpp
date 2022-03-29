class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       int x = 0;
        map<int, int> m;
        for(auto i : nums){
            m[i]++;
        }
        for(int i = 1; i < nums.size() ; i++){
            if(m[i] > 1)  return i;
        }
        return 0;
    }
};