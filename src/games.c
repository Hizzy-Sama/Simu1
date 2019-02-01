#include <games.h>

#define LOG 1

int playGame1()
{
    int win = 10, gain = -1;
    printf("[GAME 1] The player as bet, %d$... ", gain);

    Card c = getCardFromNewDeck();
    showCard(c);
    if(c.rank == 0 /* ACE */) { 
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

    // A 2 3 4 5 6 7 8 9 J Q K A 2 3 4 5 6 7 8 9 J Q K
    unsigned long int mask = 0;

    for(unsigned char i = 0; i < 5; i++)
    {
        cards[i] = getCardFromDeck(deck);
        mask |= 1 << (cards[i].rank);
        mask |= 1 << (cards[i].rank + 13);
        if(LOG) showCard(cards[i]);
        if(LOG) printf(" ");
    }

    if(LOG) printf("\nLooking for an ordered sequence... ");
    
    unsigned char count = 0;
    unsigned char lastRank = 0;
    unsigned char sequenceLength = 1;

    for(size_t i = 0; i < 26; i++)
    {
        if(mask & (1 << i)) 
        {
            count++;
            if(count > sequenceLength)
            {
                sequenceLength = count;
                lastRank = i;
            }
        }
        else
        {
            count = 0;
        }
    }

    if(sequenceLength >= 3) {
        gain += win;
        if(LOG)
        {
            printf("{ ");
            char rank[3];
            for(int i = sequenceLength - 1; i >= 0 ; i--)
            {
                switch((lastRank-i) % 13){
                case 10:
                    sprintf(rank, "%s", "J");
                    break;
                case 11:
                    sprintf(rank, "%s", "Q");
                    break;
                case 12:
                    sprintf(rank, "%s", "K");
                    break;
                case 0:
                    sprintf(rank, "%s", "A");
                    break;
                default:
                    sprintf(rank,"%d", (lastRank + 1 - i) % 13);
                    break;
                }
                printf("%s ", rank);
            }
            printf("} it's a win ! +%d$\n", gain + 1);
        }
    }
    else {
        if(LOG) printf("Nothing found, maybe next time !\n");
    }

    return gain;
}