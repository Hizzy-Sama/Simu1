//---------------------------------------
// Basic user config
//---------------------------------------

// 1: Launch game simulation
// 0: Ignore game simulation
#define PLAY_GAME_1 1
#define PLAY_GAME_2 1
#define PLAY_GAME_3 1
#define PLAY_GAME_4 1
#define PLAY_GAME_5 1

// Monte Carlo iteration
#define ITERATIONS 1000000

// 1: Show details of each game
// 0: Ignore details
// /!\ there's a lot of data !
#define SHOW_DETAILS 0

//---------------------------------------
// Source code
//---------------------------------------
#include <utils.h>
#include <games.h>

extern unsigned char ShowDetails;

int main(int argc, char *argv[]) {
	// Avoid warnings
	(void)argc;	(void)argv;
	
	// Future dev :
	// - change I/O to write in a logfile
	// - change I/O to bind a UI app (eg. web app)

	// Init random generator
	srand(time(NULL));

	// Vars
	long int playerMoney;
	long int winCount;
	char	 gain;
	double   frequency;
	double   expectation;

	// Game simulations
	ShowDetails = SHOW_DETAILS ? 1 : 0;

	printf("Start simulation of games : %s%s%s%s%s\n\n",
		PLAY_GAME_1?"1 ":"",
		PLAY_GAME_2?"2 ":"",
		PLAY_GAME_3?"3 ":"",
		PLAY_GAME_4?"4 ":"",
		PLAY_GAME_5?"5 ":""
	);

	if(PLAY_GAME_1){
		playerMoney = 0; winCount = 0; gain = 0; frequency = 0; expectation = 0;
		for(size_t i = 0; i < ITERATIONS; i++)
		{
			gain = playGame1();
			playerMoney += gain;
			if(gain > -1){ winCount++; }
		}
		
		frequency = (double)winCount * 100 / ITERATIONS;
		expectation = (double)playerMoney / ITERATIONS;

		printf("[GAME 1] Frequency   :  %g %%\n", frequency);
		printf("[GAME 1] Expectation :  %g $/game\n\n", expectation);
	}
	if(PLAY_GAME_2){
		playerMoney = 0; winCount = 0; gain = 0; frequency = 0; expectation = 0;
		for(size_t i = 0; i < ITERATIONS; i++)
		{
			gain = playGame2();
			playerMoney += gain;
			if(gain > -1){ winCount++; }
		}
		
		frequency = (double)winCount * 100 / ITERATIONS;
		expectation = (double)playerMoney / ITERATIONS;

		printf("[GAME 2] Frequency   :  %g %%\n", frequency);
		printf("[GAME 2] Expectation :  %g $/game\n\n", expectation);
	}
	if(PLAY_GAME_3){
		playerMoney = 0; winCount = 0; gain = 0; frequency = 0; expectation = 0;
		for(size_t i = 0; i < ITERATIONS; i++)
		{
			gain = playGame3();
			playerMoney += gain;
			if(gain > -1){ winCount++; }
		}
		
		frequency = (double)winCount * 100 / ITERATIONS;
		expectation = (double)playerMoney / ITERATIONS;

		printf("[GAME 3] Frequency   :  %g %%\n", frequency);
		printf("[GAME 3] Expectation :  %g $/game\n\n", expectation);
	}
	if(PLAY_GAME_4){
		playerMoney = 0; winCount = 0; gain = 0; frequency = 0; expectation = 0;
		for(size_t i = 0; i < ITERATIONS; i++)
		{
			gain = playGame4();
			playerMoney += gain;
			if(gain > -1){ winCount++; }
		}
		
		frequency = (double)winCount * 100 / ITERATIONS;
		expectation = (double)playerMoney / ITERATIONS;

		printf("[GAME 4] Frequency   :  %g %%\n", frequency);
		printf("[GAME 4] Expectation :  %g $/game\n\n", expectation);
	}
	if(PLAY_GAME_5){
		playerMoney = 0; winCount = 0; gain = 0; frequency = 0; expectation = 0;
		for(size_t i = 0; i < ITERATIONS; i++)
		{
			gain = playGame5();
			playerMoney += gain;
			if(gain > -1){ winCount++; }
		}
		
		frequency = (double)winCount * 100 / ITERATIONS;
		expectation = (double)playerMoney / ITERATIONS;

		printf("[GAME 5] Frequency   :  %g %%\n", frequency);
		printf("[GAME 5] Expectation :  %g $/game\n\n", expectation);
	}

	return 0;
}