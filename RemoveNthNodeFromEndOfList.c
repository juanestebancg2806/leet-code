/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode *it = head,*ans;
    int N = 0,i = 0,idx;
    while(it != NULL){
        it = it->next;
        N++;
    }
    idx = N-n;
    it = idx == 0 && N > 0 ? head->next:head;
    i = idx == 0 && N > 0 ? 1: 0;
    ans = it;
    while(i < N && it != NULL){
        if(i+1 == idx)
            it->next = it->next->next;
        it = it->next;
        
        i++;
    }
   
    
    return ans;
    

}

int main(){
	return 0;
	
}
