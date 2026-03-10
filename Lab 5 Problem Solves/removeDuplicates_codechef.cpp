/* Linked List Node
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
}; */

class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        
        Node* temp = head;
        
        while(temp != NULL && temp->next != NULL) {
            
            if(temp->data == temp->next->data) {
                temp->next = temp->next->next;
            }
            else {
                temp = temp->next;
            }
        }
        
        return head;
    }
};