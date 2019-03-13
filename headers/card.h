#ifndef CARD_H
#define CARD_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef enum{heart, diamond, club, spade} Suit;
typedef enum{two, three, four, five, six, seven, eight, nine, ten, jack, queen, king , ace}  Face;


typedef struct {
  Suit suit;
  Face face;
}card;

#define N_SUITS 4
#define N_NUMS 13

//Make the deck of card objects
void createCards(card cards[]);

//To string of cards (Two Of Hearts)
void printCard(card thisCard);

//to string of card enum positions (0 Of 0)
void printCardEnums(card thisCard);

//Fisher-Yates Shuffle
void shuffleCards(card cards[], int n);

//Add 1 to card dealt counter, return current cards dealt after;
int dealCard();

//print current cards dealt
void printCardsDealt();

#endif
