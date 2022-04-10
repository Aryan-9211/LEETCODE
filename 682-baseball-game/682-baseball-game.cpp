class Solution
{
    public:
        int calPoints(vector<string> &ops)
        {
            vector<int> v;
            int idx = -1;
            for (int i = 0; i < ops.size(); i++)
            {
                if (ops[i][0] != 'C' && ops[i][0] != 'D' && ops[i][0] != '+')
                {
                    int x = stoi(ops[i]);
                    v.push_back(x);
                    idx++;
                }
                else if (ops[i][0] == '+')
                {
                    v.push_back(v[idx] + v[idx - 1]);
                    idx++;
                }
                else if (ops[i][0] == 'D')
                {
                    v.push_back(v[idx] *2);
                    idx++;
                }
                else if (ops[i][0] == 'C')
                {
                    v.pop_back();
                    idx--;
                }
            }
            int sum = 0;
            for(auto i : v){
                cout << i << endl;
                sum += i;
            }
            return sum;
        }
};