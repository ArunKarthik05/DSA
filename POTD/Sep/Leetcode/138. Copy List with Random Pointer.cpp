/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) 
    {
        unordered_map<Node*,Node*>umap;
        Node *cur = head;
        while(cur){
            umap[cur] = new Node(cur->val);
            cur = cur->next;
        }
        cur = head;
        while(cur){
            umap[cur]->next = umap[cur->next];
            umap[cur]->random = umap[cur->random];
            cur=cur->next;
        }
    return umap[head];
    }
};
