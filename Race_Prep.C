#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Structures section
struct Race{
  int numberOfLaps;
  int currentLap;
  char firstPlaceDriverName[20];
  char firstPlaceRaceCarColor[20];
};
struct RaceCar{
  char driverName[20];
  char raceCarColor[20];
  int totalLapTime;
};
// Print functions section
void printIntro(){
  printf("Welcome to our main event digital race fans!\nI hope everybody has their snacks because we are about to begin!\n");
}
void printCountDown(){
  printf("Racers Ready!\n5\n4\n3\n2\n1\nRace!\n");
}
void printFirstPlaceAfterLap(struct Race race){
  printf("After lap number %d\nFirst Place is:%s in the %s race car\n",race.currentLap,race.firstPlaceDriverName,race.firstPlaceRaceCarColor);
}
void printCongratulations(struct Race race){
  printf("Lets all congratulate %s int the %s race car for an amazing performance.\nIt truly was a great race and everybody have a goodnight!\n",race.firstPlaceDriverName,race.firstPlaceRaceCarColor);

}
// Logic functions section
int calculateTimeToCompleteLap(){
  int speed,acceleration,nerves;
  speed=rand()%(3)+1;
  acceleration=rand()%(3)+1;
  nerves=(rand()%(3))+1;
  return speed+acceleration+nerves;
}
void updateRaceCar(struct RaceCar* raceCar){
  raceCar->totalLapTime=calculateTimeToCompleteLap();
}
void updateFirstPlace(struct Race* race,struct RaceCar* raceCar1,struct RaceCar* raceCar2){
  if(raceCar1->totalLapTime<=raceCar2->totalLapTime){
    race->firstPlaceDriverName= raceCar1->driverName;
    race->firstPlaceRaceCarColor= raceCar1->raceCarColor;
  }
  else{
    race->firstPlaceDriverName=raceCar2->driverName;
    race->firstPlaceRaceCarColor=raceCar2->raceCarColor;
  }

}
void startRace(RaceCar* raceCar1,RaceCar* raceCar2){
  struct Race race={5,1,"",""};
  for(race.currentLap;race.currentLap<=race.numberOfLaps;race.currentLap++){
    updateRaceCar(raceCar1);
    updateRaceCar(raceCar2);
    updateFirstPlace(RaceCar* raceCar1,RaceCar* raceCar2);
    printFirstPlaceAfterLap(race);
  }
  printCongratulations(race);
}
int main() {
	srand(time(0));
    RaceCar rcecar1={"Amit","Red",2};
    RaceCar rcecar2={"Rahul","Blue",3};
    startRace(RaceCar rcecar1,RaceCar rcecar2);
  
}

