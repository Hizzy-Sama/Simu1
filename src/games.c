#include <games.h>

#define LOG 1

int playGame1()
{
    int win = 10, gain = -1;
    printf("[GAME 1] The player as bet, %d$... ", gain);

    Card c = getCardFromNewDeck();
    showCard(c);
    if(c.rank == 1) { 
        gain+=win; 
        printf(" it's a win ! +%d$\n", gain + 1);
    }
    else {
        printf(" maybe next time !\n");
    }

    return gain;
}

int playGame2()
{
    int win = 50, gain = -1;
    if(LOG) printf("[GAME 2] The player as bet, %d$... ", gain);

    Card card1 = getCardFromNewDeck(), card2 = getCardFromNewDeck();

    if(LOG) showCard(card1);
    if(LOG) printf(" & ");
    if(LOG) showCard(card2);

    if(card1.rank == card2.rank && card1.color == card2.color) { 
        gain+=win; 
        if(LOG) printf(" it's a win ! +%d$\n", gain + 1);
    }
    else {
        if(LOG) printf(" maybe next time !\n");
    }

    return gain;
}

int playGame3()
{
    int win = 2, gain = -1;
    if(LOG) printf("[GAME 3] The player as bet, %d$... ", gain);

    Deck * deck = initDeck();

    Card card1 = getCardFromDeck(deck);
    Card card2 = getCardFromDeck(deck);

    if(LOG) showCard(card1);
    if(LOG) printf(" & ");
    if(LOG) showCard(card2);

    if(card1.rank < card2.rank) { 
        gain+=win; 
        if(LOG) printf(" it's a win ! +%d$\n", gain + 1);
    }
    else {
        if(LOG) printf(" maybe next time !\n");
    }

    return gain;
}

int playGame4()
{
    int win = 1, gain = -1;
    if(LOG) printf("[GAME 4] The player as bet, %d$... ", gain);

    Deck * deck = initDeck();
    Card card;

    for(unsigned char i = 0; i < 3; i++)
    {
        card = getCardFromDeck(deck);
        if(LOG) showCard(card);
        if(LOG) printf(" ");
        if(card.color == 2) { gain += win; }
    }
    
    if(gain > -1) { 
        if(LOG) printf(" it's a win ! +%d$\n", gain + 1);
    }
    else {
        if(LOG) printf(" maybe next time !\n");
    }

    return gain;
}

int playGame5()
{
    int win = 5, gain = -1;
    if(LOG) printf("[GAME 5] The player as bet, %d$... ", gain);

    Deck * deck = initDeck();
    Card cards[5];

    for(unsigned char i = 0; i < 5; i++)
    {
        cards[i] = getCardFromDeck(deck);
        if(LOG) showCard(cards[i]);
        if(LOG) printf(" ");
    }
    
    /*
    S'il existe un sous-ensemble de ces
    cartes qui fait une série de trois
    valeurs de cartes consécutives ou plus
    (par exemple, 5-6-7 ou 10-J-Q),
    alors le joueur gagne : { gain += win; }
    */

    if(0/* TODO */) { 
        if(LOG) printf(" it's a win ! +%d$\n", gain + 1);
    }
    else {
        if(LOG) printf(" maybe next time !\n");
    }

    return gain;
}