#ifndef CARD_H
#define CARD_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
  int suit;
  int face;
}card;

#define N_SUITS 4
#define N_NUMS 13

//Make the deck of card objects
void createCards(card cards[]);

const char * printCardSuit(card thisCard);

const char * printCardFace(card thisCard);

//To string of cards (Two Of Hearts)
void printCard(card thisCard);

//to string of card enum positions (0 Of 0)
void printCardEnums(card thisCard);

//Fisher-Yates Shuffle
void shuffleCards(card cards[], int n);

//Add 1 to card dealt counter, return current cards dealt after;
void dealCard();

//Used for counting how many of each suit is dealt.
void suitCounter(card thisCard);

//Used for counting how many of each face is dealt
void faceCounter(card thisCard);

//print current cards dealt
void printCardsDealt();

#endif
