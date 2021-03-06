#ifndef UTILS
#define UTILS

#include <stdio.h>
#include <stdbool.h>

//---------------------------------------
// Random
//---------------------------------------

#include <stdlib.h>     /* srand, rand */
#include <time.h>

//---------------------------------------
// Cards
//---------------------------------------

typedef struct card
{
    char rank;
    // assuming that A < 2 (not K < A)
    // 0   : Ace
    // 1-9 : Numbers (2-10)
    // 10  : Jack
    // 11  : Queen
    // 12  : King
    
    char color;
    // 0   : Clubs
    // 1   : Diamonds
    // 2   : Hearts
    // 3   : Spades

} Card;

Card initCard();
void showCard(Card);

typedef struct deck
{
    Card cards[52];

    unsigned char size;

} Deck;

Deck * initDeck();
void showDeck(Deck *);

//---------------------------------------
// Draft
//---------------------------------------

// creates no Deck struct,
// only a random card.
Card getCardFromNewDeck();

Card getCardFromDeck(Deck*);
int storeCardInDeck(Deck*, Card);

#endif