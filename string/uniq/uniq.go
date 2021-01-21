package main

import "fmt"

func main() {
	input := "aaaaaaaaaaaabbcc"
	str := []rune(input)

	if len(str) > 3000 {
		fmt.Printf("%v\n", false)
		return
	}

	strMap := make(map[rune]int, 0)
	for _, s := range str {
		strMap[s] = 1
	}

	l := len(strMap)
	fmt.Println(l)

	if l > 1 {
		fmt.Printf("%v\n", false)
	} else {
		fmt.Printf("%v\n", true)
	}
}
