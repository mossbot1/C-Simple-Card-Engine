#ifndef CARD_H
#define CARD_H

typedef struct {
  int suit;
  int *pSuit;
  int face;
  int *pFace;
}Card;

#define N_SUITS 4
#define N_NUMS 13

//Make one card objects
void card_create(Card *card, int suit, int face);

//Make the deck of card objects
void card_createAll(Card cards[]);

//To string of cards (Two Of Hearts)
void card_print(Card card);

//to string of card enum positions (0 Of 0)
void card_printInt(Card card);

//Fisher-Yates Shuffle
void card_shuffle(Card cards[], int n);

//Used for counting how many of each suit is dealt.
void card_suitCount(Card card);

//Used for counting how many of each face is dealt
void card_faceCount(Card card);

//print current cards dealt
void card_dealtCount();

//Add 1 to card dealt counter, return current cards dealt after;
void card_deal(Card card);

#endif
