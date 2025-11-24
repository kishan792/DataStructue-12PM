/*
    Reverse a linked list using tack

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        stack<int> st;

        ListNode* cur = head;

        while(cur!=NULL)
        {
            st.push(cur->val);
            cur = cur->next;
        }

        cur = head;
        while(st.empty()!=true)
        {
            cur->val = st.top();
            cur = cur->next;
            st.pop();
        }

        return head;
    }
};

*/

/*
    Reverse a linked list without stack

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *cur = head;
        ListNode* prev = NULL;

        while(cur!=NULL)
        {
            ListNode *temp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = temp;
        }

        return prev;
    }
};

*/

/*

intersection of linked list.....

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *a = headA;
        ListNode *b = headB;

        while(a!=b)
        {
            if(a!=NULL)
            {
                a=a->next;
            }
            else
            {
                a = headB;
            }

            if(b!=NULL)
            {
                b = b->next;
            }
            else
            {
                b = headA;
            }
        }

        return a;
    }
};

*/

/*

Merge 2 sorted linked list


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

       ListNode *dummy = new ListNode(-1); 

       ListNode *prev = dummy;

       while(list1!=NULL && list2!=NULL)
       {
        if(list1->val <= list2->val)
        {
            prev->next = list1;
            prev = prev->next;
            list1 = list1->next;
        }
        else
        {
            prev->next = list2;
            prev = prev->next;
            list2 = list2->next;
        }
       }
       if(list1!=NULL)
       {
        prev->next = list1;
       }

        if(list2!=NULL)
       {
        prev->next = list2;
       }

       return dummy->next;
        
    }
};


*/