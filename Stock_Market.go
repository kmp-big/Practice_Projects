package main

import (
	"fmt"
	"math/rand"
	"time"
)
type Stock struct{
  name string
  price float32
}
func randomNumberGen(min float32, max float32) float32 {	
	return min + (max-min)*rand.Float32()
}
func (stock *Stock)updateStock(){
  change:=randomNumberGen(-10000,10000)
  stock.price+=change
}
func displayMarket(market []Stock){
  for i:=0;i<len(market);i++{
    fmt.Println(market[i])
  }
}



func main() {
  rand.Seed(time.Now().UnixNano())
	// Function calls go here
  stockMarket:=[]Stock{{"GOOG",2313.50},{"AAPL",157.23},{"FB",203.77},{"TWTR",50.00}}
  displayMarket(stockMarket)
  stockMarket[1].updateStock()
  fmt.Println()
  displayMarket(stockMarket)
}
