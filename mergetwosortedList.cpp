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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode*list;
        ListNode*temp1=list1;
        ListNode*temp2=list2;
        
        if(temp1==nullptr && temp2==nullptr)
            return nullptr;
        else if(temp1==nullptr)
            return temp2;
        else if(temp2==nullptr)
            return temp1;
        
        list=new ListNode();
        ListNode*dummy=list;
        while(temp1 || temp2)
        {
            if(temp1==nullptr)
            {
                dummy->next=temp2;
                temp2=temp2->next;
                dummy=dummy->next;
            }
            else if(temp2==nullptr)
            {
                
                dummy->next=temp1;
                temp1=temp1->next;
                dummy=dummy->next;
            }
            else if(temp1->val<=temp2->val)
            {
                dummy->next=temp1;
                temp1=temp1->next;
                dummy=dummy->next;
            }
            else if(temp2->val<temp1->val)
            {
                dummy->next=temp2;
                temp2=temp2->next;
                dummy=dummy->next;
            }
        }
        return list->next;
    }
};
/*
algorithme :
if list1 is null return list2 
if list2 is null return  list1 
if list1 and list2 are not null : 
if(list1->val <list->val)
list=list1->val;
list=list->next
else 
list=list2->val
list=list->next
time complexity :O(n+m) : where n:the lenght of the linked list 1 and m the lenght of the linked list2
space complexity :O(1)
*/
