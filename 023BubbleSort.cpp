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

ListNode* bubbleSort(ListNode* head) {

    int n = computeLengthIterative(head);

    int i=1;
    while(i<n) {
        int j = 0;
        ListNode* curr = head;
        ListNode* prev = NULL;

        while(j < n-i) {
            ListNode* temp = curr->next;
            if(curr->val > next->val) {
                // swap the curr npde with the temp node
                curr->next = temp->next
            }
        }
    }
}

int main() {
    ListNode* head = NULL;
    insertAtHead(head, 10);
	insertAtHead(head, 20);
	insertAtHead(head, 30);
	insertAtHead(head, 40);
	insertAtHead(head, 50);
	insertAtHead(head, 50);

    printLinkedList(head);

    head = bubbleSort(head);

    printLinkedList(head);

    return 0;

}