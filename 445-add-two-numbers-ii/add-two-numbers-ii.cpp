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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //declare stack
        stack<int>s1;
        stack<int>s2;
        //push all value of l1 and l2 in stack s1 and s2 

        while(l1!=nullptr){
            s1.push(l1->val);
            l1= l1->next;
        }
        while(l2!=nullptr){
            s2.push(l2->val);
            l2= l2->next;
        }

       ListNode* head = nullptr;
       int carry = 0;
       //while loop for findin v1 v2 and sum and carry
       while(!s1.empty() || !s2.empty() || carry != 0  ){
        int val1 = 0;
        if(!s1.empty()){
            val1 = s1.top();
            s1.pop();
        }
        int val2 = 0;
        if(!s2.empty()){
            val2 = s2.top();
            s2.pop();
        }
        int sum = val1 + val2 + carry;
        carry = sum/10;
        int digit = sum%10;

        ListNode* newNode = new ListNode(digit);
        newNode->next = head;
        head = newNode;
       }
       return head;

    }
};