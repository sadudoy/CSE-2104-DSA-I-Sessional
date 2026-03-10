/*
struct Node {
    int data;
    Node* next;
    Node(int d) {
        data = d;
        next = nullptr;
    }
*/

int getLength(Node* head) {
    if(head == NULL) return 0;
    int count = 0;
    while(head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}
