class Solution
{
    public:
        int lastStoneWeight(vector<int> &stones)
        {
            sort(stones.begin(), stones.end());
            int n = stones.size();
            if(n == 1) return stones[0];
            if(n == 2) return abs(stones[0] - stones[1]);
            for (int i = 0; i < n; i++)
            {
                if (stones.size() == 0) return 0;
                if (stones.size() == 1) break;
                int x = abs(stones[stones.size() - 1] - stones[stones.size() - 2]);
                stones.erase(stones.end() - 1);
                stones.erase(stones.end() - 1);
                if(x == 0) continue;
                stones.push_back(x);
                sort(stones.begin(), stones.end());
                cout << x << endl;
                
            }
            return stones[0];
        }
};