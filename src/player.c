#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "../headers/player.h"
#include "../headers/global.h"

//Names for each character added up to 20
const char nameStrings[][20] = {"Player", "Boris", "Sanchez", "Big Decky", "The Glorb", "Dustin", "Living Chair", "Derek", "Satan", "Ringo", "Gordon", "Jesus", "Swonk"};

//Set name and id of player. increment player count
void player_create(Player *player){
  player->id = playerCount;
  player->name = playerCount;
  playerCount++;
}

//multiple player_create using an array
void player_createAll(Player players[], int count){
  for(int i = 0; i < count; i++){
    player_create(&players[i]);
  }
}

//print player id and name to screen
void player_printName(Player *player){
   printf("%d. %s ", player->id  ,nameStrings[player->name]);

}

//print all player ids and names to screen
void player_printAllNames(Player players[]){
  for(int i = 0; i < playerCount; i++){
    player_printName(&players[i]);
  }
}

//pass in a hand position and card from deck and make them equal
void player_drawCard(Card *hand, Card *card){
  hand->face = card->face;
  hand->suit = card->suit;
}

//For each player, draw cards, activate card_deal and increment total card count
void player_drawAllCards(Player players[],  Card cards[], int numPlayers, int handSize){
  
  for(int i = 0; i < numPlayers; i++){
    for(int j = 0; j < handSize; j++){
      player_drawCard(&players[i].hand[j], &cards[cardCount]);
      card_deal(&cards[cardCount]);
      cardCount++;
    }
  }
}

//Print a card in hand in string form and int form
void player_printCard(Player *player, int pos){
  player_printName(player);
  card_print(player->hand[pos]);
  card_printInt(player->hand[pos]);
}

//player_printCard for all cards in hand
void player_printHand(Player *player, int handSize){
  for(int i = 0; i < handSize; i++){
    player_printCard(player, i);
    printf("(%d)\n", i);
  }
}

//player_printHand for each player
void Player_printAllHands(Player players[], int handSize){
  for(int i = 0; i < playerCount; i++){
    player_printHand(&players[i], handSize);
  }
}
