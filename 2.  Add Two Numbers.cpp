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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode l(0), *a=&l;
        
        while(l1 || l2 || carry){
            int sum=(l1 ? l1->val:0)+ (l2 ? l2->val :0) + carry;
            a->next= new ListNode(sum%10);
            a=a->next;
            carry=sum/10;
            l1 ? l1=l1->next : 0;
            l2 ? l2=l2->next : 0;
        }
        return l.next;
    }
};
