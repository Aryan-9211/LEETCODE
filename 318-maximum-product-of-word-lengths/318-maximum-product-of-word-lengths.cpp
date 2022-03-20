class Solution
{
    public:
        int maxProduct(vector<string> &words)
        {
            vector<int> pro;
            pro.push_back(0);
            for (int i = 0; i < words.size(); i++)
            {
                int arr1[26] = { 0 };
                for (int j = 0; j < words[i].size(); j++)
                {
                    arr1[words[i][j] - 'a']++;
                }
                for (int k = i + 1; k < words.size(); k++)
                {
                    int arr2[26] = { 0 };
                    for (int l = 0; l < words[k].size(); l++)
                    {
                        arr2[words[k][l] - 'a']++;
                    }
                    int x = 1;
                    for (int m = 0; m < 26; m++)
                    {
                        if (arr1[m] > 0 && arr2[m] > 0)
                        {
                            x = 0;
                            break;
                        }
                    }
                    if (x)
                    {
                        pro.push_back((words[i].size()) *(words[k].size()));
                    }
                }
            }
            sort(pro.begin(), pro.end(), greater<int> ());
            return pro[0];
        }
};