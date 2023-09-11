class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) 
    {
        int length = 0;
        ListNode *temp = head;
        while(temp){
            temp = temp->next;
            length++;
        }
        vector<ListNode*> ans(k,NULL);
        int parts = length / k;
        int extra_parts = length % k;
        temp=head;
        int j=0;
        while(temp){
            ListNode *c = temp;
            ListNode *dummy = new ListNode(-1);
            ListNode *cur = dummy;
            for(int i=0;i<parts;i++){
                cur->next = new ListNode(temp->val);
                temp = temp->next;
                cur = cur->next;
            }
            if(extra_parts >0){
                cur->next = new ListNode(temp->val);
                temp = temp->next;
                cur = cur->next;
                extra_parts--;                
            }
            ans[j] = dummy->next;
            j++;
        }
        return ans;
    }
};

