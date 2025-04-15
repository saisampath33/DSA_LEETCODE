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
class Solution {
public:
    vector<int> LLtoVec(ListNode* head){
        vector<int> ans;
        ListNode* curr = head;
        while(curr!=nullptr){
            ans.push_back(curr->val);
            curr = curr->next;
        }
        return ans;
    }
    int pairSum(ListNode* head) {
        int maxi =0;
        int sum =0;
        vector<int> ans = LLtoVec(head);
         int n = ans.size();
        for(int i=0;i<n/2;i++){
            sum = ans[i]+ans[n-1-i];
            maxi = max(sum,maxi);
        }
        return maxi;
    }
};