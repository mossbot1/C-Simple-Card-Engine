#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "./headers/card.h"



int main(){

  printf("--C CARD GAME -----------------MOSSBOT1\n\n");
  srand(time(NULL));
  card cards[52];
  
  createCards(cards);
  printf("--DECK CREATED\n\n");

  shuffleCards(cards, 52);
  printf("--DECK SHUFFLED\n\n");

  dealCard(cards[0]);
  dealCard(cards[1]);
  dealCard(cards[2]);
  dealCard(cards[3]);
  dealCard(cards[4]);

  printf("--GAME END-----------------\n\n");
}
