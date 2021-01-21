package main

import "fmt"

type ListNode struct {
	Val  int
	Next *ListNode
}

func reverseList(head *ListNode) *ListNode {
	if head == nil || head.Next == nil {
		return head
	}

	var prev *ListNode
	cur := head
	for cur != nil {
		cur.Next, prev, cur = prev, cur, cur.Next
	}

	return prev
}

func initList(n int) *ListNode {
	head := &ListNode{Val: 0}
	var cur *ListNode
	cur = head

	for i := 1; i < n; i++ {
		node := ListNode{Val: i}
		cur.Next = &node
		cur = cur.Next
	}

	fmt.Println(head.Val)
	return head
}

func showList(head *ListNode) {
	cur := head
	for cur != nil {
		fmt.Printf("%d->", cur.Val)
		cur = cur.Next
	}
	fmt.Printf("nil\n")
}

func main() {
	head := initList(10)
	showList(head)
	head = reverseList(head)
	showList(head)
}
