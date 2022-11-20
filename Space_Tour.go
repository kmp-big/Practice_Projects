package main

import "fmt"

func fuelGauge(fuel int){
  fmt.Println("You have",fuel,"gallons of fuel left")
}

// Create the function calculateFuel() here
func calculateFuel(planet string) int {
  var fuel int
  switch planet{
    case "Venus":
        fuel=300000
    case "Mercury":
        fuel=500000
    case "Mars":
        fuel=700000
    default:
      fuel=0
  }
  return fuel

}

// Create the function greetPlanet() here
func greetPlanet(planet string){
  fmt.Println("You are in",planet)
}


func cantFly(){
  fmt.Println("We do not have the available fuel to fly there")
}

// Create the function flyToPlanet() here
func flyToPlanet(planet string, fuel int) int {
  var fuelRemaining int
  var fuelCost int
  fuelRemaining=fuel
  fuelCost=calculateFuel(planet)
  if(fuelRemaining>=fuelCost){
    greetPlanet(planet)
    fuelRemaining-=fuelCost
  } else{
    cantFly()
  }
  return fuelRemaining
}

func main() {
 
  var fuel int
  fuel=1000000
  planetChoice:="Venus"
  fuel=flyToPlanet(planetChoice,fuel)
  fuelGauge(fuel)
  
  
}
