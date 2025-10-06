#include <bits/stdc++.h>
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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || k == 1) return head;

        // Step 1: Check if there are at least k nodes
        ListNode* temp = head;
        int count = 0;
        while (temp != NULL && count < k) {
            temp = temp->next;
            count++;
        }

        if (count < k) {
            // Less than k nodes → don’t reverse
            return head;
        }

        // Step 2: Reverse exactly k nodes
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* forward = NULL;
        int rcount = 0;

        while (curr != NULL && rcount < k) {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            rcount++;
        }

        // Step 3: Recursively call for the rest
        if (forward != NULL) {
            head->next = reverseKGroup(forward, k);
        }

        // prev = new head of this reversed k-group
        return prev;
    }
};

// ---------------- Helper functions ----------------
ListNode* createList(vector<int> arr) {
    if (arr.empty()) return NULL;
    ListNode* head = new ListNode(arr[0]);
    ListNode* curr = head;
    for (int i = 1; i < arr.size(); i++) {
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }
    return head;
}

void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// ---------------- Main function ----------------
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 2;

    ListNode* head = createList(arr);

    cout << "Original List: ";
    printList(head);

    Solution sol;
    head = sol.reverseKGroup(head, k);

    cout << "Reversed in groups of " << k << ": ";
    printList(head);

    return 0;
}
