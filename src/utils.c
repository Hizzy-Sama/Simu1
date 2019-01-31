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
      sprintf(rank, "%s", "J");
      break;
    case 12:
      sprintf(rank, "%s", "Q");
      break;
    case 0:
      sprintf(rank, "%s", "K");
      break;
    case 1:
      sprintf(rank, "%s", "A");
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
    card.rank = i % 13;
    card.color = (i-1) / 13;
    deck->cards[i-1] = card;
    deck->size++;
  }

  return deck;
}

void showDeck(Deck * deck)
{
  for(unsigned char i = 0; i < deck->size; i++)
  {
    if(i > 0) { printf( i % 4 == 0 ? "\n" : "\t"); }
    showCard(deck->cards[i]);
  }

  printf("\n");
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
  Card card = deck->cards[randNumber];
  deck->size--;
  for(unsigned char i = randNumber; i < deck->size; i++)
  {
    deck->cards[i] = deck->cards[i+1];
  }
  
  return card;
}

int storeCardInDeck(Deck * deck, Card card)
{
  // if we want to keep 52 as a maximum
  if(deck->size >= 52) { return -1; }

  deck->cards[deck->size] = card;
  deck->size++;

  return 0;
}
