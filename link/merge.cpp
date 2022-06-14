#include <iostream>
#include <vector>
#include "link.h"

using namespace std;

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if (list1 == nullptr) {
        return list2;
    }
    if (list2 == nullptr) {
        return list1;
    }
    if (list1->val < list2->val) {
        list1->next = mergeTwoLists(list1->next, list2);
        return list1;
    } else {
        list2->next = mergeTwoLists(list1, list2->next);
        return list2;
    }
}

int main() {
    vector<int> arr1 = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18};
    vector<int> arr2 = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23};

    ListNode* list1 = InitList(arr1);
    ListNode* list2 = InitList(arr2);

    ShowList(mergeTwoLists(list1, list2));

    return 0;
}
