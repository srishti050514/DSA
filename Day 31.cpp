Ques 1:- Add Two Numbers

class Solution {
    public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            int carry = 0;
            ListNode * dummy = new ListNode(0);
            ListNode * temp = dummy;
            while(l1!=nullptr || l2!=nullptr || carry>0){
                int sum = carry;
                if(l1!=nullptr){
                    sum+=l1->val;
                    l1 = l1->next;
                }
                if(l2!=nullptr){
                    sum+=l2->val;
                    l2 = l2->next;
                }
                ListNode * nn = new ListNode(sum%10);
                carry = sum/10;
                temp->next = nn;
                temp = nn;
            }
            return dummy->next;
        }
    };

TC : O(n)
 SC : O(n) 

Ques 2 :- Remove Linked List Elements

class Solution {
    public:
        ListNode* removeElements(ListNode* head, int val) {
            if(head==nullptr) return head;
            if(head->next==nullptr && head->val==val) return nullptr;
            ListNode * temp = head;
            ListNode * prev = nullptr;
            while(temp!= nullptr){
                if(temp->val == val){
                    if(prev==nullptr){
                        head = temp->next;
                        temp = head;
                    }
                    else{
                        prev->next = temp->next;
                        temp = temp->next;
                    }
                }
                else{
                    prev = temp;
                    temp = temp->next;
                }
            }
            return head;
        }
    };

 TC : O(n)
 SC : O(1)
