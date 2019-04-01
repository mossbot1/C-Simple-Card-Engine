#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "./headers/card.h"
#include "./headers/player.h"


void printall(card cards[], int  max);

int main(){

  printf("--C CARD GAME -----------------MOSSBOT1\n\n");
  srand(time(NULL));
  card cards[52];
  
  createCards(cards);
  printf("--DECK CREATED\n");

  shuffleCards(cards, 52);
  printf("--DECK SHUFFLED\n");

  printall(cards, 6);
  
  int playerCount = 2;
  int handSize = 4;
  int cardCount = 0;
  player players[playerCount];
  createPlayers(players, playerCount);
  printf("--PLAYERS CREATED\n");
  //printAllNames(players);

  for(int i = 0; i < 4; i++){  
  changeCard(players[0].hand, cards, i, i);
  }
    

  
  
  printf("%d of %d \n", players[0].hand[0].face, players[0].hand[0].suit);
  printf("%d of %d \n", players[0].hand[1].face, players[0].hand[1].suit);
  printf("%d of %d \n", players[0].hand[2].face, players[0].hand[2].suit);
  printf("%d of %d \n", players[0].hand[3].face, players[0].hand[3].suit);
  printf("%d of %d \n", players[0].hand[4].face, players[0].hand[4].suit);
  printf("%d of %d \n", players[0].hand[5].face, players[0].hand[5].suit);


  printf("--GAME END-----------------\n");
}

void printall(card cards[], int  max){
  for(int i = 0; i < max; i++){
    printf("%d of %d \n", cards[i].face, cards[i].suit);
  }
}
