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
    vector<int> nodetovec(ListNode* l1){
        vector<int> result;
        ListNode* current = l1;
        while (current != nullptr) {
            result.push_back(current->val);  
            current = current->next;     
        }
        return result;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> v1 = nodetovec(l1);
        vector<int> v2 = nodetovec(l2);
        int s = v1.size();
        int s1 = v2.size();
        int i = 0, j = 0;
        int sum = 0;
        int carry = 0;
        vector<int> ans;

        while (i != s && j != s1) {
            sum = v1[i] + v2[j] + carry;
            ans.push_back(sum % 10);
            carry = sum / 10;
            i++;
            j++;
        }

        while (i != s) {
            sum = v1[i] + carry;
            ans.push_back(sum % 10);
            carry = sum / 10;
            i++;
        }

        while (j != s1) {
            sum = v2[j] + carry;
            ans.push_back(sum % 10);
            carry = sum / 10;
            j++;
        }

        if (carry != 0) {
            ans.push_back(carry);
        }

        ListNode* head;
        ListNode* temp;

        for (int i = 0; i < ans.size(); i++) {
            ListNode* newnode = new ListNode(ans[i]);
            if (i == 0) {
                head = newnode;
                temp = newnode;
            } else {
                temp->next = newnode;
                temp = newnode;
            }
        }
        return head;
    }
};
