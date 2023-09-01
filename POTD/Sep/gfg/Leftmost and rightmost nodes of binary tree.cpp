Structure of a node is as following
struct Node
{
     int data;
     struct Node* left;
     struct Node* right;
};
*/
void printCorner(Node *root)
{

// Your code goes here
    queue<Node*> toPrinted;
    toPrinted.push(root);
    
    while(!toPrinted.empty())
    {
        int size = toPrinted.size();
        //i=1,BECAUSE ROOT HAS BEEN ALREADY ADDED
        for(int i=1;i<=size;i++)
        {
            Node *front = toPrinted.front();
            //FRONT IS POPPPED AFTER STORING IT
            toPrinted.pop();
            //PRINT 1ST & LAST CHILD ELEMENT 
            if(i==1 or i==size)
                cout<<front->data<<" ";
            //ADDS LEFT CHILD IF EXISTS
            if(front->left)
                toPrinted.push(front->left);
            //ADDS RIGHT  CHILD
            if(front->right)
                toPrinted.push(front->right);
        }
        
    }
}
