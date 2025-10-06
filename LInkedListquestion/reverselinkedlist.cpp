#include <iostream>
using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *temp = head;
        ListNode *forward;
        ListNode* prev = nullptr;

        while (temp != nullptr) {
            forward = temp->next;   // save next node
            temp->next = prev;      // reverse link
            prev = temp;            // move prev forward
            temp = forward;         // move temp forward
        }

        return prev; // new head
    }
};

// Helper function to print linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Helper function to create a linked list from array
ListNode* createList(int arr[], int n) {
    if (n == 0) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* curr = head;
    for (int i = 1; i < n; i++) {
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }
    return head;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Create linked list
    ListNode* head = createList(arr, n);

    cout << "Original List: ";
    printList(head);

    // Reverse linked list
    Solution s;
    ListNode* reversed = s.reverseList(head);

    cout << "Reversed List: ";
    printList(reversed);

    return 0;
}


/* 
by this methiod wencan print the linked list in reverse
void printReverse(Node *head)
{
    //Write your code here
	
    if (head == NULL) return;
    printReverse(head->next);   // go till end
    cout << head->data << " ";  // print while returning
}
    
print the ereverse linked list not reversing the linked list actuaallly*/