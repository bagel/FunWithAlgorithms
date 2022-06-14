#include <iostream>
#include <vector>
#include "link.h"

using namespace std;

ListNode* reverseList(ListNode* head) {
    ListNode* cur = head;
    ListNode* prev = nullptr;
    while (cur != nullptr) {
        ListNode* temp = cur->next;
        cur->next = prev;
        prev = cur;
        cur = temp;
    }
    return prev;
}

int main() {
    vector<int> arr = {0, 1, 2, 3, 4, 5, 6};

    ListNode* head = InitList(arr);
    ShowList(head);

    ShowList(reverseList(head));

    return 0;
}
