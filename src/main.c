#include <utils.h>
#include <games.h>

int main(int argc, char *argv[]) {
	//avoid warnings
	(void)argc;	(void)argv;
	
	//TODO changer I/O standards

	//init random generator
	srand(time(NULL));

	//Nombre d'iteration
	size_t iterations = 10000;
	double playerMoney = 0;

	//Test des jeux
	if(1){
		for(size_t i = 0; i < iterations; i++)
		{
			
			playerMoney += playGame1();
		}
		double proba = playerMoney/iterations * 100;
		printf(" Probalite de gagne:  %f \n", proba);
	}
/*	if(0){
		for(size_t i = 0; i < iterations; i++)
		{
			
			if(playGame2()>0){
				combigagnantes += 1;
			};
		}
		double proba = combigagnantes/iterations * 100;
		printf(" Probalite de gagne:  %f \n", proba);
	}
	if(0){
		for(size_t i = 0; i < iterations; i++)
		{
			
			if(playGame3()>0){
				combigagnantes += 1;
			};
		}
		double proba = combigagnantes/iterations *100;
		printf(" Probalite de gagne:  %f \n", proba);
	}
	if(0){
		for(size_t i = 0; i < iterations; i++)
		{
			
			if(playGame4()>0){
				combigagnantes += 1;
			};
		}
		double proba = combigagnantes/iterations * 100;
		printf(" Probalite de gagne:  %f \n", proba);
	}
	if(0){
		for(size_t i = 0; i < iterations; i++)
		{
			
			if(playGame5()>0){
				combigagnantes += 1;
			};
		}
		double proba = combigagnantes/iterations * 100;
		printf(" Probalite de gagne:  %f \n", proba);
	}*/

	return 0;
}