#ifndef CARD_H
#define CARD_H

typedef struct {
  int suit;
  int *pSuit;
  int face;
  int *pFace;
}Card;



//Make 1 card object
void card_create(Card *card, int suit, int face);

//fill blank card array with card objects
void card_createAll(Card cards[]);

//print card (Two Of Hearts)
void card_print(Card card);

//print card int positions (0 Of 0)
void card_printInt(Card card);

//Fisher-Yates Shuffle deck
void card_shuffle(Card cards[], int n);

//increment suit counter array
void card_suitCount(Card *card);

//increment face counter array
void card_faceCount(Card *card);


//Add 1 to card dealt counter as well as increment suits/faces counting arrays
void card_deal(Card *card);

//print cards dealt and suits dealt (debugging)
void card_printDeals();

#endif
