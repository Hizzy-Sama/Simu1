#include <games.h>

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
    printf("[GAME 2] The player as bet, %d$... ", gain);

    Card c1 = getCardFromNewDeck(), c2 = getCardFromNewDeck();
    
    showCard(c1);
    printf(" & ");
    showCard(c2);

    if(c1.rank == c2.rank && c1.color == c2.color) { 
        gain+=win; 
        printf(" it's a win ! +%d$\n", win);
    }
    else {
        printf(" maybe next time !\n");
    }

    return gain;
}

int playGame3()
{
    return 0;
}