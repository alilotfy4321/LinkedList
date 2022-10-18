 
 //https://leetcode.com/problems/linked-list-cycle-ii/submissions/
 
 ListNode *detectCycle(ListNode *head) {
        ListNode* s=head;
        ListNode* f=head;
        bool cycleFound=false;

         while(f && f->next){
          s=s->next;
          f=f->next->next;
              if(s==f){
                  cycleFound=true;
                  break;
              }
                 
                         }
        if(cycleFound){
             f=head;  
              while(s!=f){
               s=s->next;
               f=f->next;
            } 
        }
        else{
            return NULL;
        }
        return s;
    }
