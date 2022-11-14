class Solution {
public:
    int dfs(int i, int n, vector<vector<int>>& stones, vector<int>& vis){
        vis[i] = true;
        int ans = 0;
        for(int j = 0; j < n; j++){
            if(!vis[j] && (stones[j][0] == stones[i][0] || stones[j][1] == stones[i][1])){
                ans += dfs(j, n, stones, vis);
            }
        }
        return ans + 1;
    }
    
    int removeStones(vector<vector<int>>& stones) {
        int ans = 0;
        int n = stones.size();
        vector<int> vis(n + 1, 0);
        for(int i = 0; i < n; i++){
             if(!vis[i]) {
                 ans += dfs(i, n, stones, vis) - 1;
             }
        }
        return (ans);
    }
};