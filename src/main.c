#include <utils.h>
#include <games.h>

int main(int argc, char *argv[]) {
	//avoid warnings
	(void)argc;	(void)argv;
	
	//TODO changer I/O standards

	//init random generator
	srand(time(NULL));

	//Test des jeux
	if(0){
		for(size_t i = 0; i < 100; i++)
		{
			playGame1();
		}
	}
	if(0){
		for(size_t i = 0; i < 1000; i++)
		{
			playGame2();
		}
	}
	if(0){
		for(size_t i = 0; i < 100; i++)
		{
			playGame3();
		}
	}
	if(1){
		for(size_t i = 0; i < 100; i++)
		{
			playGame4();
		}
	}
	if(0){
		for(size_t i = 0; i < 100; i++)
		{
			playGame5();
		}
	}

	return 0;
}