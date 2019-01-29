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

typedef struct Card
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

//---------------------------------------
// Draft
//---------------------------------------

Card getCardFromNewDeck();

#endif