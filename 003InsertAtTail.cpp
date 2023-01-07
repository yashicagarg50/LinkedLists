#include<iostream>
using namespace std;

class ListNode {
    public :
        int val;
        ListNode* next;

        ListNode(int val) {
            this->val = val;
            this->next = NULL;
        }
};

    void insertAtHead(ListNode*& head, int val) {

            ListNode* n = new ListNode(val);
            n->next = head;
            head = n;
    }

    ListNode* getTail(ListNode* temp) {

        while(temp->next != NULL) {
            temp = temp->next;
        }
        return temp;
    }

    void insertAtTail(ListNode*& head, int val) {

        // time : O(n)

        if(head == NULL) {
            // LL is empty
            // thus adding at tail and head is same
            insertAtHead(head, val);
            return;
        }

        // 1. dynamically create a new node with the given 'val'
        ListNode* n = new ListNode(val);
        // 2. get hold of the tail pointer i.e. address of the tail node
        ListNode* tail = getTail(head);
        // 3. update the next field of the tail pointer such that it points to the newly created node
        tail->next = n;
    }

    // void printLinkedList(ListNode* temp) {

    //     while(temp != NULL) {
    //         cout << temp->val << " ";
    //         temp = temp->next;

    //     }
    //     cout << endl;
    // }

     void printLinkedList(ListNode* head) {

        while(head != NULL) {
            cout << head->val << " ";
            head = head->next;

        }
        cout << endl;
    }


int main() {
    ListNode* head = NULL; //initially, linkedList is empty

    insertAtTail(head, 60);
    insertAtTail(head, 70);

    printLinkedList(head);
    return 0;
}