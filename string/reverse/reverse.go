package main

import "fmt"

func main() {
	//s := "hello world!"
	s := "!dlrow olleh"
	str := []rune(s)

	i := 0
	j := len(str) - 1
	for i < j {
		str[i], str[j] = str[j], str[i]
		i++
		j--
	}

	fmt.Println(string(str))
}
