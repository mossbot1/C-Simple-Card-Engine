#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "headers/card.h"
#include "headers/player.h"
#include "headers/global.h"

int main(){

  srand(time(NULL));
  Card cards[52];
  
  card_createAll(cards);
  printf("--DECK CREATED\n");


  card_shuffle(cards, 52);
  printf("--DECK SHUFFLED\n");

  //DEBUGGING: print first 4 cards in deck
  card_printInt(cards[0]);
  printf("\n");
  card_printInt(cards[1]);
  printf("\n");
  card_printInt(cards[2]);
  printf("\n");
  card_printInt(cards[3]);
  printf("\n");

  //CREATE PLAYERS
  int numPlayers = 2;
  Player players[numPlayers];
  player_createAll(players, numPlayers);
  //player_printAllNames(players);

  player_drawAllCards(players, cards, numPlayers, maxHandSize);

  Player_printAllHands(players, maxHandSize);

  card_printDeals();
  
  return 0;
}
