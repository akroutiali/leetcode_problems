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
/*
first element
count1=2*1+4*10+3*100==>2
807 ===>7=807/100=8
*/
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*p=l1;
        ListNode*q=l2;
        int carry=0;
        ListNode*curr=new ListNode(0);
        ListNode*dummuy=curr;
        while(q!=nullptr || p!=nullptr)
        {
            int x=p!=nullptr?p->val:0;
            int y=q!=nullptr?q->val:0;
            int sum=x+y+carry;
             carry=sum/10;
            curr->next=new ListNode(sum%10);
            curr=curr->next;
            if(p!=nullptr) p=p->next;
            if(q!=nullptr) q=q->next;
        }
    if(carry>0)
        curr->next=new ListNode(carry);
    return dummuy->next;
    }
};;
