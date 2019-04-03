#include "./card.h"
#include "./global.h"

#define maxHandSize 2

typedef struct {
  int id;
  int name;
  int cardsInHand;
  Card hand[maxHandSize];
}Player;

//set name and id of player, increment player count
void player_create(Player *player);

//multiple player_create using an array
void player_createAll(Player players[], int count);

//print player id and name to screen
void player_printName(Player *player);

//print all player ids and names to screen
void player_printAllNames(Player players[]);

//pass in a hand position and card from deck and make them equal
void player_drawCard(Card *hand, Card *card);

//for each player, draw cards, activate card_deal and increment total card count
void player_drawAllCards(Player players[], Card cards[], int numPlayers, int handSize);

//print a card in hand in string form and int form
void player_printCard(Player *player, int pos);

//player_printCard for all cards in a hand
void player_printHand(Player *player, int handSize);

//player_printHand for each player
void Player_printAllHands(Player players[], int handSize);

#endif
