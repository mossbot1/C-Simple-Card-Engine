#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "headers/card.h"
#include "headers/player.h"

int main(){

  srand(time(NULL));
  Card cards[52];
  
  card_createAll(cards);
  printf("--DECK CREATED\n");


  card_shuffle(cards, 52);
  printf("--DECK SHUFFLED\n");

  card_printInt(cards[0]);
  card_printInt(cards[1]);
  card_printInt(cards[2]);
  card_printInt(cards[3]);
  card_printInt(cards[4]);
  card_printInt(cards[5]);
  printf("\n\n");

  int numPlayers = 3;
  Player players[numPlayers];
  player_createAll(players, numPlayers);
  //player_printAllNames(players);

  int handSize = 2;

  player_drawAllCards(players, cards, numPlayers, handSize);

  player_printHand(&players[0], handSize);
  player_printHand(&players[1], handSize);
  player_printHand(&players[2], handSize);
  
  printf("\n\n");
  
  return 0;
}

