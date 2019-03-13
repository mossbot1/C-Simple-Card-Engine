#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../headers/card.h"

const char suitStrings[][10] = {"Hearts", "Diamonds", "Clubs", "Spades"};
const char faceStrings[][10] = {"Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King", "Ace"};

int cardsDealt = 0, heartsDealt = 0, diamondsDealt = 0, clubsDealt = 0, spadesDealt = 0;


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
  printf("%s Of %s ", faceStrings[thisCard.face], suitStrings[thisCard.suit] );
}

void printCardEnums(card thisCard){
  printf("%d Of %d ", thisCard.face, thisCard.suit);
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
  printf("Cards Dealt = %d " , cardsDealt);
}

void suitCounter(card thisCard){
   switch(thisCard.suit){

  case 0:
    heartsDealt++;
    printf("Hearts Dealt = %d ", heartsDealt);
    break;

  case 1:
    diamondsDealt++;
    printf("Diamonds Dealt = %d ", diamondsDealt);
    break;

  case 2:
    clubsDealt++;
    printf("Clubs Dealt = %d ", clubsDealt);
    break;

  case 3:
    spadesDealt++;
    printf("Spades Dealt = %d ", spadesDealt);
    break;

  default:
    printf("ERROR: suit unknown ");
    break;
   }
}

void dealCard(card thisCard){
  printf("--DEAL CARD---------------------------\n");
  printCard(thisCard);
  printf("\t\t");
  printCardEnums(thisCard);

  printf("\n");
  cardsDealt++;
  printCardsDealt();
   printf("\t");
  suitCounter(thisCard);
  printf("\n\n");
 }


