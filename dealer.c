int DrawCardFromInfiniteDeckDealer()
  {
    int card, suit, rank;
    char rankchar;
    char suitstring[10];

    card = //generate random number representing card from 1 to 51

    /* determine suit using ordering for Bridge card game */ 
    suit = card / 13;
    if( suit == 0 )
      strcpy(suitstring, "Clubs");
    else if( suit == 1 )
      strcpy(suitstring, "Diamonds");
    else if( suit == 2 )
      strcpy(suitstring, "Hearts");
    else if( suit == 3 )
      strcpy(suitstring, "Spades");
    else strcpy(suitstring, "WTF???");

    /* determine card rank value as well */
    rank = card % 13;
    if( rank == 0 )
      rankchar = 'A';
    else if( rank == 10 )
      rankchar = 'J';
    else if( rank == 11 )
      rankchar = 'Q';
    else if( rank == 12 )
      rankchar = 'K';
    else rankchar = '1' + rank;

    if( rank == 9 )
      printf("Card from dealer is the 10 of %s\n", suitstring);
    else printf("Card from dealer is the %c of %s\n", rankchar, suitstring);


    return( card );
  }
