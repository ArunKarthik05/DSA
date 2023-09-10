class Solution
{
    public:
        Node* insert(Node* node, int data) {
        if(node == NULL)    return new Node(data);
        if(data > node->data)
        {
            if(node->right == NULL)     node->right = new Node(data);
            else    insert(node->right,data);
        }
        else if(data < node->data)
        {
            if(node->left == NULL)  node->left = new Node(data);
            else    insert(node->left,data);
        }
        return node;
    }

};
