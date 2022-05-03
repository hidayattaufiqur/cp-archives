package main

import "log"

func findLength(a []int) int{
	count := 0
	for count = range a {
		count++
	}
	return count
}

func main() {
	// var a [10]int
	b := []int {1,2,3}
	c := findLength(b)	
	// i := 0
	// panjang := 0
	// for b[i] != nil{
	// 	panjang++
	// 	i++
	// }
	log.Println(c)
}