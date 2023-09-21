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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL || head->next ==NULL){
            return head->next;
        }
        ListNode* temp = head;
        int count = 0;
        while(temp->next!=NULL){
            count+=1;
            temp = temp->next;
        }
        if(count%2!=0){
            ListNode* curr = head;
            count /=2;
            while(count--){
                curr = curr->next;
            }
            curr->next = curr->next->next;
            return head;
        }
        else{
            ListNode* curr = head;
            count = (count/2) -1;
            while(count--){
                curr= curr->next;
            } 
            curr->next = curr->next->next;
            return head;
        }
    }
};