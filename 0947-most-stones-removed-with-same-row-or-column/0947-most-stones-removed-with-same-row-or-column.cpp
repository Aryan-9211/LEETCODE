class Solution
{
    public:
    int siz[100010];
    int parent[100010];

    void make(int v)
    {
        parent[v] = v;
        siz[v] = 1;
    }

    int find(int v)
    {
        if (v == parent[v]) return v;
        return parent[v] = find(parent[v]);
    }

    void Union(int a, int b)
    {
        a = find(a);
        b = find(b);
        if (a != b)
        {
            if (siz[a] < siz[b]) swap(a, b);
            parent[b] = a;
            siz[a] += siz[b];
        }
    }

    int removeStones(vector<vector<int>> &stones)
    {
        int n = stones.size();
        int rm = INT_MIN;
        int cm = INT_MIN;
        for(auto i : stones){
            rm = max(rm, i[0]);
            cm = max(cm, i[1]);
        }
        for(int i = 0; i < n; i++) stones[i][1] += (rm + 1);
        for(int i = 0; i <= (rm + rm + cm + 1); i++) make(i);
        set<int> st;
        for(auto i : stones) {
            Union(i[0], i[1]);
            st.insert(i[0]);
            st.insert(i[1]);
        }
        int ans = 0;
        for(auto i : st){
            if(find(i) == i) ans++;
        }
        return n - ans;       
    }
};