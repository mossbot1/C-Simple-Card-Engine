#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "./headers/card.h"



int main(){
  srand(time(NULL));
  card cards[52];
  
  createCards(cards);

  printCard(cards[0]);
  printCardEnums(cards[0]);

  
  shuffleCards(cards, 52);

  printCard(cards[0]);
  printCardEnums(cards[0]);

  dealCard();
  printCardsDealt();
  dealCard();
  printCardsDealt();
}
