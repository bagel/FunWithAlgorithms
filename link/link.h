#include <iostream>
#include <vector>

using namespace std;


struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
    static ListNode* InitList(vector<int>);
    static void ShowList(ListNode*);
};


static ListNode* InitList(vector<int> arr) {
    ListNode* head = new ListNode(arr[0]);
    ListNode* cur = head;
    for (size_t i = 1; i < arr.size(); ++i) {
        cur->next = new ListNode(arr[i]);
        cur = cur->next;
    }
    return head;
}

static void ShowList(ListNode* head) {
    ListNode* cur = head;
    while (cur != nullptr) {
        cout << cur->val << ",";
        cur = cur->next;
    }
    cout << endl;
}
