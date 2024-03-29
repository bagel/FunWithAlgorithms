#include <vector>
#include "link.h"

using namespace std;

bool isCycle(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        cout << slow->val << " " << fast->val << endl;
        if (slow == fast) {
            return true;
        }
    }

    cout << "test" << endl;
    return false;
}

ListNode* posCycle(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            ListNode* p = head;
            while (slow != p) {
                slow = slow->next;
                p = p->next;
            }
            return p;
        }
    }

    return nullptr;
}

int main() {
    vector<int> vec = {0, 1, 2, 3, 4, 5, 6, 7, 8};

    ListNode* head = new ListNode(vec);
    head->ShowList();

    ListNode* tail = head;
    while (tail != nullptr && tail->next != nullptr) {
        tail = tail->next;
    }
    cout << "tail: " << tail->val << endl;

    ListNode* cur = head;
    int i = 0;
    while (i < 4 && cur != nullptr) {
        cur = cur->next;
        ++i;
    }
    cout << "cur: " << cur->val << endl;

    //tail->next = cur;

    //cout << "isCycle: " << isCycle(head) << endl;

    //ListNode* p = posCycle(head);
    //cout << "pos: " << p->val << endl;

    delete head;
    return 0;
}
