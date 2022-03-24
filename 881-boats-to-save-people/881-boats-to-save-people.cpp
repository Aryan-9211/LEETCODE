class Solution
{
    public:
        int numRescueBoats(vector<int> &people, int limit)
        {
            sort(people.begin(), people.end(), greater<int> ());
            int count = 0;
            int j = people.size() - 1;
            for (int i = 0; i < people.size(); i++)
            {
                if (j == i) {
                    count++;
                    break;
                }
                if(j < i) break;
                if (people[i] + people[j] <= limit)
                {
                    count++;
                    j--;
                }
                else 
                {
                    count++;
                }
            }
            return count;
        }
};