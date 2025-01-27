class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *dummy= new ListNode(-1);
        ListNode *tail= dummy;

        while(list1 && list2){
            if(list1->val < list2->val){
                tail->next= list1;
                list1= list1->next;
            }
            else{
                tail->next= list2;
                list2 = list2->next;
            }
            tail= tail->next;
        }
            if(list1) tail->next= list1;
            else tail->next= list2;
        return dummy->next;
    }
};
