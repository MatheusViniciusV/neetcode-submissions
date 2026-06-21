/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution
{
public:
    ListNode* mergeKLists(vector<ListNode*>& lists)
    {
        
        vector<ListNode*> aux;

        for(auto l : lists)
        {
            ListNode* cur = l;

            while(cur)
            {
                aux.push_back(cur);
                cur = cur->next;
            }
        }

        sort(aux.begin(), aux.end(), [](const auto &a, const auto &b) {
            return a->val < b->val;
        });

        if(aux.empty())
            return nullptr;

        sort(aux.begin(), aux.end(), [](const auto& a, const auto& b) {
            return a->val < b->val;
        });

        for(int i = 1; i < aux.size(); i++)
            aux[i - 1]->next = aux[i];

        aux.back()->next = nullptr;

        return aux[0];
    }
};
