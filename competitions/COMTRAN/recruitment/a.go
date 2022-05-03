package main

import f "fmt"

func main() {
	var (
		n, koin, temp, banyak int
	)
	f.Scan(&n)
	for n > 0 {
		temp = koin
		f.Scan(&koin)
		if temp+koin > koin {
			banyak++
		}

		n--
	}
}
