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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=0;
        ListNode* ptr= head;
        while(ptr!=nullptr){
            size++;
            ptr=ptr->next;
        }
        int ind=size-n+1;
        ptr=head;
        ListNode* before=nullptr;
        ListNode* after=nullptr;
        int counter=0;
        while(ptr!=nullptr){
            counter++;
            if(counter+1==ind)before=ptr;
            if(counter-1==ind)after=ptr;
            ptr=ptr->next; 
        }
        if(size==1)return nullptr;
        if(before!=nullptr)before->next=after;
        else head=after;
        
        return head;
    }
};