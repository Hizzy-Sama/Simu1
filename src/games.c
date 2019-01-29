#include <games.h>

int playGame1()
{
    int win = 10, gain = -1;
    printf("The player as bet, %d$... ", gain);

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