
//https://www.interviewbit.com/problems/sort-binary-linked-list/hints/

int countZero(ListNode* A){
    int z=0; 
    while(A){
        if(A->val==0)z++;
        A=A->next;
    } 
    return z;
 }
 void setValues(ListNode* A,int z){
     while(z){
        A->val=0;
        A=A->next;
        z--;
    }
     while(A){
        A->val=1;
        A=A->next;
    }
 }
/*ListNode* Solution::solve(ListNode* A) {
    
    ListNode* head=A;

    int z=countZero(A);
    setValues(A,z);
    return head;
}*/


//Another solution---------
ListNode* Solution::solve(ListNode* A) {
    
    ListNode* p1=A;
    ListNode* p2=A;
    
    while(p1){
        if(p1->val==0){
            swap(p1->val,p2->val);
            p2=p2->next;
        }
        p1=p1->next;
    }
    
    return A;
}
