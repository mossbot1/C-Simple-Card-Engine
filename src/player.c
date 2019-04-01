#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "../headers/player.h"

int playerCount = 0;
int cardCount = 0;

const char nameStrings[][20] = {"Player", "Boris", "Sanchez", "Big Decky", "The Glorb", "Dustin", "Living Chair", "Derek", "Satan", "Ringo", "Gordon", "Jesus", "Swonk"};

void createPlayers(player players[], int count){
  for(int i = 0; i < count; i++){
    players[i].id = i;
    players[i].name = i;
    playerCount++;
  }
}


void printAllNames(player players[]){
  for(int i = 0; i < playerCount; i++){
    printf("%d. %s \n", players[i].id  ,nameStrings[players[i].name]);
  }
}

void drawCards(player players[],  card cards[], int numPlayers, int handSize){

  int cardCount = 0;
  
  for(int i = 0; i < numPlayers; i++){
    for(int j = 0; j < handSize; j++){
    players[i].hand[j].face = cards[cardCount].face;
    players[i].hand[j].suit = cards[cardCount].suit;
    cardCount++;
    }
  }
}

void changeCard(card hand[], card cards[], int handpos,  int cardpos){
  memcpy(&hand[handpos], &cards[cardpos], sizeof(card));
  printf("thinks %d of %d \n ", cards[cardpos].face, cards[cardpos].suit);
};
