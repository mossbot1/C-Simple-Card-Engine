#ifndef CARD_H
#define CARD_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
char suit[10];
char num[10];
}card;

int cardsDealt = 0;

#define N_SUITS 4
#define N_NUMS 13
void  createCards(card cards[]){
  
  char suits[][10] = {"Hearts", "Diamonds", "Clubs", "Spades"};
  char nums[][10] = {"Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King", "Ace"};

  int counter = 0;

  for(int i = 0; i < N_SUITS; i++ ){
    for(int j = 0; j < N_NUMS; j++){
      strcpy(cards[counter].suit, " ");
      strcat(cards[counter].suit, suits[i]);
      strcpy(cards[counter].num, " ");
      strcat(cards[counter].num, nums[j]);
      counter++;
    }
  }
}

void printCard(card thisCard){
  printf("The %s of %s \n", thisCard.num, thisCard.suit);
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

#endif
