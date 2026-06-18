class Solution {
public:
    ListNode* reverselist(ListNode*head){
        ListNode*curr=head;
        ListNode*prev=NULL;
        while(curr!=NULL){
            ListNode*next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;

    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL||head->next==NULL)
        return true;
        ListNode*fast=head;
        ListNode*slow=head;
        while(fast->next!=NULL&&fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode*newhead=reverselist(slow->next);
        ListNode*first=head;
        ListNode*second=newhead;
        while(second!=NULL){
            if(first->val!=second->val){
                reverselist(newhead);
                return false;
            }
            first=first->next;
            second=second->next;
        }
        reverselist(newhead);
        return true;

        
        


    }
};
