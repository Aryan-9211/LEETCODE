class Solution
{
    public:
        int numRescueBoats(vector<int> &people, int limit)
        {
            sort(people.begin(), people.end(), greater<int>());
            int count = 0;
            int sum = 0;
            int j = people.size() - 1;
            for (int i = 0; i < people.size(); i++)
            {
                if (j < i) break;
                sum += people[i];
                if (i != j) sum += people[j];
                if (sum <= limit)
                {
                    count++;
                    sum = 0;
                    j--;
                }
                else if (sum > limit)
                {
                    sum = 0;
                    count++;
                }
            }
            return count;
        }
};