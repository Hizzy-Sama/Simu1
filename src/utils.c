#include <utils.h>

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

  for(char i = 1; i <= 52; i++)
  {
    deck->cards[i] = initCard();
    deck->cards[i].rank = i % 13;
    deck->cards[i].color = i % 4;
  }

  return deck;
}

Card getCardFromNewDeck()
{
  Card card = initCard();

  // generate random number
  // representing card from 1 to 52
  char randNumber = (rand() % 52) + 1;

  card.rank = randNumber % 13;
  card.color = randNumber % 4;
  return card;
}