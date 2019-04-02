#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "../headers/player.h"

int playerCount = 0;
int cardCount = 0;

const char nameStrings[][20] = {"Player", "Boris", "Sanchez", "Big Decky", "The Glorb", "Dustin", "Living Chair", "Derek", "Satan", "Ringo", "Gordon", "Jesus", "Swonk"};

void player_create(Player *player){
  player->id = playerCount;
  player->name = playerCount;
  playerCount++;
}

void player_createAll(Player players[], int count){
  for(int i = 0; i < count; i++){
    player_create(&players[i]);
  }
}

void player_printName(Player *player){
   printf("%d. %s \n", player->id  ,nameStrings[player->name]);

}

void player_printAllNames(Player players[]){
  for(int i = 0; i < playerCount; i++){
    player_printName(&players[i]);
  }
}

void player_drawCard(Card *hand, Card *card){
  hand->face = card->face;
  hand->suit = card->suit;
  

}

void player_drawAllCards(Player players[],  Card cards[], int numPlayers, int handSize){
  
  for(int i = 0; i < numPlayers; i++){
    for(int j = 0; j < handSize; j++){
      player_drawCard(&players[i].hand[j], &cards[cardCount]);
      cardCount++;
    }
  }
}

void player_printCard(Player *player, int pos){
  player_printName(player);
  card_print(player->hand[pos]);
  card_printInt(player->hand[pos]);
}

void player_printHand(Player *player, int handSize){
  for(int i = 0; i < handSize; i++){
    printf("(%d)\n", i);
    player_printCard(player, i);
  }
}
