#include <utils.h>
#include <games.h>

int main(int argc, char *argv[]) {
	//avoid warnings
	(void)argc;	(void)argv;
	
	//TODO changer I/O standards

	//init random generator
	srand(time(NULL));

	//Nombre d'iteration
	size_t iterations = 1000000;


	//Test des jeux
	if(1){
		double playerMoney = 0;
		double win = 0;
		for(size_t i = 0; i < iterations; i++)
		{
			double gain = playGame1();
			playerMoney += gain;
			if(gain >0){win++;}
		}
		double proba = win/iterations * 100;
		printf("[GAME1] Frequence:  %f %%\n", proba);
	}
	if(1){
		double playerMoney = 0;
		double win = 0;
		for(size_t i = 0; i < iterations; i++)
		{
			double gain = playGame2();
			playerMoney += gain;
			if(gain >0){win++;}
		}
		double proba = win/iterations * 100;
		printf("[GAME2] Frequence:  %f %%\n", proba);
	}
	if(1){
		double playerMoney = 0;
		double win = 0;
		for(size_t i = 0; i < iterations; i++)
		{
			double gain = playGame3();
			playerMoney += gain;
			if(gain >0){win++;}
		}
		double proba = win/iterations * 100;
		printf("[GAME3] Frequence:  %f %%\n", proba);
	}
	if(1){
		double playerMoney = 0;
		double win = 0;
		for(size_t i = 0; i < iterations; i++)
		{
			double gain = playGame4();
			playerMoney += gain;
			if(gain >0){win++;}
		}
		double proba = win/iterations * 100;
		printf("[GAME4] Frequence:  %f %%\n", proba);
	}
	if(1){
		double playerMoney = 0;
		double win = 0;
		for(size_t i = 0; i < iterations; i++)
		{
			double gain = playGame5();
			playerMoney += gain;
			if(gain >0){win++;}
		}
		double proba = win/iterations * 100;
		printf("[GAME5] Frequence:  %f %%\n", proba);
	}

	return 0;
}