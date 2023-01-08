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

void printLinkedList(ListNode* temp) {

    while(temp) {
        cout << temp->val <<" ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtHead(ListNode*& head, int val) {
    ListNode* n = new ListNode(val);
    n->next = head;
    head = n;
}

ListNode* getMidPoint(ListNode* head) {

    if(head == NULL) {
        // LL is empty
        return NULL;
    }

    ListNode* slow = head;
    ListNode* fast = head->next;

    while(fast != NULL and fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

int main() {

    ListNode* head = NULL; // LL is empty

    insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

    ListNode* midPoint = getMidPoint(head);

    cout << midPoint->val << endl;

    return 0;

}