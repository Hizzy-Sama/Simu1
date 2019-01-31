#include <utils.h>

//---------------------------------------
// Random
//---------------------------------------

char getRand(char min, char max)
{
  // generate random number
  // representing card from 1 to 52
  return (rand() % ((max+1) - min)) + min;
}

//---------------------------------------
// Cards
//---------------------------------------

Card initCard()
{
  Card card;
  card.rank = 0;
  card.color = 0;
  return card;
}

void showCard(Card card)
{
  char rank[10], color[10];

  switch(card.rank){
    case 11:
      sprintf(rank, "%s", "Jack");
      break;
    case 12:
      sprintf(rank, "%s", "Queen");
      break;
    case 0:
      sprintf(rank, "%s", "King");
      break;
    default:
      sprintf(rank,"%d", card.rank);
      break;
  }

  switch(card.color){
    case 0:
      sprintf(color, "%s", "Clubs");
      break;
    case 1:
      sprintf(color, "%s", "Diamonds");
      break;
    case 2:
      sprintf(color, "%s", "Hearts");
      break;
    case 3:
      sprintf(color, "%s", "Spades");
      break;
    default:
      sprintf(color, "%s", "???");
      break;
  }

  printf("[%s-%s]", rank, color);
}

Deck * initDeck()
{
  Deck * deck = calloc(sizeof(Deck), 1);
  deck->size = 0;

  for(unsigned char i = 1; i <= 52; i++)
  {
    Card card = initCard();
    deck->cards[i-1] = &card;
    deck->cards[i-1]->rank = i % 13;
    deck->cards[i-1]->color = i % 4;
    deck->size++;
  }

  return deck;
}

//---------------------------------------
// Draft
//---------------------------------------

Card getCardFromNewDeck()
{
  Card card = initCard();

  char randNumber = getRand(1,52);

  card.rank = randNumber % 13;
  card.color = randNumber % 4;
  return card;
}

Card getCardFromDeck(Deck * deck)
{
  unsigned char randNumber = getRand(0,51);
  Card * card = deck->cards[randNumber];

  return *card;
}
