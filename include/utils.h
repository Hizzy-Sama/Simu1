#ifndef UTILS
#define UTILS

#include <stdio.h>

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
    // 1-10 :   Numbers
    // 11 :     Jack
    // 12 :     Queen
    // 13 :     King
    
    char color;
    // 0: Clubs
    // 1: Diamonds
    // 2: Hearts
    // 3: Spades

} Card;

Card initCard();
void showCard(Card);

typedef struct deck
{
    Card cards[52];

} Deck;

Deck * initDeck();

//---------------------------------------
// Draft
//---------------------------------------

// creates no Deck struct,
// only a random card.
Card getCardFromNewDeck();

#endif