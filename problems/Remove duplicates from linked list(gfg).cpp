//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
 // your code goes here
 Node * prev = nullptr;
 Node * curr = head;
 
 while(curr != nullptr)
 {
     Node * todelete = nullptr;
     if(prev != nullptr)
     {
         if(prev-> data == curr->data)
         {
             prev->next = curr->next;
             todelete = curr;
         }
        else{ 
            prev=curr;
        }
     }
    else{ 
        prev = curr; 
        
    }
     curr = curr->next;
     if(todelete != nullptr)
        delete(todelete);
 }
 return head;
}
