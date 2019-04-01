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

void printCard(card thisCard){
  printf("%s Of %s", faceStrings[thisCard.face], suitStrings[thisCard.suit]);
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

void suitCounter(card thisCard){
  suitsDealt[thisCard.suit] += 1;
  printf("%s Dealt:  %d", suitStrings[thisCard.suit], suitsDealt[thisCard.suit]);
}

void faceCounter(card thisCard){
  facesDealt[thisCard.face] += 1;
  printf("%s Dealt: %d", faceStrings[thisCard.face], facesDealt[thisCard.face]);
}

void printCardsDealt(){
  printf("Cards Dealt: %d" , cardsDealt);
}
