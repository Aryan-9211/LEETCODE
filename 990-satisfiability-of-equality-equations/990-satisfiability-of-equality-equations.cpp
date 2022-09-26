const int N = 1e5 + 10;
vector<int> adj[N];

int siz[N];
int parent[N];

void make(int v){
    parent[v] = v;
    siz[v]=1;
}

int find(int v){
    if(v == parent[v]) return v;
    return parent[v] = find(parent[v]);
}

void Union(int a, int b){
    a = find(a);
    b = find(b);
    if(a !=b){
        if(siz[a] < siz[b]) swap(a, b);
        parent[b] = a;
        siz[a] += siz[b];
    }
}

class Solution {
public:
    bool equationsPossible(vector<string>& s) {
        for(int i = 0; i <= 26; i++){ make(i); }
        for(int i = 0; i < s.size(); i++){
            if(s[i][1] == '=' && s[i][2] == '='){
                int a = s[i][0] - 'a';
                int b = s[i][3] - 'a';
                Union(a, b);
            }
        }
         for(int i = 0; i < s.size(); i++){
            if(s[i][1] == '!' && s[i][2] == '='){
                int a = s[i][0] - 'a';
                int b = s[i][3] - 'a';
                 int pa = find(a);
                int pb = find(b);
                if(pa == pb) return false;
            }
        }
        return true;
    }
};