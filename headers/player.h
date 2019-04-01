#ifndef PLAYER_H
#define PLAYER_H

#include "card.h"

typedef struct {
  int id;
  int name;
  int cardsInHand;
  card hand[];
}player;

void createPlayers(player players[], int count);

void printAllNames(player players[]);

void drawCards(player players[], card cards[], int numPlayers, int handSize);

void changeCard(card hand[], card cards[], int handpos,  int cardpos);
  
#endif
