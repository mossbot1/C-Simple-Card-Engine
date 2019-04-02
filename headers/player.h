#ifndef PLAYER_H
#define PLAYER_H

#include "card.h"

typedef struct {
  int id;
  int name;
  int cardsInHand;
  Card hand[7];
}Player;

void player_create(Player *player);

void player_createAll(Player players[], int count);

void player_printName(Player *player);

void player_printAllNames(Player players[]);

void player_drawCard(Card *hand, Card *card);

void player_drawAllCards(Player players[], Card cards[], int numPlayers, int handSize);

void player_printCard(Player *player, int pos);

void player_printHand(Player *player, int handSize);
  
#endif

