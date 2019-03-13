#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../headers/card.h"

const char suitStrings[][10] = {"Hearts", "Diamonds", "Clubs", "Spades"};
const char faceStrings[][10] = {"Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King", "Ace"};

int cardsDealt = 0, heartsDealt = 0, diamondsDealt = 0, clubsDealt = 0, spadesDealt = 0;

int twosDealt = 0,
  threesDealt = 0,
  foursDealt = 0,
  fivesDealt = 0,
  sixesDealt = 0,
  sevensDealt = 0,
  eightsDealt = 0,
  ninesDealt = 0,
  tensDealt = 0,
  jacksDealt = 0,
  queensDealt = 0,
  kingsDealt = 0,
  acesDealt = 0;

int suitsDealt[4] = {0,0,0,0};
int facesDealt[12] = {0,0,0,0,0,0,0,0,0,0,0,0};

//fill blank card array with card objects
void createCards(card cards[]){

  int counter = 0;

  for(int i = 0; i < N_SUITS; i++ ){
    for(int j = 0; j < N_NUMS; j++){
      cards[counter].suit = i;
      cards[counter].face = j;
      counter++;
    }
  }
}

const char * printCardSuit(card thisCard){
  return suitStrings[thisCard.suit];
}

const char * printCardFace(card thisCard){
  return faceStrings[thisCard.face];
}

void printCard(card thisCard){
  printf("%s Of %s", printCardFace(thisCard), printCardSuit(thisCard));
}

void printCardEnums(card thisCard){
  printf("%d Of %d", thisCard.face, thisCard.suit);
}

void shuffleCards(card cards[], int n){
 
  int i,j;
  card tmp;
  
  for( i = n -1; i >=  0; i--){
    j = rand() % (i + 1);
    tmp = cards[j];
    cards[j] = cards[i];
    cards[i] = tmp;
  }
}


void  printCardsDealt(){
  printf("Cards Dealt: %d" , cardsDealt);
}

void suitCounter(card thisCard){
  suitsDealt[thisCard.suit] += 1;
  printf("%s Dealt:  %d", printCardSuit(thisCard), suitsDealt[thisCard.suit]);
}

void faceCounter(card thisCard){
  facesDealt[thisCard.face] += 1;
   printf("%s Dealt: %d", printCardFace(thisCard), facesDealt[thisCard.face]);
  
}

void dealCard(card thisCard){
  printCard(thisCard);
  printf(" |");
  printCardEnums(thisCard);

  printf(" |");
  cardsDealt++;
  printCardsDealt();
   printf(" |");
  suitCounter(thisCard);
  printf(" |");
  faceCounter(thisCard);
  printf("\n\n");
 }

