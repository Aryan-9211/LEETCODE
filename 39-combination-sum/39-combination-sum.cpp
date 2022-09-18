class Solution {
public:
    vector<vector<int>> ans;
    void generate(vector<int> &can, int t, int i, int sum, vector<int> v){
        if(sum > t) return;
        if(sum == t) { ans.push_back(v); return; }
        if(i == can.size()) return;
        v.push_back(can[i]); sum += can[i];
        generate(can, t, i, sum, v);
        v.pop_back(); sum -= can[i];
        generate(can, t, i + 1, sum, v);
    }
    vector<vector<int>> combinationSum(vector<int>& can, int t) {
        vector<int> v; int sum = 0;
        generate(can, t, 0, sum, v);
        return ans;
    }
};