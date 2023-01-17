#include<iostream>
using namespace std;

class ListNode {
    public:

    int val;
    ListNode* next;

    ListNode(int val) {
        this->val = val;
        this->next = NULL;
    }
};

int main() {
    insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

    printLinkedList(head);

    int k = 3;
    head = rotateLinkedList(head, k);
    printLinkedList(head);

    return 0;
}