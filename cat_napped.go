package main
import "fmt"
import "math/rand"
import "time"
func getRandomElement(slice []string) string{
  random:=rand.Intn(len(slice))
  return slice[random]
}
func main() {
  guests:=[]string{"Trump","Tate","Speed","Lil Nas","Yeat"}
  obj:=[]string{"Toy Chest","Crate","Box","Ball"}
  rand.Seed(time.Now().UnixNano())
  Culprit:=getRandomElement(guests)
  Location:=getRandomElement(obj)
  fmt.Println(Culprit, "hid the cat by putting it in the", Location)



}
