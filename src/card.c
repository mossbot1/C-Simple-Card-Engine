#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../headers/card.h"

const char suitStrings[][10] = {"Hearts", "Diamonds", "Clubs", "Spades"};
const char faceStrings[][10] = {"Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King", "Ace"};

//counting variables
int cardsDealt = 0;
int suitsDealt[4] = {0,0,0,0};
int facesDealt[12] = {0,0,0,0,0,0,0,0,0,0,0,0};

//Create 1 card
void card_create(Card *card, int suit, int face){
  card->suit = suit;
  card->face = face;
}

//fill blank card array with card objects
void card_createAll(Card cards[]){

  int counter = 0;
  
  for(int i = 0; i < N_SUITS; i++ ){
    for(int j = 0; j < N_NUMS; j++){
      card_create(&cards[counter], i, j);
      counter++;
    }
  }
}

void card_print(Card card){
  printf("%s Of %s \n", faceStrings[card.face], suitStrings[card.suit]);
}

void card_printInt(Card card){
  printf("%d Of %d \n", card.face, card.suit);
}

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

void card_suitCount(Card card){
  suitsDealt[card.suit] += 1;
  printf("%s Dealt:  %d \n", suitStrings[card.suit], suitsDealt[card.suit]);
}

void card_faceCount(Card card){
  facesDealt[card.face] += 1;
  printf("%s Dealt: %d \n", faceStrings[card.face], facesDealt[card.face]);
}

void card_dealtCount(){
  printf("Cards Dealt: %d \n" , cardsDealt);
}

void card_deal(Card card){
  cardsDealt++;
  card_dealtCount();
  card_suitCount(card);
  card_faceCount(card);
 }
