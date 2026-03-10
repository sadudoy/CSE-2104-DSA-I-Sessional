/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> vec, vec2;
        
        if(head == NULL) {
            return true;
        } 
            
        while(head != NULL) {
            vec.push_back(head->val);
            head = head->next;
        }
        

        for(int i = vec.size()-1; i>=0; i--) {
            vec2.push_back(vec[i]);
        }

        if(vec == vec2) return true;
        else return false;
        
    }
};