/**
 *Definition for singly-linked list.
 *struct ListNode {
 *  int val;
 *  ListNode * next;
 *  ListNode() : val(0), next(nullptr) {}
 *  ListNode(int x) : val(x), next(nullptr) {}
 *  ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        ListNode* swapNodes(ListNode *head, int k)
        {
            vector<int> v;
            ListNode *curr = head;
            while (curr != NULL)
            {
                v.push_back(curr->val);
                curr = curr->next;
            }
            int size = v.size();
            int i = k - 1;
            int j = size - k;
            swap(v[i], v[j]);
            curr = head;
            i = 0;
            while (curr != NULL)
            {
                curr->val = v[i];
                i++;
                curr = curr->next;
            }
            return head;
        }
};