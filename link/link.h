#include <iostream>
#include <vector>

using namespace std;


struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(vector<int>);
    ~ListNode();

    ListNode* InitList(vector<int>);
    void ShowList();
};


inline ListNode::ListNode(vector<int> vec) {
    if (vec.size() == 0) {
        return;
    }

    val = vec[0];
    ListNode* cur = this;
    for (size_t i = 1; i < vec.size(); ++i) {
        cur->next = new ListNode(vec[i]);
        cur = cur->next;
    }
}


inline ListNode::~ListNode() {
    cout << "deconstructor linkedlist " << val << endl;
    if (next == nullptr) {
        return;
    }
    delete next;
    cout << "after: " << this->val << " " << this->next->val << endl;
}


inline void ListNode::ShowList() {
    ListNode* cur = this;
    while (cur != nullptr) {
        cout << cur->val << ",";
        cur = cur->next;
    }
    cout << endl;
}
