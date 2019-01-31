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
        printf(" it's a win ! +%d$\n", win);
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
        if(LOG) printf(" it's a win ! +%d$\n", win);
    }
    else {
        if(LOG) printf(" maybe next time !\n");
    }

    return gain;
}

int playGame3()
{
    //nothing yet

    return 0;
}