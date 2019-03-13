#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../headers/card.h"

const char suitStrings[][10] = {"Hearts", "Diamonds", "Clubs", "Spades"};
const char faceStrings[][10] = {"Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King", "Ace"};

int cardsDealt = 0;


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
  printf("%s Of %s \n", faceStrings[thisCard.face], suitStrings[thisCard.suit] );
}

void printCardEnums(card thisCard){
  printf("%d Of %d \n", thisCard.face, thisCard.suit);
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

int dealCard(){
  cardsDealt++;
  return cardsDealt;
}

void  printCardsDealt(){
  printf("Cards dealt - %d \n" , cardsDealt);
}
