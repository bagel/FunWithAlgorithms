package main

import "fmt"

type ListNode struct {
	Val  int
	Next *ListNode
}

func initList(n int) *ListNode {
	head := &ListNode{Val: 0}

	pre := head
	for i := 1; i < n; i++ {
		cur := &ListNode{Val: i}
		pre.Next = cur
		pre = cur
	}

	return head
}

func showList(head *ListNode) {
	cur := head
	for cur != nil {
		fmt.Printf("%v ", cur.Val)
		cur = cur.Next
	}
	fmt.Printf("\n")
}

func reverseList(head *ListNode) *ListNode {
	cur := head
	var pre *ListNode
	for cur != nil {
		cur.Next, cur, pre = pre, cur.Next, cur
	}

	return pre
}

func kthList(head *ListNode, k int) *ListNode {
	tail := head
	for k > 0 && tail != nil {
		tail = tail.Next
		k--
	}

	for tail != nil {
		tail = tail.Next
		head = head.Next
	}

	return head
}

func main() {
	head := initList(10)
	showList(head)
	showList(reverseList(head))
	head = initList(20)
	showList(kthList(head, 3))
}
