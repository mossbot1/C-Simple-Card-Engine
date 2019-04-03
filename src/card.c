#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../headers/card.h"
#include "../headers/global.h"

const char suitStrings[][10] = {"Hearts", "Diamonds", "Clubs", "Spades"};
const char faceStrings[][10] = {"Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King", "Ace"};

int suitsDealt[N_SUITS];
int facesDealt[N_FACES];

//make 1 card object
void card_create(Card *card, int suit, int face){
  card->suit = suit;
  card->face = face;
}

//fill blank card array with card objectss
void card_createAll(Card cards[]){

  int counter = 0;
  
  for(int i = 0; i < N_SUITS; i++ ){
    for(int j = 0; j < N_FACES; j++){
      card_create(&cards[counter], i, j);
      counter++;
    }
  }
}

//print card (two of hearts)
void card_print(Card card){
  printf("%s Of %s ", faceStrings[card.face], suitStrings[card.suit]);
}

//print card int positions (0 of 0)
void card_printInt(Card card){
  printf("%d Of %d ", card.face, card.suit);
}

//Fisher-Yates Shuffle deck
void card_shuffle(Card cards[], int n){ 
  int i,j;
  Card tmp;
  
  for( i = n -1; i >=  0; i--){
    j = rand() % (i + 1);
    tmp = cards[j];
    cards[j] = cards[i];
    cards[i] = tmp;
  }
}

//increment suit counter array
void card_suitCount(Card *card){
  suitsDealt[card->suit]++;
}

//increment face counter array
void card_faceCount(Card *card){
  facesDealt[card->face]++;
}

//Add 1 to card dealt counter as well as increment suits/faces counting arrays
void card_deal(Card *card){
  card_suitCount(card);
  card_faceCount(card);
  cardsDealt++;
 }

//print cards dealt and suits dealt (debugging) 
void card_printDeals(){
  printf("Cards dealt: %d \n", cardsDealt);
  
  printf("Hearts: %d Diamonds: %d, Clubs: %d, Spades: %d \n", suitsDealt[0], suitsDealt[1], suitsDealt[2], suitsDealt[3]);
}
