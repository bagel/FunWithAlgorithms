package main

import "fmt"

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func initTree() *TreeNode {
	root := &TreeNode{
		Val:   1,
		Left:  &TreeNode{Val: 2, Left: &TreeNode{Val: 4}, Right: &TreeNode{Val: 5}},
		Right: &TreeNode{Val: 3, Left: &TreeNode{Val: 6}, Right: &TreeNode{Val: 7}},
	}

	return root
}

func preOrder(root *TreeNode) {
	cur := root
	if cur == nil {
		return
	}

	fmt.Printf("%d->", cur.Val)
	preOrder(cur.Left)
	preOrder(cur.Right)
}

func inOrder(root *TreeNode) {
	cur := root
	if cur == nil {
		return
	}

	inOrder(cur.Left)
	fmt.Printf("%d->", cur.Val)
	inOrder(cur.Right)
}

func postOrder(root *TreeNode) {
	cur := root
	if cur == nil {
		return
	}

	postOrder(cur.Left)
	postOrder(cur.Right)
	fmt.Printf("%d->", cur.Val)
}

func sameTree(t1 *TreeNode, t2 *TreeNode) bool {
	if t2 == nil {
		return true
	}

	if t1 == nil || t1.Val != t2.Val {
		return false
	}

	return sameTree(t1.Left, t2.Left) && sameTree(t1.Right, t2.Right)
}

func hasSubTree(t1 *TreeNode, t2 *TreeNode) bool {
	result := false

	if t1 != nil && t2 != nil {
		if t1.Val == t2.Val {
			result = sameTree(t1, t2)
		}

		if !result {
			result = sameTree(t1.Left, t2)
		}

		if !result {
			result = sameTree(t1.Right, t2)
		}
	}

	return result
}

func main() {
	root := initTree()
	preOrder(root)
	fmt.Printf("\n")
	inOrder(root)
	fmt.Printf("\n")
	postOrder(root)
	fmt.Printf("\n")

	sub := &TreeNode{Val: 2, Left: &TreeNode{Val: 4}, Right: &TreeNode{Val: 7}}
	fmt.Println(hasSubTree(root, sub))
}
