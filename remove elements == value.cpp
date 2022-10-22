 // https://leetcode.com/problems/remove-linked-list-elements/submissions/
  
  ListNode* removeElements(ListNode* head, int value) {
        if(head==NULL)return NULL;
        
        ListNode* prv=NULL;
        ListNode* curr=head;
        ListNode* temp=head;
        
        while(temp){
            temp=temp->next;
            if(curr->val==value){
               if(prv==NULL){
                   head=temp;
                   curr=temp;
               }else{
                   prv->next=temp;
                   curr=temp;
                   
               } 
            }
            else{
              prv=curr;
              curr=temp;
            }
        }
        return head;
    }
