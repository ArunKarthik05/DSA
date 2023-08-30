Node* deleteNode(Node *head,int x)
{
    //Your code here
    Node *cur = head;
    Node *prev = nullptr;
    
    if(x==1)    return head->next;
    while(x>2){
        cur = cur -> next;
        --x;
    }
    Node *todelete = cur->next;
    cur->next = cur -> next ->next;
    delete(todelete);
    
    return head;
}

