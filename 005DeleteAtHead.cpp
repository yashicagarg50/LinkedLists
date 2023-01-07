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

void deleteAtHead(ListNode*& head) {

    // time : O(1)

    if(!head) { // head == NULL 
    // LL is empty
    return;
    }

    ListNode* temp = head;
    head = head->next;
    delete temp;

}

int main() {

    ListNode* head = NULL // initially, LL is empty

    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);

    printLinkedList(head);
    
    deleteAtHead(head);

    printLinkedList(head);

}