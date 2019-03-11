#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "headers/card.h"



int main(){
   srand(time(NULL));

  card cards[52];
  createCards(cards);

  shuffleCards(cards, 52);
  
  printCard(cards[0]);
  printCard(cards[1]);
  printCard(cards[2]);
}
