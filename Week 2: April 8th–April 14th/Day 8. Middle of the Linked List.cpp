/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* cur = head;
        int n = 0;
        while(cur != NULL){
            n++;
            cur = cur->next;
        }
        int middle = n / 2;
        cur = head;
        while(middle--){
            cur = cur->next;
        }
        return cur;
    }
};
