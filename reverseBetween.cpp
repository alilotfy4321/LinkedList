
//https://leetcode.com/submissions/detail/827896097/
ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL) return NULL;
        
       ListNode* prv=NULL,*temp=head;
        
        while(left>1){
            prv=temp;
            temp=temp->next;
            left--;
            right--;
        }
        
       ListNode* start=prv;
       ListNode* tail=temp;
       
       /////////////reverse
        prv=NULL;
        ListNode* curr=NULL;
        
        while(right--){
            curr=temp;
            temp=temp->next;
            curr->next=prv;
            prv=curr;
        }
        
        
        if(start!=NULL){
            start->next=prv;
        }
        else{
            head=prv;
        }
        tail->next=temp;
        return head;
    }
