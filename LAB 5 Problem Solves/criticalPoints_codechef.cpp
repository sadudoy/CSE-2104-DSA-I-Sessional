/*
Node is defined as:
class Node{
  public:
  int data;
  Node* next;
  Node(int data){
      this->data = data;
      this->next = nullptr;
  }
}
*/
int solve(Node* head){
    int count = 0;
    Node* temp = head; 
    while (temp != NULL && temp->next != NULL && temp->next->next != NULL){
        
        if(temp->data < temp->next->data && temp->next->next->data < temp->next->data)
            count++;
        
        if(temp->data > temp->next->data && temp->next->next->data > temp->next->data)
            count++;
        
        temp = temp->next;
    }
    return count;
}